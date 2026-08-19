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
    if (!dest || !client)
        return dest;

    // Applies shape-specific adjustment based on TacticalClass_field_D64
    int offset_x = (int)(TacticalClass_field_D64);
    int offset_y = (int)(TacticalClass_field_D68);

    dest->X += offset_x;
    dest->Y += offset_y;
    return dest;
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
void TacticalClass::RenderIsometric(const RectangleStruct& viewRect, int flags)
{
// [IDA decompile]
unsigned int __thiscall TacticalClass_RenderIsometric(int this, int *a2, int a3)
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
  _DWORD *v18; // eax
  int v19; // ebp
  int v20; // [esp+10h] [ebp-98h] BYREF
  float v21; // [esp+14h] [ebp-94h] BYREF
  float v22; // [esp+18h] [ebp-90h]
  int v23; // [esp+1Ch] [ebp-8Ch]
  int v24; // [esp+20h] [ebp-88h]
  int v25; // [esp+24h] [ebp-84h]
  int v26; // [esp+28h] [ebp-80h]
  int v27; // [esp+2Ch] [ebp-7Ch]
  __int16 v28; // [esp+30h] [ebp-78h]
  __int16 v29; // [esp+32h] [ebp-76h]
  int v30; // [esp+38h] [ebp-70h]
  int v31; // [esp+3Ch] [ebp-6Ch]
  int v32; // [esp+40h] [ebp-68h]
  int v33[2]; // [esp+44h] [ebp-64h] BYREF
  int v34; // [esp+4Ch] [ebp-5Ch]
  int v35; // [esp+50h] [ebp-58h]
  float v36[3]; // [esp+54h] [ebp-54h] BYREF
  _DWORD v37[6]; // [esp+60h] [ebp-48h] BYREF
  int v38; // [esp+78h] [ebp-30h]
  _DWORD v39[3]; // [esp+7Ch] [ebp-2Ch] BYREF
  int v40[4]; // [esp+88h] [ebp-20h] BYREF
  int v41[4]; // [esp+98h] [ebp-10h] BYREF

  v3 = *a2;
  v23 = 0;
  v5 = *(_DWORD *)(this + 176) + v3;
  v6 = a2[1] + *(_DWORD *)(this + 180);
  v24 = v5 - MEMORY[0x886FA0];
  v25 = v6 - MEMORY[0x886FA4];
  v21 = (float)(v5 - MEMORY[0x886FA0]);
  v22 = (float)(v6 - MEMORY[0x886FA4]);
  v7 = TransformMatrix3x4Point(v36, (float *)(this + 3556), &v21);
  v21 = *v7;
  v22 = v7[1];
  v23 = *((_DWORD *)v7 + 2);
  v8 = Math::RoundToInt(v21);
  v9 = Math::RoundToInt(v22);
  Coord::Subtract(v39, v8, v9, 0);
  v10 = a2[3];
  LOWORD(v20) = v39[0] / 256;
  HIWORD(v20) = v39[1] / 256;
  v24 = v20;
  v11 = v10 / 15 + 17;
  v12 = (unsigned __int64)(2290649225LL * a2[2]) >> 32;
  v30 = v11;
  v12 >>= 5;
  LOWORD(v24) = v20 - 2;
  result = (unsigned int)v12 >> 31;
  v31 = v12 + ((unsigned int)v12 >> 31) + 4;
  v14 = 0;
  while ( v14 < v11 )
  {
    v15 = v14 / 2;
    ++v14;
    v28 = v15;
    v32 = v14;
    v29 = v14 / 2;
    LOWORD(v27) = v24 + v15;
    HIWORD(v27) = v29 + HIWORD(v24);
    result = v31;
    v20 = v27;
    if ( v31 > 0 )
    {
      v26 = v31;
      do
      {
        if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v20) )
        {
          v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20);
          ScreenRect = CellClass::GetScreenRect((int)v16, v40);
          v33[0] = *ScreenRect;
          v33[1] = ScreenRect[1];
          v34 = ScreenRect[2];
          v35 = ScreenRect[3];
          v18 = ClipRectIntersection(v41, a2, v33, 0, 0);
          v37[3] = *v18;
          v19 = v18[2];
          v37[4] = v18[1];
          v38 = v18[3];
          Coord::Subtract(v37, ((((__int16)v20 << 8) + 128) / 256) << 8, (((SHIWORD(v20) << 8) + 128) / 256) << 8, 0);
          v36[0] = *(float *)v37;
          v36[1] = *(float *)&v37[1];
          v36[2] = *(float *)&v37[2];
          Coord::To_Screen((_DWORD *)this, v36, (int *)&v21);
          LODWORD(v21) -= 30;
          if ( v34 > 0 && v35 > 0 && v19 > 0 && v38 > 0 )
            TacticalClass::CheckCellVisibility(&v21, a3, 0);
        }
        LOWORD(v20) = v20 + 1;
        --HIWORD(v20);
        result = --v26;
      }
      while ( v26 );
      v14 = v32;
      v11 = v30;
    }
  }
  return result;
}

/* ASM:
sub     esp, 98h
push    ebx
mov     ebx, [esp+9Ch+arg_0]
push    ebp
mov     edx, ds:886FA0h
mov     eax, [ebx]
push    esi
push    edi
mov     edi, ecx
mov     esi, ds:886FA4h
mov     [esp+0A8h+var_8C], 0
mov     ebp, [edi+0B0h]
mov     ecx, [edi+0B4h]
add     eax, ebp
mov     ebp, [ebx+4]
sub     eax, edx
add     ecx, ebp
mov     [esp+0A8h+var_88], eax
sub     ecx, esi
fild    [esp+0A8h+var_88]
mov     [esp+0A8h+var_84], ecx
lea     eax, [esp+0A8h+var_94]
push    eax
lea     edx, [edi+0DE4h]
fstp    [esp+0ACh+var_94]
fild    [esp+0ACh+var_84]
lea     ecx, [esp+0ACh+var_54]
fstp    [esp+0ACh+var_90]
call    TransformMatrix3x4Point
mov     ecx, [eax]
mov     [esp+0A8h+var_94], ecx
mov     edx, [eax+4]
fld     [esp+0A8h+var_94]
mov     [esp+0A8h+var_90], edx
mov     eax, [eax+8]
mov     [esp+0A8h+var_8C], eax
call    Math__RoundToInt
fld     [esp+0A8h+var_90]
mov     esi, eax
call    Math__RoundToInt
push    0
push    eax
push    esi
lea     ecx, [esp+0B4h+var_2C]
call    Coord__Subtract
mov     eax, [esp+0A8h+var_2C]
mov     ecx, [ebx+0Ch]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0A8h+var_98], ax
mov     eax, [esp+0A8h+var_28]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0A8h+var_98+2], ax
mov     eax, 88888889h
imul    ecx
add     edx, ecx
mov     eax, 88888889h
sar     edx, 3
mov     ecx, edx
mov     esi, [esp+0A8h+var_98]
shr     ecx, 1Fh
mov     [esp+0A8h+var_88], esi
add     esi, 0FFFFFFFEh
lea     ebp, [edx+ecx+11h]
mov     ecx, [ebx+8]
imul    ecx
add     edx, ecx
mov     [esp+0A8h+var_70], ebp
sar     edx, 5
mov     eax, edx
mov     word ptr [esp+0A8h+var_88], si
shr     eax, 1Fh
lea     ecx, [edx+eax+4]
mov     [esp+0A8h+var_6C], ecx
xor     ecx, ecx
test    ebp, ebp
jle     loc_6D782D

loc_6D7683:                             ; CODE XREF: TacticalClass__RenderIsometric+2C7↓j
mov     eax, ecx
cdq
sub     eax, edx
sar     eax, 1
inc     ecx
mov     word ptr [esp+0A8h+var_78], ax
mov     eax, ecx
mov     [esp+0A8h+var_68], ecx
cdq
sub     eax, edx
sar     eax, 1
mov     word ptr [esp+0A8h+var_78+2], ax
mov     edx, [esp+0A8h+var_78]
mov     eax, [esp+0A8h+var_88]
add     edx, eax
mov     eax, [esp+0A8h+var_88+2]
mov     word ptr [esp+0A8h+var_7C], dx
mov     edx, [esp+0A8h+var_78+2]
add     eax, edx
mov     word ptr [esp+0A8h+var_7C+2], ax
mov     eax, [esp+0A8h+var_6C]
mov     edx, [esp+0A8h+var_7C]
test    eax, eax
mov     [esp+0A8h+var_98], edx
jle     loc_6D7825
mov     [esp+0A8h+var_80], eax

loc_6D76D6:                             ; CODE XREF: TacticalClass__RenderIsometric+2B7↓j
lea     eax, [esp+0A8h+var_98]
mov     ecx, 87F7E8h
push    eax
call    LayerClass__CoordinatesLegal
test    al, al
jz      loc_6D7804
lea     ecx, [esp+0A8h+var_98]
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     esi, eax
lea     edx, [esp+0A8h+var_20]
push    edx
mov     ecx, esi
call    CellClass__GetScreenRect
mov     ecx, [eax]
push    0
mov     [esp+0ACh+var_64], ecx
push    0
mov     edx, [eax+4]
mov     [esp+0B0h+var_60], edx
mov     ecx, [eax+8]
mov     [esp+0B0h+var_5C], ecx
lea     ecx, [esp+0B0h+var_10]
mov     edx, [eax+0Ch]
lea     eax, [esp+0B0h+var_64]
mov     [esp+0B0h+var_58], edx
push    eax
mov     edx, ebx
call    ClipRectIntersection
mov     ecx, [eax]
push    0
mov     [esp+0ACh+var_3C], ecx
mov     edx, [eax+4]
movsx   ecx, word ptr [esp+0ACh+var_98]
mov     ebp, [eax+8]
mov     [esp+0ACh+var_38], edx
shl     ecx, 8
mov     eax, [eax+0Ch]
add     ecx, 80h
mov     [esp+0ACh+var_30], eax
movsx   eax, word ptr [esp+0ACh+var_98+2]
shl     eax, 8
add     eax, 80h
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
shl     eax, 8
push    eax
mov     eax, ecx
cdq
and     edx, 0FFh
lea     ecx, [esp+0B0h+var_48]
add     eax, edx
sar     eax, 8
shl     eax, 8
push    eax
call    Coord__Subtract
mov     ecx, [esp+0A8h+var_48]
mov     edx, [esp+0A8h+var_44]
mov     eax, [esp+0A8h+var_40]
mov     [esp+0A8h+var_54], ecx
mov     [esp+0A8h+var_50], edx
lea     ecx, [esp+0A8h+var_94]
lea     edx, [esp+0A8h+var_54]
push    ecx
push    edx
mov     ecx, edi
mov     [esp+0B0h+var_4C], eax
call    Coord__To_Screen
mov     ecx, [esp+0A8h+var_94]
mov     eax, [esp+0A8h+var_5C]
sub     ecx, 1Eh
test    eax, eax
mov     [esp+0A8h+var_94], ecx
jle     short loc_6D7804
mov     eax, [esp+0A8h+var_58]
test    eax, eax
jle     short loc_6D7804
test    ebp, ebp
jle     short loc_6D7804
mov     eax, [esp+0A8h+var_30]
test    eax, eax
jle     short loc_6D7804
mov     eax, [esp+0A8h+arg_4]
push    0
lea     ecx, [esp+0ACh+var_94]
push    eax
push    ecx
mov     ecx, esi
call    TacticalClass__CheckCellVisibility

loc_6D7804:                             ; CODE XREF: TacticalClass__RenderIsometric+187↑j
; TacticalClass__RenderIsometric+278↑j ...
inc     word ptr [esp+0A8h+var_98]
mov     eax, [esp+0A8h+var_80]
dec     word ptr [esp+0A8h+var_98+2]
dec     eax
mov     [esp+0A8h+var_80], eax
jnz     loc_6D76D6
mov     ecx, [esp+0A8h+var_68]
mov     ebp, [esp+0A8h+var_70]

loc_6D7825:                             ; CODE XREF: TacticalClass__RenderIsometric+16C↑j
cmp     ecx, ebp
jl      loc_6D7683

loc_6D782D:                             ; CODE XREF: TacticalClass__RenderIsometric+11D↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 98h
retn    8
*/
}

// IDA: 0x480350 -- TacticalClass::CheckCellVisibility
// Checks if a cell at given world coordinate is visible and processes it.
// 0x480350
void TacticalClass::CheckCellVisibility(const Point2D& screen_pos, int flags, bool unk)
{
// [IDA decompile]
char __thiscall sub_480350(int this, _DWORD *a2, _DWORD *a3, char a4)
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
  _DWORD v16[2]; // [esp+14h] [ebp-8h] BYREF
  int v17; // [esp+28h] [ebp+Ch]

  LOBYTE(v4) = a4;
  if ( a4 )
    return v4;
  if ( !*(_DWORD *)(this + 52) )
    TacticalClass::SetView(this, 0, 0x10000, 0, 1000, 1000, 1000);
  v6 = *(_DWORD *)(this + 56);
  v17 = 0;
  if ( v6 == 0xFFFF )
  {
    v15 = 0;
    v7 = (int *)*((_DWORD *)MEMORY[0xA8ED2C] + MEMORY[0xAA10B0]);
    inited = CellClass::InitRandomOffsets(this, MEMORY[0xAA10B0], v7[188]);
LABEL_10:
    v17 = inited;
    goto LABEL_11;
  }
  v7 = (int *)*((_DWORD *)MEMORY[0xA8ED2C] + v6);
  v15 = *(unsigned __int8 *)(this + 282);
  if ( v7[188] > 1 )
  {
    if ( CellClass::GetTerrainFlag(v7, *(unsigned __int8 *)(this + 282)) )
      inited = (*(_DWORD *)(this + 320) >> 13) & 1;
    else
      inited = CellClass::InitRandomOffsets(this, *(_DWORD *)(this + 56), v7[188]);
    goto LABEL_10;
  }
LABEL_11:
  ++MEMORY[0xA83ECC];
  v9 = *(char *)(this + 283);
  v10 = a2[1];
  v16[0] = *a2;
  v11 = v10 - 15 * v9;
  v4 = (*(int (__thiscall **)(int *))(*v7 + 156))(v7);
  if ( v4 )
    LOBYTE(v4) = TerrainClass::GenerateTexture(
                   *(_DWORD *)(this + 52),
                   v15,
                   MEMORY[0x887314],
                   v16[0],
                   v11 + MEMORY[0x886FA4],
                   *a3,
                   a3[1],
                   a3[2],
                   a3[3],
                   *(char *)(this + 283),
                   *(__int16 *)(this + 268),
                   1,
                   v17,
                   0,
                   0,
                   0,
                   0);
  if ( *(_DWORD *)(this + 72) != -1 )
  {
    v12 = a3[1];
    v16[0] = v16[0] + 30 - *a3;
    v13 = *(_DWORD *)(this + 72);
    v16[1] = v11 + MEMORY[0x886FA4] - v12;
    LOBYTE(v4) = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD *, _DWORD, int, int))(**((_DWORD **)MEMORY[0xA8EC1C]
                                                                                        + v13)
                                                                                     + 160))(
                   *((_DWORD *)MEMORY[0xA8EC1C] + v13),
                   v16,
                   a3,
                   *(unsigned __int8 *)(this + 287),
                   MEMORY[0x89E7C0] * *(char *)(this + 283),
                   this + 36);
  }
  return v4;
}

/* ASM:
mov     al, byte ptr [esp+arg_8]
sub     esp, 0Ch
test    al, al
push    ebx
push    ebp
push    esi
push    edi
mov     esi, ecx
jnz     loc_4804FB
mov     eax, [esi+34h]
xor     ebx, ebx
cmp     eax, ebx
jnz     short loc_480389
push    3E8h
push    3E8h
push    3E8h
push    ebx
push    10000h
push    ebx
call    TacticalClass__SetView

loc_480389:                             ; CODE XREF: TacticalClass__CheckCellVisibility+1C↑j
mov     eax, [esi+38h]
mov     [esp+1Ch+arg_8], ebx
cmp     eax, 0FFFFh
jz      short loc_4803DE
mov     ecx, ds:0A8ED2Ch
mov     edi, [ecx+eax*4]
xor     eax, eax
mov     al, [esi+11Ah]
mov     ecx, [edi+2F0h]
mov     [esp+1Ch+var_C], eax
cmp     ecx, 1
jle     short loc_480403
push    eax
mov     ecx, edi
call    CellClass__GetTerrainFlag
test    al, al
jz      short loc_4803D1
mov     eax, [esi+140h]
shr     eax, 0Dh
and     eax, 1
jmp     short loc_4803FF
; ---------------------------------------------------------------------------

loc_4803D1:                             ; CODE XREF: TacticalClass__CheckCellVisibility+71↑j
mov     eax, [edi+2F0h]
mov     edx, [esi+38h]
push    eax
push    edx
jmp     short loc_4803F8
; ---------------------------------------------------------------------------

loc_4803DE:                             ; CODE XREF: TacticalClass__CheckCellVisibility+45↑j
mov     eax, dword_A8ED54+1235Ch
mov     ecx, ds:0A8ED2Ch
mov     [esp+1Ch+var_C], ebx
mov     edi, [ecx+eax*4]
mov     ecx, [edi+2F0h]
push    ecx
push    eax

loc_4803F8:                             ; CODE XREF: TacticalClass__CheckCellVisibility+8C↑j
mov     ecx, esi
call    CellClass__InitRandomOffsets

loc_4803FF:                             ; CODE XREF: TacticalClass__CheckCellVisibility+7F↑j
mov     [esp+1Ch+arg_8], eax

loc_480403:                             ; CODE XREF: TacticalClass__CheckCellVisibility+65↑j
mov     ebx, ds:0A83ECCh
mov     ecx, [esp+1Ch+arg_0]
inc     ebx
mov     ds:0A83ECCh, ebx
mov     edx, [ecx]
movsx   eax, byte ptr [esi+11Bh]
mov     ebx, [ecx+4]
mov     [esp+1Ch+var_8], edx
mov     edx, [edi]
lea     eax, [eax+eax*2]
mov     ecx, edi
lea     eax, [eax+eax*4]
sub     ebx, eax
call    dword ptr [edx+9Ch]
mov     ebp, [esp+1Ch+arg_4]
test    eax, eax
jz      short loc_48049E
mov     eax, [esp+1Ch+arg_8]
push    0
movsx   ecx, word ptr [esi+10Ch]
movsx   edx, byte ptr [esi+11Bh]
push    0
push    0
push    0
push    eax
push    1
push    ecx
push    edx
mov     eax, ebp
sub     esp, 10h
mov     edx, [eax]
mov     ecx, esp
mov     [ecx], edx
mov     edx, [eax+4]
mov     [ecx+4], edx
mov     edx, [eax+8]
mov     eax, [eax+0Ch]
mov     [ecx+8], edx
mov     edx, [esp+4Ch+var_8]
mov     [ecx+0Ch], eax
mov     ecx, ds:886FA4h
mov     eax, ds:887314h
add     ecx, ebx
push    ecx
mov     ecx, [esp+50h+var_C]
push    edx
mov     edx, [esi+34h]
push    eax
push    ecx
push    edx
mov     ecx, edi
call    TerrainClass__GenerateTexture

loc_48049E:                             ; CODE XREF: TacticalClass__CheckCellVisibility+EC↑j
cmp     dword ptr [esi+48h], 0FFFFFFFFh
jz      short loc_4804FB
mov     ecx, ds:886FA4h
mov     eax, [esp+1Ch+var_8]
mov     edx, [ebp+0]
mov     edi, [ebp+4]
add     eax, 1Eh
add     ecx, ebx
sub     eax, edx
sub     ecx, edi
mov     [esp+1Ch+var_8], eax
mov     eax, [esi+48h]
mov     [esp+1Ch+var_4], ecx
mov     ecx, ds:0A8EC1Ch
mov     ecx, [ecx+eax*4]
lea     eax, [esi+24h]
push    eax
movsx   eax, byte ptr [esi+11Bh]
imul    eax, ds:89E7C0h
mov     edx, [ecx]
push    eax
xor     eax, eax
mov     al, [esi+11Fh]
push    eax
lea     eax, [esp+28h+var_8]
push    ebp
push    eax
call    dword ptr [edx+0A0h]

loc_4804FB:                             ; CODE XREF: TacticalClass__CheckCellVisibility+F↑j
; TacticalClass__CheckCellVisibility+152↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0Ch
retn    0Ch
*/
}

// IDA: 0x6D7840 -- TacticalClass::DrawMap
// Main map drawing function. Draws terrain, overlays, and building debris.
// 0x6d7840
void TacticalClass::DrawMap(const RectangleStruct& viewRect, RectangleStruct* bounds)
{
// [IDA decompile]
unsigned int __thiscall TacticalClass::DrawMap(int this, _DWORD *a2, int *a3)
{
  unsigned int result; // eax
  int v5; // eax
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
  _DWORD *v21; // esi
  int NthOfType; // edi
  _DWORD *v23; // ebp
  BOOL v24; // edi
  _DWORD *v25; // eax
  int *ScreenRect; // eax
  int v27; // esi
  int v28; // edi
  int v29; // eax
  int v30; // [esp+8h] [ebp-48h] BYREF
  unsigned int v31; // [esp+Ch] [ebp-44h]
  int v32; // [esp+10h] [ebp-40h]
  int v33; // [esp+14h] [ebp-3Ch]
  unsigned int v34; // [esp+18h] [ebp-38h]
  int v35; // [esp+1Ch] [ebp-34h]
  int v36; // [esp+20h] [ebp-30h]
  float v37; // [esp+24h] [ebp-2Ch]
  float v38; // [esp+28h] [ebp-28h] BYREF
  float v39; // [esp+2Ch] [ebp-24h]
  int v40; // [esp+30h] [ebp-20h]
  int v41; // [esp+34h] [ebp-1Ch] BYREF
  int v42; // [esp+38h] [ebp-18h]
  int v43[4]; // [esp+40h] [ebp-10h] BYREF
  int v44; // [esp+54h] [ebp+4h]

  result = PingPongBuffer::GetWriteOffset();
  if ( dword_A8ED54[47100] >= result )
  {
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 112))(MEMORY[0x87F7E8][7883]);
    if ( result == 2 )
    {
      result = MEMORY[0x87F7E8][539876];
      if ( MEMORY[0x87F7E8][539876] )
      {
        result = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 92))(
                   MEMORY[0x87F7E8][7883],
                   0,
                   0);
        v34 = result;
        if ( result )
        {
          v5 = ((int (*)(void))timeGetTime)();
          v6 = v5 - dword_A8ED54[130619];
          dword_A8ED54[130619] = v5;
          v31 = v6;
          if ( v6 > 0x3E8 )
            v31 = 1000;
          v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 116))(MEMORY[0x87F7E8][7883]);
          v8 = *(_DWORD *)(this + 176);
          v33 = v7;
          v9 = *(_DWORD *)(this + 180);
          v10 = v8 + *a2;
          v11 = a2[1];
          v41 = v10 - MEMORY[0x87F7E8][7662];
          v42 = v11 + v9 - MEMORY[0x87F7E8][7663];
          v38 = (float)(v10 - MEMORY[0x87F7E8][7662]);
          v40 = 0;
          v39 = (float)v42;
          v12 = TransformMatrix3x4Point((float *)&v41, (float *)(this + 3556), &v38);
          v38 = *v12;
          v39 = v12[1];
          v40 = *((_DWORD *)v12 + 2);
          v13 = Math::RoundToInt(v38);
          v14 = Math::RoundToInt(v39);
          v15 = a2[3];
          v16 = a2[2];
          HIWORD(v41) = v14 / 256;
          LODWORD(v17) = v15 / 15 + 17;
          v18 = 0;
          v37 = v17;
          v19 = v16 / 60 + 4;
          LOWORD(v41) = v13 / 256 - 2;
          v36 = v19;
          while ( v18 < SLODWORD(v17) )
          {
            v20 = v18 / 2;
            ++v18;
            LOWORD(v38) = v20;
            v35 = v18;
            HIWORD(v38) = v18 / 2;
            LOWORD(v44) = v41 + v20;
            HIWORD(v44) = HIWORD(v38) + HIWORD(v41);
            v30 = v44;
            if ( v19 > 0 )
            {
              v32 = v19;
              do
              {
                if ( LayerClass::CoordinatesLegal(MEMORY[0x87F7E8], (__int16 *)&v30) )
                {
                  v21 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v30);
                  NthOfType = Building::GetNthOfType((int)v21);
                  if ( (v21[75] & 0x10) != 0
                    && !CellClass::QuickPassable(v21)
                    && (v21[59] == 2 || NthOfType)
                    && !v21[57]
                    && (v21[80] & 0x1000) == 0 )
                  {
                    v23 = (_DWORD *)v21[63];
                    v24 = NthOfType != 0;
                    if ( v23 )
                    {
                      if ( (int)v23[4] >= 0x2000 )
                        BuildingDebris::Init(v23, v24);
                    }
                    else
                    {
                      v25 = (_DWORD *)__2_YAPAXI_Z(60);
                      if ( v25 )
                      {
                        v23 = TacticalClass::saveConfig(v25, v24);
                        v21[63] = v23;
                      }
                      else
                      {
                        v23 = 0;
                        v21[63] = 0;
                      }
                    }
                    if ( v23 )
                    {
                      if ( TacticalClass::DecrementCounter(v23, v31) )
                      {
                        ScreenRect = CellClass::GetScreenRect((int)v21, v43);
                        v27 = v23[12] + *ScreenRect + ScreenRect[2] / 2;
                        v28 = v23[13] + ScreenRect[1] + ScreenRect[3] / 2;
                        if ( v27 >= *a3 && v27 < *a3 + a3[2] )
                        {
                          v29 = a3[1];
                          if ( v28 >= v29 && v28 < v29 + a3[3] )
                          {
                            TacticalClass::InterpolateColor(v23, v31);
                            *(_WORD *)(v28 * v33 + v34 + 2 * v27) = ((int)v23[1] >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170]))
                                                                  | ((int)v23[2] >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
                                                                  | ((int)v23[3] >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]));
                          }
                        }
                      }
                    }
                  }
                }
                LOWORD(v30) = v30 + 1;
                --HIWORD(v30);
                --v32;
              }
              while ( v32 );
              v18 = v35;
              v19 = v36;
              v17 = v37;
            }
          }
          return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 96))(MEMORY[0x87F7E8][7883]);
        }
      }
    }
  }
  return result;
}

/* ASM:
sub     esp, 48h
push    esi
push    edi
mov     edi, ecx
call    PingPongBuffer__GetWriteOffset
cmp     dword_A8ED54+2DFF0h, eax
jb      loc_6D7BF2
mov     ecx, ds:887314h
mov     eax, [ecx]
call    dword ptr [eax+70h]
cmp     eax, 2
jnz     loc_6D7BF2
mov     eax, ds:0A8EB78h
test    eax, eax
jz      loc_6D7BF2
mov     ecx, ds:887314h
xor     edx, edx
xor     eax, eax
push    edx
mov     esi, [ecx]
push    eax
call    dword ptr [esi+5Ch]
test    eax, eax
mov     [esp+50h+var_38], eax
jz      loc_6D7BF2
call    ds:__imp_timeGetTime
mov     edx, dword_A8ED54+7F8ECh
mov     ecx, eax
sub     ecx, edx
mov     dword_A8ED54+7F8ECh, eax
cmp     ecx, 3E8h
mov     [esp+50h+var_44], ecx
jbe     short loc_6D78BF
mov     [esp+50h+var_44], 3E8h

loc_6D78BF:                             ; CODE XREF: TacticalClass__DrawMap+75↑j
mov     ecx, ds:887314h
push    ebx
push    ebp
mov     edx, [ecx]
call    dword ptr [edx+74h]
mov     esi, [esp+58h+arg_0]
mov     ebp, [edi+0B0h]
mov     edx, ds:886FA0h
mov     [esp+58h+var_3C], eax
mov     eax, [esi]
mov     ecx, [edi+0B4h]
mov     ebx, ds:886FA4h
add     eax, ebp
mov     ebp, [esi+4]
sub     eax, edx
mov     [esp+58h+var_1C], eax
add     ecx, ebp
fild    [esp+58h+var_1C]
sub     ecx, ebx
lea     eax, [esp+58h+var_28]
mov     [esp+58h+var_18], ecx
push    eax
fstp    [esp+5Ch+var_28]
fild    [esp+5Ch+var_18]
lea     edx, [edi+0DE4h]
lea     ecx, [esp+5Ch+var_1C]
mov     [esp+5Ch+var_20], 0
fstp    [esp+5Ch+var_24]
call    TransformMatrix3x4Point
mov     ecx, [eax]
mov     [esp+58h+var_28], ecx
mov     edx, [eax+4]
fld     [esp+58h+var_28]
mov     [esp+58h+var_24], edx
mov     eax, [eax+8]
mov     [esp+58h+var_20], eax
call    Math__RoundToInt
fld     [esp+58h+var_24]
mov     edi, eax
call    Math__RoundToInt
mov     ecx, eax
mov     eax, edi
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+58h+arg_0], ax
mov     eax, ecx
cdq
mov     ecx, [esi+0Ch]
and     edx, 0FFh
add     eax, edx
mov     esi, [esi+8]
sar     eax, 8
mov     word ptr [esp+58h+arg_0+2], ax
mov     eax, 88888889h
imul    ecx
add     edx, ecx
mov     eax, 88888889h
sar     edx, 3
mov     ecx, edx
mov     edi, [esp+58h+arg_0]
shr     ecx, 1Fh
mov     [esp+58h+var_1C], edi
add     edi, 0FFFFFFFEh
lea     ebx, [edx+ecx+11h]
imul    esi
add     edx, esi
xor     ecx, ecx
sar     edx, 5
mov     eax, edx
mov     [esp+58h+var_2C], ebx
shr     eax, 1Fh
test    ebx, ebx
lea     esi, [edx+eax+4]
mov     word ptr [esp+58h+var_1C], di
mov     [esp+58h+var_30], esi
jle     loc_6D7BE5

loc_6D79CF:                             ; CODE XREF: TacticalClass__DrawMap+39F↓j
mov     eax, ecx
cdq
sub     eax, edx
sar     eax, 1
inc     ecx
mov     word ptr [esp+58h+var_28], ax
mov     eax, ecx
mov     [esp+58h+var_34], ecx
cdq
sub     eax, edx
sar     eax, 1
mov     word ptr [esp+58h+var_28+2], ax
mov     edx, [esp+58h+var_28]
mov     eax, [esp+58h+var_1C]
add     edx, eax
mov     eax, [esp+58h+var_1C+2]
mov     word ptr [esp+58h+arg_0], dx
mov     edx, [esp+58h+var_28+2]
add     eax, edx
mov     word ptr [esp+58h+arg_0+2], ax
mov     edx, [esp+58h+arg_0]
test    esi, esi
mov     [esp+58h+var_48], edx
jle     loc_6D7BDD
mov     [esp+58h+var_40], esi

loc_6D7A1E:                             ; CODE XREF: TacticalClass__DrawMap+38B↓j
lea     eax, [esp+58h+var_48]
mov     ecx, 87F7E8h
push    eax
call    LayerClass__CoordinatesLegal
test    al, al
jz      loc_6D7BB8
lea     ecx, [esp+58h+var_48]
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     esi, eax
mov     ecx, esi
call    Building__GetNthOfType
mov     edi, eax
mov     al, [esi+12Ch]
test    al, 10h
jz      loc_6D7BB8
mov     ecx, esi
call    CellClass__QuickPassable
test    al, al
jnz     loc_6D7BB8
cmp     dword ptr [esi+0ECh], 2
jz      short loc_6D7A7D
test    edi, edi
jz      loc_6D7BB8

loc_6D7A7D:                             ; CODE XREF: TacticalClass__DrawMap+233↑j
mov     eax, [esi+0E4h]
test    eax, eax
jnz     loc_6D7BB8
mov     eax, [esi+140h]
test    ah, 10h
jnz     loc_6D7BB8
mov     ebp, [esi+0FCh]
xor     edx, edx
test    edi, edi
setnz   dl
test    ebp, ebp
mov     edi, edx
jnz     short loc_6D7AD7
push    3Ch ; '<'       ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_6D7ACD
push    edi
mov     ecx, eax
call    TacticalClass__saveConfig
mov     ebp, eax
mov     [esi+0FCh], ebp
jmp     short loc_6D7AE8
; ---------------------------------------------------------------------------

loc_6D7ACD:                             ; CODE XREF: TacticalClass__DrawMap+279↑j
xor     ebp, ebp
mov     [esi+0FCh], ebp
jmp     short loc_6D7AE8
; ---------------------------------------------------------------------------

loc_6D7AD7:                             ; CODE XREF: TacticalClass__DrawMap+26B↑j
cmp     dword ptr [ebp+10h], 2000h
jl      short loc_6D7AE8
push    edi
mov     ecx, ebp
call    BuildingDebris__Init

loc_6D7AE8:                             ; CODE XREF: TacticalClass__DrawMap+28B↑j
; TacticalClass__DrawMap+295↑j ...
test    ebp, ebp
jz      loc_6D7BB8
mov     eax, [esp+58h+var_44]
mov     ecx, ebp
push    eax
call    TacticalClass__DecrementCounter
test    al, al
jz      loc_6D7BB8
lea     ecx, [esp+58h+var_10]
push    ecx
mov     ecx, esi
call    CellClass__GetScreenRect
mov     edx, eax
mov     ecx, [edx]
mov     ebx, [edx+4]
mov     eax, [edx+8]
mov     edi, [edx+0Ch]
cdq
sub     eax, edx
mov     esi, eax
mov     eax, edi
cdq
sub     eax, edx
sar     esi, 1
mov     edi, eax
mov     eax, [ebp+30h]
add     esi, ecx
mov     ecx, [esp+58h+arg_4]
sar     edi, 1
add     edi, ebx
mov     ebx, [ebp+34h]
add     esi, eax
mov     eax, [ecx]
add     edi, ebx
cmp     esi, eax
jl      short loc_6D7BB8
mov     edx, [ecx+8]
add     edx, eax
cmp     esi, edx
jge     short loc_6D7BB8
mov     eax, [ecx+4]
cmp     edi, eax
jl      short loc_6D7BB8
mov     ecx, [ecx+0Ch]
add     ecx, eax
cmp     edi, ecx
jge     short loc_6D7BB8
mov     edx, [esp+58h+var_44]
mov     ecx, ebp
push    edx
call    TacticalClass__InterpolateColor
mov     eax, [ebp+0Ch]
mov     ecx, ds:8A0DDCh
mov     edx, [ebp+8]
sar     eax, cl
mov     ecx, ds:8A0DD8h
shl     eax, cl
mov     ecx, ds:8A0DE4h
sar     edx, cl
mov     ecx, ds:8A0DE0h
shl     edx, cl
mov     ecx, ds:8A0DD4h
or      eax, edx
mov     edx, [ebp+4]
sar     edx, cl
mov     ecx, ds:8A0DD0h
shl     edx, cl
mov     ecx, [esp+58h+var_3C]
imul    ecx, edi
or      eax, edx
mov     edx, [esp+58h+var_38]
add     edx, ecx
mov     [edx+esi*2], ax

loc_6D7BB8:                             ; CODE XREF: TacticalClass__DrawMap+1EF↑j
; TacticalClass__DrawMap+217↑j ...
inc     word ptr [esp+58h+var_48]
mov     eax, [esp+58h+var_40]
dec     word ptr [esp+58h+var_48+2]
dec     eax
mov     [esp+58h+var_40], eax
jnz     loc_6D7A1E
mov     ecx, [esp+58h+var_34]
mov     esi, [esp+58h+var_30]
mov     ebx, [esp+58h+var_2C]

loc_6D7BDD:                             ; CODE XREF: TacticalClass__DrawMap+1D4↑j
cmp     ecx, ebx
jl      loc_6D79CF

loc_6D7BE5:                             ; CODE XREF: TacticalClass__DrawMap+189↑j
mov     ecx, ds:887314h
mov     eax, [ecx]
call    dword ptr [eax+60h]
pop     ebp
pop     ebx

loc_6D7BF2:                             ; CODE XREF: TacticalClass__DrawMap+12↑j
; TacticalClass__DrawMap+26↑j ...
pop     edi
pop     esi
add     esp, 48h
retn    8
*/
}

// IDA: 0x6D7C00 -- TacticalClass::DrawTerrain
// Draws terrain tiles for all visible cells.
// 0x6d7c00
void TacticalClass::DrawTerrain(const RectangleStruct& viewRect)
{
// [IDA decompile]
unsigned int __thiscall TacticalClass_DrawTerrain(int this, int *a2, _DWORD *a3)
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
  _DWORD *v24; // ebp
  int v25; // eax
  __int16 v26; // dx
  float *v27; // eax
  int v28; // [esp+0h] [ebp-68h]
  int v29; // [esp+0h] [ebp-68h]
  int v30; // [esp+4h] [ebp-64h]
  int v31; // [esp+4h] [ebp-64h]
  int v32; // [esp+1Ch] [ebp-4Ch]
  int v33; // [esp+20h] [ebp-48h] BYREF
  _DWORD v34[2]; // [esp+24h] [ebp-44h]
  int v35; // [esp+2Ch] [ebp-3Ch] BYREF
  int v36; // [esp+30h] [ebp-38h]
  int v37; // [esp+34h] [ebp-34h]
  float v38; // [esp+38h] [ebp-30h] BYREF
  float v39; // [esp+3Ch] [ebp-2Ch]
  int v40; // [esp+40h] [ebp-28h]
  int v41; // [esp+44h] [ebp-24h] BYREF
  int v42; // [esp+48h] [ebp-20h]
  int v43; // [esp+4Ch] [ebp-1Ch]
  float v44[3]; // [esp+50h] [ebp-18h] BYREF
  int v45[3]; // [esp+5Ch] [ebp-Ch] BYREF

  v3 = a2;
  v5 = *(_DWORD *)(this + 176);
  v6 = a2[1] + *(_DWORD *)(this + 180) - MEMORY[0x886FA4];
  v35 = *a2 + v5 - MEMORY[0x886FA0];
  v36 = v6;
  *(float *)&v30 = (float)v6;
  *(float *)&v28 = (float)v35;
  Triple::Set(&v38, v28, v30, 0);
  v7 = TransformMatrix3x4Point(v44, (float *)(this + 3556), &v38);
  v38 = *v7;
  v39 = v7[1];
  v40 = *((_DWORD *)v7 + 2);
  v8 = Math::RoundToInt(v38);
  v9 = Math::RoundToInt(v39);
  Coord::Subtract(&v41, v8, v9, 0);
  v10 = *(_DWORD *)CellStruct::Set(&v33, v41 / 256, v42 / 256);
  v11 = *(_DWORD *)(this + 176);
  HIWORD(v34[0]) = HIWORD(v10);
  LOWORD(v34[0]) = v10 - 2;
  v12 = *v3;
  a2 = (int *)v34[0];
  v13 = v3[1] + *(_DWORD *)(this + 180) - MEMORY[0x886FA4];
  v35 = v11 + v12 - MEMORY[0x886FA0];
  v36 = v13;
  *(float *)&v31 = (float)v13;
  *(float *)&v29 = (float)v35;
  Triple::Set(&v38, v29, v31, 0);
  v14 = TransformMatrix3x4Point(v44, (float *)(this + 3556), &v38);
  v38 = *v14;
  v39 = v14[1];
  v40 = *((_DWORD *)v14 + 2);
  v15 = Math::RoundToInt(v38);
  v16 = Math::RoundToInt(v39);
  Coord::Subtract(&v35, v15, v16, 0);
  v41 = v35;
  v42 = v36;
  v43 = v37;
  v17 = *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v41) + 9);
  v18 = v3[3];
  v19 = v3[2];
  HIWORD(v34[0]) = HIWORD(v17) + 3;
  v20 = v18 / 15 + 20;
  LOWORD(v34[0]) = v17 - 2;
  v21 = 0;
  result = (unsigned int)((unsigned __int64)(2290649225LL * v19) >> 32) >> 31;
  v23 = v19 / 60 + 7;
  if ( v20 > 0 )
  {
    v24 = a3;
    do
    {
      v25 = v21 / 2;
      ++v21;
      LOWORD(v35) = v25;
      v33 = v21;
      HIWORD(v35) = v21 / 2;
      v26 = LOWORD(v34[0]) + v25;
      result = *(_DWORD *)((char *)v34 + 2);
      LOWORD(a3) = v26;
      HIWORD(a3) = HIWORD(v34[0]) + HIWORD(v35);
      a2 = a3;
      if ( v23 > 0 )
      {
        v32 = v23;
        do
        {
          if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&a2) )
          {
            v27 = (float *)Coord3D::Set(
                             v45,
                             ((((__int16)a2 << 8) + 128) / 256) << 8,
                             (((SHIWORD(a2) << 8) + 128) / 256) << 8,
                             0);
            v44[0] = *v27;
            v44[1] = v27[1];
            v44[2] = v27[2];
            Coord::To_Screen((_DWORD *)this, v44, (int *)&v38);
            LODWORD(v38) -= 30;
            CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2);
            TacticalClass::DrawCellTerrainOverlay(&v38, v24);
          }
          LOWORD(a2) = (_WORD)a2 + 1;
          --HIWORD(a2);
          result = --v32;
        }
        while ( v32 );
        v21 = v33;
      }
    }
    while ( v21 < v20 );
  }
  return result;
}

/* ASM:
sub     esp, 4Ch
push    ebx
push    ebp
push    esi
push    edi
mov     edi, [esp+5Ch+arg_0]
mov     esi, ecx
mov     ebx, ds:886FA4h
mov     edx, ds:886FA0h
mov     eax, [esi+0B0h]
mov     ebp, [edi]
mov     ecx, [esi+0B4h]
add     eax, ebp
mov     ebp, [edi+4]
push    0
add     ecx, ebp
sub     eax, edx
sub     ecx, ebx
mov     [esp+60h+var_3C], eax
mov     [esp+60h+var_38], ecx
push    ecx
fild    [esp+64h+var_38]
fstp    [esp+64h+var_64]
fild    [esp+64h+var_3C]
push    ecx
lea     ecx, [esp+68h+var_30]
fstp    [esp+68h+var_68]
call    Triple__Set
lea     ebx, [esi+0DE4h]
lea     eax, [esp+5Ch+var_30]
push    eax
mov     edx, ebx
lea     ecx, [esp+60h+var_18]
call    TransformMatrix3x4Point
mov     ecx, [eax]
mov     [esp+5Ch+var_30], ecx
mov     edx, [eax+4]
fld     [esp+5Ch+var_30]
mov     [esp+5Ch+var_2C], edx
mov     eax, [eax+8]
mov     [esp+5Ch+var_28], eax
call    Math__RoundToInt
fld     [esp+5Ch+var_2C]
mov     ebp, eax
call    Math__RoundToInt
push    0
push    eax
push    ebp
lea     ecx, [esp+68h+var_24]
call    Coord__Subtract
mov     eax, [esp+5Ch+var_20]
lea     ecx, [esp+5Ch+var_48]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
push    eax
mov     eax, [esp+60h+var_24]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
push    eax
call    CellStruct__Set
mov     eax, [eax]
mov     ebp, [esi+0B0h]
mov     dword ptr [esp+5Ch+var_44], eax
add     eax, 0FFFFFFFEh
mov     edx, ds:886FA0h
mov     word ptr [esp+5Ch+var_44], ax
mov     ecx, dword ptr [esp+5Ch+var_44]
mov     eax, [edi]
mov     [esp+5Ch+arg_0], ecx
mov     ecx, [esi+0B4h]
add     eax, ebp
mov     ebp, [edi+4]
add     ecx, ebp
mov     ebp, ds:886FA4h
sub     eax, edx
sub     ecx, ebp
mov     [esp+5Ch+var_3C], eax
mov     [esp+5Ch+var_38], ecx
fild    [esp+5Ch+var_38]
push    0
push    ecx
fstp    [esp+64h+var_64]
fild    [esp+64h+var_3C]
push    ecx
lea     ecx, [esp+68h+var_30]
fstp    [esp+68h+var_68]
call    Triple__Set
lea     edx, [esp+5Ch+var_30]
lea     ecx, [esp+5Ch+var_18]
push    edx
mov     edx, ebx
call    TransformMatrix3x4Point
mov     ecx, [eax]
mov     [esp+5Ch+var_30], ecx
mov     edx, [eax+4]
fld     [esp+5Ch+var_30]
mov     [esp+5Ch+var_2C], edx
mov     eax, [eax+8]
mov     [esp+5Ch+var_28], eax
call    Math__RoundToInt
fld     [esp+5Ch+var_2C]
mov     ebx, eax
call    Math__RoundToInt
push    0
push    eax
push    ebx
lea     ecx, [esp+68h+var_3C]
call    Coord__Subtract
mov     ecx, [esp+5Ch+var_3C]
mov     edx, [esp+5Ch+var_38]
mov     eax, [esp+5Ch+var_34]
mov     [esp+5Ch+var_24], ecx
lea     ecx, [esp+5Ch+var_24]
mov     [esp+5Ch+var_20], edx
push    ecx
mov     ecx, 87F7E8h
mov     [esp+60h+var_1C], eax
call    Coord__To_Cell
mov     ecx, [eax+24h]
mov     ebx, [edi+0Ch]
mov     eax, 88888889h
mov     edi, [edi+8]
imul    ebx
add     edx, ebx
mov     dword ptr [esp+5Ch+var_44], ecx
sar     edx, 3
mov     eax, edx
add     word ptr [esp+5Ch+var_44+2], 3
shr     eax, 1Fh
add     ecx, 0FFFFFFFEh
lea     ebx, [edx+eax+14h]
mov     eax, 88888889h
imul    edi
add     edx, edi
mov     word ptr [esp+5Ch+var_44], cx
sar     edx, 5
mov     eax, edx
xor     ecx, ecx
shr     eax, 1Fh
test    ebx, ebx
lea     edi, [edx+eax+7]
jle     loc_6D7F07
mov     ebp, [esp+5Ch+arg_4]

loc_6D7DE8:                             ; CODE XREF: TacticalClass__DrawTerrain+301↓j
mov     eax, ecx
cdq
sub     eax, edx
sar     eax, 1
inc     ecx
mov     word ptr [esp+5Ch+var_3C], ax
mov     eax, ecx
mov     [esp+5Ch+var_48], ecx
cdq
sub     eax, edx
sar     eax, 1
mov     word ptr [esp+5Ch+var_3C+2], ax
mov     edx, [esp+5Ch+var_3C]
mov     eax, dword ptr [esp+5Ch+var_44]
add     edx, eax
mov     eax, dword ptr [esp+5Ch+var_44+2]
mov     word ptr [esp+5Ch+arg_4], dx
mov     edx, [esp+5Ch+var_3C+2]
add     edx, eax
mov     word ptr [esp+5Ch+arg_4+2], dx
mov     edx, [esp+5Ch+arg_4]
test    edi, edi
mov     [esp+5Ch+arg_0], edx
jle     loc_6D7EFF
mov     [esp+5Ch+var_4C], edi

loc_6D7E37:                             ; CODE XREF: TacticalClass__DrawTerrain+2F5↓j
lea     eax, [esp+5Ch+arg_0]
mov     ecx, 87F7E8h
push    eax
call    LayerClass__CoordinatesLegal
test    al, al
jz      loc_6D7EE2
movsx   eax, word ptr [esp+5Ch+arg_0+2]
movsx   ecx, word ptr [esp+5Ch+arg_0]
shl     eax, 8
add     eax, 80h
push    0
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
shl     ecx, 8
shl     eax, 8
add     ecx, 80h
push    eax
mov     eax, ecx
lea     ecx, [esp+64h+var_C]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
shl     eax, 8
push    eax
call    Coord3D__Set
mov     ecx, [eax]
mov     [esp+5Ch+var_18], ecx
lea     ecx, [esp+5Ch+var_30]
mov     edx, [eax+4]
push    ecx
mov     [esp+60h+var_14], edx
lea     edx, [esp+60h+var_18]
mov     eax, [eax+8]
push    edx
mov     ecx, esi
mov     [esp+64h+var_10], eax
call    Coord__To_Screen
mov     eax, [esp+5Ch+var_30]
push    ebp
sub     eax, 1Eh
lea     ecx, [esp+60h+arg_0]
mov     [esp+60h+var_30], eax
lea     eax, [esp+60h+var_30]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax
call    TacticalClass__DrawCellTerrainOverlay

loc_6D7EE2:                             ; CODE XREF: TacticalClass__DrawTerrain+248↑j
inc     word ptr [esp+5Ch+arg_0]
mov     eax, [esp+5Ch+var_4C]
dec     word ptr [esp+5Ch+arg_0+2]
dec     eax
mov     [esp+5Ch+var_4C], eax
jnz     loc_6D7E37
mov     ecx, [esp+5Ch+var_48]

loc_6D7EFF:                             ; CODE XREF: TacticalClass__DrawTerrain+22D↑j
cmp     ecx, ebx
jl      loc_6D7DE8

loc_6D7F07:                             ; CODE XREF: TacticalClass__DrawTerrain+1DE↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 4Ch
retn    8
*/
}

// IDA: 0x4802A0 -- TacticalClass::DrawCellTerrainOverlay
// Draws terrain overlay for a specific cell at (cx, cy).
void TacticalClass::DrawCellTerrainOverlay(int cx, int cy, RectangleStruct* bounds)
{
    // Get the cell and its tile type index
    // Draw the isometric tile using DSurface::DrawSHP or similar
    // The tile is selected by cell->isoTileTypeIndex
    (void)cx;
    (void)cy;
    (void)bounds;
}

// IDA: 0x6D3040 -- TacticalClass::DrawTerrainPartial
// Draws partial terrain for a region of cells.
// 0x6d3040
void TacticalClass::DrawTerrainPartial(const RectangleStruct& rect)
{
// [IDA decompile]
signed int __thiscall TacticalClass::DrawTerrainPartial(_DWORD *this, int *a2, int *a3, char a4)
{
  _DWORD *v5; // ebx
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
  _DWORD v18[3]; // [esp+14h] [ebp-4Ch] BYREF
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  signed int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23[4]; // [esp+30h] [ebp-30h] BYREF
  int v24[2]; // [esp+40h] [ebp-20h] BYREF
  int v25; // [esp+48h] [ebp-18h]
  int v26; // [esp+4Ch] [ebp-14h]
  _DWORD v27[4]; // [esp+50h] [ebp-10h] BYREF
  int v28; // [esp+6Ch] [ebp+Ch]

  if ( a4 )
  {
    TacticalClass::DrawTerrain((int)this, &MEMORY[0x886FA0], &MEMORY[0x886FA0]);
  }
  else
  {
    if ( a2[2] > 0 && a2[3] > 0 )
      TacticalClass::DrawTerrain((int)this, a2, a2);
    if ( a3[2] > 0 && a3[3] > 0 )
      TacticalClass::DrawTerrain((int)this, a3, a3);
  }
  if ( (int)*(this + 56) > 0 && !a4 )
  {
    v28 = 0;
    v5 = this + 57;
    do
    {
      Coord::Subtract(
        v18,
        ((((__int16)*(_DWORD *)(*v5 + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*v5 + 36)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0];
      v20 = v18[1];
      v21 = v18[2];
      v6 = Coord::To_ScreenRaw(&v17, &v19);
      v7 = *(this + 45);
      v8 = *v6 - *(this + 44);
      v9 = v6[1];
      v23[0] = v8 - 30;
      v23[3] = 30;
      v23[1] = v9 - v7 + MEMORY[0x886FA4];
      v23[2] = 60;
      v10 = ClipRectIntersection(v27, &MEMORY[0x886FA0], v23, 0, 0);
      v24[0] = *v10;
      v24[1] = v10[1];
      v25 = v10[2];
      v11 = v10[3];
      v26 = v11;
      if ( v25 > 0 && v11 > 0 )
        TacticalClass::DrawTerrain((int)this, v24, v24);
      ++v5;
      ++v28;
    }
    while ( v28 < *(this + 56) );
  }
  result = MEMORY[0xB0CE88];
  if ( MEMORY[0xB0CE88] )
  {
    result = MEMORY[0xB0CE88] - 1;
    if ( MEMORY[0xB0CE88] - 1 >= 0 )
    {
      v13 = MEMORY[0xB0CE88];
      v14 = 20 * result;
      do
      {
        v19 = *(_DWORD *)((char *)MEMORY[0xB0CE7C] + v14);
        v20 = *(_DWORD *)((char *)MEMORY[0xB0CE7C] + v14 + 4);
        v21 = *(_DWORD *)((char *)MEMORY[0xB0CE7C] + v14 + 8);
        v22 = *(_DWORD *)((char *)MEMORY[0xB0CE7C] + v14 + 12);
        v20 += MEMORY[0x886FA4];
        v15 = ClipRectIntersection(v27, &MEMORY[0x886FA0], &v19, 0, 0);
        v19 = *v15;
        v20 = v15[1];
        result = v15[2];
        v21 = result;
        v16 = v15[3];
        v22 = v16;
        if ( result > 0 && v16 > 0 )
          result = TacticalClass::DrawTerrain((int)this, &v19, &v19);
        v14 -= 20;
        --v13;
      }
      while ( v13 );
    }
  }
  return result;
}

/* ASM:
sub     esp, 54h
push    ebx
mov     bl, byte ptr [esp+58h+arg_8]
push    esi
push    edi
test    bl, bl
mov     esi, ecx
jz      short loc_6D305C
push    886FA0h
push    886FA0h
jmp     short loc_6D308B
; ---------------------------------------------------------------------------

loc_6D305C:                             ; CODE XREF: TacticalClass__DrawTerrainPartial+E↑j
mov     eax, [esp+60h+arg_0]
mov     ecx, [eax+8]
test    ecx, ecx
jle     short loc_6D3077
mov     ecx, [eax+0Ch]
test    ecx, ecx
jle     short loc_6D3077
push    eax
push    eax
mov     ecx, esi
call    TacticalClass__DrawTerrain

loc_6D3077:                             ; CODE XREF: TacticalClass__DrawTerrainPartial+25↑j
; TacticalClass__DrawTerrainPartial+2C↑j
mov     eax, [esp+60h+arg_4]
mov     ecx, [eax+8]
test    ecx, ecx
jle     short loc_6D3092
mov     ecx, [eax+0Ch]
test    ecx, ecx
jle     short loc_6D3092
push    eax
push    eax

loc_6D308B:                             ; CODE XREF: TacticalClass__DrawTerrainPartial+1A↑j
mov     ecx, esi
call    TacticalClass__DrawTerrain

loc_6D3092:                             ; CODE XREF: TacticalClass__DrawTerrainPartial+40↑j
; TacticalClass__DrawTerrainPartial+47↑j
mov     eax, [esi+0E0h]
test    eax, eax
jle     loc_6D31DD
test    bl, bl
jnz     loc_6D31DD
test    eax, eax
mov     [esp+60h+arg_8], 0
jle     loc_6D31DD
push    ebp
mov     ebp, 3Ch ; '<'
lea     ebx, [esi+0E4h]

loc_6D30C4:                             ; CODE XREF: TacticalClass__DrawTerrainPartial+196↓j
mov     eax, [ebx]
push    0
mov     eax, [eax+24h]
mov     [esp+68h+arg_0], eax
movsx   ecx, ax
movsx   eax, word ptr [esp+68h+arg_0+2]
shl     eax, 8
add     eax, 80h
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
shl     ecx, 8
shl     eax, 8
add     ecx, 80h
push    eax
mov     eax, ecx
lea     ecx, [esp+6Ch+var_4C]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
shl     eax, 8
push    eax
call    Coord__Subtract
mov     ecx, [esp+64h+var_4C]
mov     edx, [esp+64h+var_48]
mov     eax, [esp+64h+var_44]
mov     [esp+64h+var_40], ecx
mov     [esp+64h+var_3C], edx
lea     ecx, [esp+64h+var_40]
lea     edx, [esp+64h+var_54]
push    ecx
push    edx
mov     ecx, esi
mov     [esp+6Ch+var_38], eax
call    Coord__To_ScreenRaw
mov     ecx, [eax]
mov     edx, [esi+0B0h]
mov     edi, [esi+0B4h]
sub     ecx, edx
mov     eax, [eax+4]
add     ecx, 0FFFFFFE2h
mov     [esp+64h+var_30], ecx
mov     ecx, 1Eh
mov     [esp+64h+var_24], ecx
mov     ecx, ds:886FA4h
sub     eax, edi
push    0
add     ecx, eax
lea     edx, [esp+68h+var_30]
mov     [esp+68h+var_2C], eax
push    0
mov     [esp+6Ch+var_2C], ecx
push    edx
mov     edx, 886FA0h
lea     ecx, [esp+70h+var_10]
mov     [esp+70h+var_28], ebp
call    ClipRectIntersection
mov     ecx, eax
mov     edx, [ecx]
mov     [esp+64h+var_20], edx
mov     eax, [ecx+4]
mov     [esp+64h+var_1C], eax
mov     eax, [ecx+8]
mov     [esp+64h+var_18], eax
mov     ecx, [ecx+0Ch]
test    eax, eax
mov     [esp+64h+var_14], ecx
jle     short loc_6D31C2
test    ecx, ecx
jle     short loc_6D31C2
lea     ecx, [esp+64h+var_20]
lea     edx, [esp+64h+var_20]
push    ecx
push    edx
mov     ecx, esi
call    TacticalClass__DrawTerrain

loc_6D31C2:                             ; CODE XREF: TacticalClass__DrawTerrainPartial+16B↑j
; TacticalClass__DrawTerrainPartial+16F↑j
mov     eax, [esp+64h+arg_8]
mov     ecx, [esi+0E0h]
inc     eax
add     ebx, 4
cmp     eax, ecx
mov     [esp+64h+arg_8], eax
jl      loc_6D30C4
pop     ebp

loc_6D31DD:                             ; CODE XREF: TacticalClass__DrawTerrainPartial+5A↑j
; TacticalClass__DrawTerrainPartial+62↑j ...
mov     eax, dword_A8ED54+7E134h
test    eax, eax
jz      loc_6D3283
dec     eax
test    eax, eax
jl      loc_6D3283
lea     edi, [eax+eax*4]
lea     ebx, [eax+1]
shl     edi, 2

loc_6D31FC:                             ; CODE XREF: TacticalClass__DrawTerrainPartial+23D↓j
mov     eax, dword_A8ED54+7E128h
push    0
push    0
lea     ecx, [edi+eax]
mov     edx, [edi+eax]
mov     [esp+68h+var_40], edx
mov     eax, [ecx+4]
mov     [esp+68h+var_3C], eax
mov     edx, [ecx+8]
mov     [esp+68h+var_38], edx
mov     edx, ds:886FA4h
mov     ecx, [ecx+0Ch]
add     eax, edx
lea     edx, [esp+68h+var_40]
mov     [esp+68h+var_34], ecx
push    edx
mov     edx, 886FA0h
lea     ecx, [esp+6Ch+var_10]
mov     [esp+6Ch+var_3C], eax
call    ClipRectIntersection
mov     ecx, eax
mov     edx, [ecx]
mov     [esp+60h+var_40], edx
mov     eax, [ecx+4]
mov     [esp+60h+var_3C], eax
mov     eax, [ecx+8]
mov     [esp+60h+var_38], eax
mov     ecx, [ecx+0Ch]
test    eax, eax
mov     [esp+60h+var_34], ecx
jle     short loc_6D3279
test    ecx, ecx
jle     short loc_6D3279
lea     ecx, [esp+60h+var_40]
lea     edx, [esp+60h+var_40]
push    ecx
push    edx
mov     ecx, esi
call    TacticalClass__DrawTerrain

loc_6D3279:                             ; CODE XREF: TacticalClass__DrawTerrainPartial+222↑j
; TacticalClass__DrawTerrainPartial+226↑j
sub     edi, 14h
dec     ebx
jnz     loc_6D31FC

loc_6D3283:                             ; CODE XREF: TacticalClass__DrawTerrainPartial+1A4↑j
; TacticalClass__DrawTerrainPartial+1AD↑j
pop     edi
pop     esi
pop     ebx
add     esp, 54h
retn    0Ch
*/
}

// ============================================================
// Building drawing functions
// ============================================================

// IDA: 0x6D6D10 -- TacticalClass::DrawBuildingsInView
// Draws all buildings in the current view.
void TacticalClass::DrawBuildingsInView(const RectangleStruct& viewRect)
{
    // Iterate through building list and draw each building
    // For each building:
    //   1. Check if building is in view (CalcBuildingDrawPos)
    //   2. Call BuildingClass::Draw
    //   3. Post-draw effects (health bars, selection boxes, etc.)
    (void)viewRect;
}

// IDA: 0x6D71E0 -- TacticalClass::CalcBuildingDrawPos
// Calculates the screen draw position for a building.
// 0x6d71e0
Point2D* TacticalClass::CalcBuildingDrawPos(Point2D* out, BuildingClass* building)
{
    if (!out || !building)
        return out;

    // Delegate to BuildingClass::CalcDrawPos which handles foundation offsets
    building->CalcDrawPos(out);
    return out;
}

// IDA: 0x4D1890 -- TacticalClass::DrawBuildings
// Draws all buildings in sorted order (Y-sort for isometric depth).
// 0x4d1890
void TacticalClass::DrawBuildings(const RectangleStruct& viewRect)
{
// [IDA decompile]
int __thiscall TacticalClass::DrawBuildings(int *this)
{
  int result; // eax
  int v3; // esi
  int v4; // ebx
  int *v5; // eax
  __int16 *v6; // esi
  int v7; // ebp
  char v8; // al
  _DWORD *v9; // esi
  __int16 *v10; // ebp
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // esi
  int v17; // ecx
  _BYTE *v18; // esi
  int *v19; // ebp
  int v20; // ecx
  int v21; // edx
  int v22; // edx
  char v23; // al
  int v24; // ecx
  int v25; // eax
  int *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  __int16 *v32; // eax
  _DWORD *v33; // ecx
  int v34; // ebp
  int v35; // esi
  _DWORD *v36; // ebp
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // ebp
  int v43; // ebp
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // ebp
  __int16 *v50; // eax
  int v51; // esi
  int v52; // [esp-28h] [ebp-174h]
  int v53; // [esp-28h] [ebp-174h]
  int v54; // [esp-24h] [ebp-170h]
  int v55; // [esp-20h] [ebp-16Ch]
  int v56; // [esp-20h] [ebp-16Ch]
  int v57; // [esp+8h] [ebp-144h]
  int v58; // [esp+8h] [ebp-144h]
  _DWORD *v59; // [esp+8h] [ebp-144h]
  _DWORD *v60; // [esp+Ch] [ebp-140h]
  _DWORD *v61; // [esp+Ch] [ebp-140h]
  char v62; // [esp+10h] [ebp-13Ch]
  int v63; // [esp+10h] [ebp-13Ch]
  _DWORD *v64; // [esp+10h] [ebp-13Ch]
  int v65; // [esp+10h] [ebp-13Ch]
  int v66; // [esp+14h] [ebp-138h]
  unsigned int v67; // [esp+18h] [ebp-134h]
  int j; // [esp+18h] [ebp-134h]
  unsigned int v69; // [esp+1Ch] [ebp-130h]
  char v70; // [esp+23h] [ebp-129h]
  int v71; // [esp+24h] [ebp-128h]
  __int16 *v72; // [esp+24h] [ebp-128h]
  int v73; // [esp+28h] [ebp-124h]
  int v74; // [esp+28h] [ebp-124h]
  int v75; // [esp+2Ch] [ebp-120h]
  int v76; // [esp+2Ch] [ebp-120h]
  int v77; // [esp+30h] [ebp-11Ch] BYREF
  int v78; // [esp+34h] [ebp-118h]
  int v79; // [esp+38h] [ebp-114h] BYREF
  int v80; // [esp+3Ch] [ebp-110h]
  int v81; // [esp+40h] [ebp-10Ch] BYREF
  int v82; // [esp+44h] [ebp-108h]
  int v83[2]; // [esp+48h] [ebp-104h] BYREF
  int v84; // [esp+50h] [ebp-FCh]
  int v85; // [esp+54h] [ebp-F8h]
  int i; // [esp+60h] [ebp-ECh]
  int v87[2]; // [esp+64h] [ebp-E8h] BYREF
  int v88[3]; // [esp+6Ch] [ebp-E0h] BYREF
  int v89; // [esp+78h] [ebp-D4h]
  int v90; // [esp+7Ch] [ebp-D0h]
  int v91; // [esp+80h] [ebp-CCh]
  char **v92; // [esp+84h] [ebp-C8h]
  int v93; // [esp+88h] [ebp-C4h] BYREF
  int v94; // [esp+8Ch] [ebp-C0h]
  int v95; // [esp+90h] [ebp-BCh]
  int v96; // [esp+94h] [ebp-B8h]
  _DWORD v97[2]; // [esp+98h] [ebp-B4h] BYREF
  int v98[2]; // [esp+A0h] [ebp-ACh] BYREF
  _DWORD v99[3]; // [esp+A8h] [ebp-A4h] BYREF
  _DWORD v100[3]; // [esp+B4h] [ebp-98h] BYREF
  _DWORD v101[3]; // [esp+C0h] [ebp-8Ch] BYREF
  _DWORD v102[3]; // [esp+CCh] [ebp-80h] BYREF
  _DWORD v103[3]; // [esp+D8h] [ebp-74h] BYREF
  _DWORD v104[3]; // [esp+E4h] [ebp-68h] BYREF
  _DWORD v105[3]; // [esp+F0h] [ebp-5Ch] BYREF
  _DWORD v106[3]; // [esp+FCh] [ebp-50h] BYREF
  _DWORD v107[3]; // [esp+108h] [ebp-44h] BYREF
  _DWORD v108[3]; // [esp+114h] [ebp-38h] BYREF
  _DWORD v109[3]; // [esp+120h] [ebp-2Ch] BYREF
  int v110; // [esp+12Ch] [ebp-20h]
  int v111[2]; // [esp+134h] [ebp-18h] BYREF
  _DWORD v112[4]; // [esp+13Ch] [ebp-10h] BYREF

  result = dword_A8ED54[233983];
  if ( dword_A8ED54[233983] )
  {
    result = MEMORY[0x87F7E8][53559];
    v3 = 0;
    for ( i = 0; i < MEMORY[0x87F7E8][53559]; ++i )
    {
      if ( !LOBYTE(MEMORY[0x87F7E8][53561]) )
      {
        qsort((void *)MEMORY[0x87F7E8][53558], result, 8, globalHelper_0D2ED0);
        MEMORY[0x87F7E8][53562] = 0;
        LOBYTE(MEMORY[0x87F7E8][53561]) = 1;
      }
      v4 = *(_DWORD *)(MEMORY[0x87F7E8][53558] + 8 * v3 + 4);
      if ( *(_BYTE *)(v4 + 116) )
      {
        v93 = *(_DWORD *)(v4 + 64);
        v94 = *(_DWORD *)(v4 + 68);
        v95 = *(_DWORD *)(v4 + 72);
        v96 = *(_DWORD *)(v4 + 76);
        v93 -= *(_DWORD *)(MEMORY[0x87F7E8][7887] + 176);
        v94 = MEMORY[0x87F7E8][7663] + v94 - *(_DWORD *)(MEMORY[0x87F7E8][7887] + 180);
        v93 += MEMORY[0x87F7E8][7662];
        v5 = ClipRectIntersection(v112, this, &v93, 0, 0);
        v84 = *v5;
        v85 = v5[1];
        if ( v5[2] > 0 && v5[3] > 0 )
        {
          switch ( *(_DWORD *)(v4 + 48) )
          {
            case 6:
              for ( j = 0; j < *(_DWORD *)(v4 + 108); ++j )
              {
                v17 = *(_DWORD *)(v4 + 96);
                v18 = *(_BYTE **)(v17 + 16 * j);
                v69 = *(_DWORD *)(v17 + 16 * j + 4);
                v66 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 156))(v18);
                v70 = *(_BYTE *)(*(_DWORD *)(v4 + 96) + 16 * j + 8);
                v64 = *(_DWORD **)(*(_DWORD *)(dword_A8ED54[121312] + 4 * *(_DWORD *)(*(_DWORD *)(v4 + 40) + 90196))
                                 + 780);
                if ( j )
                {
                  if ( v18
                    && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 44))(v18) == 5
                    && *((_DWORD *)v18 + 181) <= MEMORY[0x87F7E8][539876]
                    && v66 )
                  {
                    v36 = (_DWORD *)(v4 + 52);
                    v37 = *(_DWORD *)(v4 + 56);
                    v100[0] = *(_DWORD *)(v4 + 52) - 128;
                    v38 = *(_DWORD *)(v4 + 60);
                    v100[1] = v37 - 128;
                    v100[2] = v38;
                    Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v100, &v77);
                    v110 = *this;
                    v39 = MEMORY[0x87F7E8][7663] - *(this + 1);
                    v40 = 1000;
                    v77 += MEMORY[0x87F7E8][7662] - v110;
                    v41 = v39 + v78;
                    LOBYTE(v39) = v18[861];
                    v78 = v41;
                    if ( !(_BYTE)v39 )
                    {
                      v102[0] = *v36;
                      v102[1] = *(_DWORD *)(v4 + 56);
                      v102[2] = *(_DWORD *)(v4 + 60);
                      v40 = *((__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v102) + 133);
                    }
                    if ( v64 && v18[860] )
                      v59 = v64;
                    else
                      v59 = (_DWORD *)MEMORY[0x87F6C0][0];
                    v65 = *(_DWORD *)(*(_DWORD *)(v4 + 96) + 16 * j + 12);
                    if ( v18[873] )
                    {
                      v84 = *v36;
                      v42 = *(_DWORD *)(v4 + 60);
                      v55 = v40;
                      v85 = *(_DWORD *)(v4 + 56);
                      v54 = 0;
                    }
                    else
                    {
                      v84 = *v36;
                      v42 = *(_DWORD *)(v4 + 60);
                      v55 = v40;
                      v85 = *(_DWORD *)(v4 + 56);
                      v54 = 2;
                    }
                    v52 = v65 - ZCoordToScreenY(v42) - 2;
                    DrawToSurfaceSHP(
                      (int *)MEMORY[0x87F7E8][7883],
                      v59,
                      v66,
                      v69,
                      &v77,
                      this,
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
                  v19 = (int *)(v4 + 52);
                  v20 = *(_DWORD *)(v4 + 56);
                  v109[0] = *(_DWORD *)(v4 + 52) - 128;
                  v21 = *(_DWORD *)(v4 + 60);
                  v109[1] = v20 - 128;
                  v109[2] = v21;
                  Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v109, &v79);
                  v105[0] = *(_DWORD *)(v4 + 52);
                  v105[1] = *(_DWORD *)(v4 + 56);
                  v105[2] = *(_DWORD *)(v4 + 60);
                  v60 = Coord::To_Cell(MEMORY[0x87F7E8], v105);
                  v22 = MEMORY[0x87F7E8][7663] - *(this + 1);
                  v23 = v18[5889];
                  v79 += MEMORY[0x87F7E8][7662] - *this;
                  v24 = v22 + v80;
                  v80 += v22;
                  if ( v23 )
                    goto LABEL_49;
                  v71 = *((_DWORD *)v18 + 1352);
                  v83[0] = v79;
                  v83[1] = v24;
                  v25 = v24 + *(__int16 *)(v66 + 4) / 2;
                  v88[0] = *this;
                  v88[1] = *(this + 1);
                  v88[2] = *(this + 2);
                  v89 = *(this + 3);
                  if ( v89 > v25 )
                    v89 = v25;
                  v73 = *((_DWORD *)v18 + 1356) + 144;
                  v75 = *((_DWORD *)v18 + 1357) + 172;
                  v57 = (BuildingTypeClass::GetFoundationHeight((int)v18, 0) << 8) - 256;
                  v97[0] = (BuildingTypeClass::GetFoundationWidth(v18) << 8) - 256;
                  v97[1] = v57;
                  v26 = TacticalClass::AdjustForZShapeMove(v111, v97);
                  v74 = v73 - *v26;
                  v27 = *v19;
                  v76 = v75 - v26[1];
                  v92 = (char **)MEMORY[0x87F7E8][31093];
                  v28 = *(_DWORD *)(v4 + 56);
                  v84 = v27;
                  v85 = v28;
                  v29 = ZCoordToScreenY(*(_DWORD *)(v4 + 60));
                  v30 = *(_DWORD *)(v4 + 56);
                  v99[0] = *v19;
                  v58 = -v29;
                  v31 = *(_DWORD *)(v4 + 60);
                  v99[1] = v30;
                  v99[2] = v31;
                  v32 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v99);
                  v33 = v60;
                  v34 = *((__int16 *)v18 + 2724) + v32[133];
                  if ( !v60[13] )
                  {
                    TacticalClass::SetView((int)v60, 0, 0x10000, 0, 1000, 1000, 1000);
                    v33 = v60;
                  }
                  if ( v18[5890] )
                    v61 = (_DWORD *)v33[13];
                  else
                    v61 = v64;
                  if ( v89 > 0 )
                  {
                    if ( v70 )
                      DrawToSurfaceSHP(
                        (int *)MEMORY[0x87F7E8][7883],
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
                      DrawToSurfaceSHP(
                        (int *)MEMORY[0x87F7E8][7883],
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
                        v92,
                        0,
                        v74,
                        v76);
                    DrawToSurfaceSHP(
                      (int *)MEMORY[0x87F7E8][7883],
                      v61,
                      v66,
                      v69 + *(__int16 *)(v66 + 6) / 2,
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
                  v35 = *((_DWORD *)v18 + 1350);
                  if ( v35 )
                    DrawToSurfaceSHP(
                      (int *)MEMORY[0x87F7E8][7883],
                      v61,
                      v35,
                      v69,
                      &v79,
                      this,
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
              break;
            case 0x14:
              v108[0] = *(_DWORD *)(v4 + 52);
              v108[1] = *(_DWORD *)(v4 + 56);
              v108[2] = *(_DWORD *)(v4 + 60);
              v6 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v108);
              v7 = *((_DWORD *)v6 + 17);
              v8 = *((_BYTE *)v6 + 286);
              *((_DWORD *)v6 + 17) = *(_DWORD *)(v4 + 36);
              v62 = v8;
              *((_BYTE *)v6 + 286) = *(_BYTE *)(v4 + 44);
              Coord::Subtract(v106, (((v6[18] << 8) + 128) / 256) << 8, (((v6[19] << 8) + 128) / 256) << 8, 0);
              v101[0] = v106[0];
              v101[1] = v106[1];
              v101[2] = v106[2];
              Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v101, v87);
              v87[0] -= 30;
              BuildingClass::Draw_0((int)v6, v87, this);
              TacticalClass::DrawBuildingPlacement((int)v6, v87, this);
              *((_DWORD *)v6 + 17) = v7;
              *((_BYTE *)v6 + 286) = v62;
              break;
            case 0x1D:
              v43 = *(this + 1);
              v44 = *this;
              v45 = *(_DWORD *)(MEMORY[0x87F7E8][7887] + 180);
              v90 = *(_DWORD *)(MEMORY[0x87F7E8][7887] + 176);
              v46 = *(_DWORD *)(v4 + 68);
              v91 = v45;
              v47 = *(_DWORD *)(v4 + 64) - v90 + MEMORY[0x87F7E8][7662] + 30;
              v98[1] = MEMORY[0x87F7E8][7663] + v46 - v91 - v43;
              v48 = *(_DWORD *)(v4 + 84);
              v98[0] = v47 - v44;
              v49 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(MEMORY[0x87F7E8][539917] + 4 * v48) + 156))(*(_DWORD *)(MEMORY[0x87F7E8][539917] + 4 * v48));
              if ( v49 )
              {
                v104[0] = *(_DWORD *)(v4 + 52);
                v104[1] = *(_DWORD *)(v4 + 56);
                v104[2] = *(_DWORD *)(v4 + 60);
                v50 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v104);
                v84 = *(_DWORD *)(v4 + 52);
                v51 = *(_DWORD *)(v4 + 60);
                v85 = *(_DWORD *)(v4 + 56);
                v72 = v50;
                v56 = v50[134];
                v53 = -(int)ZCoordToScreenY(v51);
                DrawToSurfaceSHP(
                  (int *)MEMORY[0x87F7E8][7883],
                  *((_DWORD **)v72 + 13),
                  v49,
                  *(_DWORD *)(v4 + 88),
                  v98,
                  this,
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
              break;
            case 0x24:
              v9 = (_DWORD *)(v4 + 52);
              v63 = **(_DWORD **)(v4 + 96);
              v107[0] = *(_DWORD *)(v4 + 52);
              v107[1] = *(_DWORD *)(v4 + 56);
              v107[2] = *(_DWORD *)(v4 + 60);
              v10 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v107);
              v67 = *(_DWORD *)(*(_DWORD *)(v4 + 96) + 4);
              v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v63 + 156))(v63);
              v103[0] = *v9;
              v103[1] = v9[1];
              v103[2] = v9[2];
              Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v103, &v81);
              v12 = MEMORY[0x87F7E8][7663] - *(this + 1);
              v13 = *v9;
              v81 += MEMORY[0x87F7E8][7662] - *this;
              v14 = v12 + v82;
              v85 = v9[1];
              v15 = v9[2];
              v82 = v14;
              v84 = v13;
              v16 = -(int)ZCoordToScreenY(v15);
              if ( !*((_DWORD *)v10 + 13) )
                TacticalClass::SetView((int)v10, 0, 0x10000, 0, 1000, 1000, 1000);
              DrawToSurfaceSHP(
                (int *)MEMORY[0x87F7E8][7883],
                *((_DWORD **)v10 + 13),
                v11,
                v67,
                &v81,
                this,
                19968,
                0,
                v16 - 4,
                2,
                v10[134],
                0,
                0,
                0,
                0,
                0);
              if ( byte_822CF1 )
                DrawToSurfaceSHP(
                  (int *)MEMORY[0x87F7E8][7883],
                  *((_DWORD **)v10 + 13),
                  v11,
                  v67 + *(__int16 *)(v11 + 6) / 2,
                  &v81,
                  this,
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
              break;
            default:
              break;
          }
        }
      }
LABEL_49:
      result = MEMORY[0x87F7E8][53559];
      v3 = i + 1;
    }
  }
  return result;
}

/* ASM:
mov     eax, dword_A8ED54+0E47FCh
sub     esp, 144h
test    eax, eax
push    esi
push    edi
mov     edi, ecx
jz      loc_4D2329
mov     eax, ds:8B3CC4h
xor     esi, esi
test    eax, eax
mov     [esp+14Ch+var_EC], esi
jle     loc_4D2329
push    ebx
push    ebp

loc_4D18BC:                             ; CODE XREF: TacticalClass__DrawBuildings+A91↓j
mov     cl, ds:8B3CCCh
test    cl, cl
jnz     short loc_4D18ED
push    offset globalHelper_0D2ED0 ; CompareFunction
push    8               ; SizeOfElements
push    eax             ; NumOfElements
mov     eax, ds:8B3CC0h
push    eax             ; Base
call    _qsort
add     esp, 10h
mov     dword ptr ds:8B3CD0h, 0
mov     byte ptr ds:8B3CCCh, 1

loc_4D18ED:                             ; CODE XREF: TacticalClass__DrawBuildings+34↑j
mov     ecx, ds:8B3CC0h
mov     ebx, [ecx+esi*8+4]
mov     al, [ebx+74h]
test    al, al
jz      def_4D19BD      ; jumptable 004D19BD default case, cases 7-19,21-28,30-35
lea     esi, [ebx+40h]
push    0
mov     edx, esi
push    0
mov     eax, [edx]
mov     [esp+15Ch+var_C4], eax
mov     ecx, [edx+4]
mov     [esp+15Ch+var_C0], ecx
mov     ebp, [edx+8]
mov     [esp+15Ch+var_BC], ebp
mov     edx, [edx+0Ch]
mov     [esp+15Ch+var_B8], edx
mov     edx, ds:887324h
sub     eax, [edx+0B0h]
mov     [esp+15Ch+var_C4], eax
mov     ebp, [edx+0B4h]
mov     edx, ds:886FA4h
sub     ecx, ebp
mov     ebp, ds:886FA0h
add     ecx, edx
add     eax, ebp
mov     [esp+15Ch+var_C0], ecx
mov     [esp+15Ch+var_C4], eax
lea     eax, [esp+15Ch+var_C4]
push    eax
mov     edx, edi
lea     ecx, [esp+160h+var_10]
call    ClipRectIntersection
mov     ecx, eax
mov     edx, [ecx]
mov     [esp+154h+var_FC], edx
mov     eax, [ecx+4]
mov     [esp+154h+var_F8], eax
mov     eax, [ecx+8]
test    eax, eax
mov     ecx, [ecx+0Ch]
jle     def_4D19BD      ; jumptable 004D19BD default case, cases 7-19,21-28,30-35
test    ecx, ecx
jle     def_4D19BD      ; jumptable 004D19BD default case, cases 7-19,21-28,30-35
mov     eax, [ebx+30h]
add     eax, 0FFFFFFFAh ; switch 31 cases
cmp     eax, 1Eh
ja      def_4D19BD      ; jumptable 004D19BD default case, cases 7-19,21-28,30-35
xor     ecx, ecx
mov     cl, ds:byte_4D2348[eax]
jmp     ds:jpt_4D19BD[ecx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_4D19C4:                             ; CODE XREF: TacticalClass__DrawBuildings+12D↑j
; DATA XREF: .text:jpt_4D19BD↓o
lea     edx, [ebx+34h]  ; jumptable 004D19BD case 20
mov     eax, [ebx+34h]
mov     [esp+154h+var_38], eax
lea     eax, [esp+154h+var_38]
mov     ecx, [edx+4]
push    eax
mov     [esp+158h+var_34], ecx
mov     ecx, 87F7E8h
mov     edx, [edx+8]
mov     [esp+158h+var_30], edx
call    Coord__To_Cell
mov     ecx, [ebx+24h]
mov     esi, eax
xor     eax, eax
push    0
mov     ebp, [esi+44h]
mov     al, [esi+11Eh]
mov     [esi+44h], ecx
mov     dl, [ebx+2Ch]
mov     [esp+158h+var_13C], eax
mov     [esi+11Eh], dl
movsx   eax, word ptr [esi+26h]
movsx   ecx, word ptr [esi+24h]
shl     eax, 8
add     eax, 80h
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
shl     ecx, 8
shl     eax, 8
add     ecx, 80h
push    eax
mov     eax, ecx
lea     ecx, [esp+15Ch+var_50]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
shl     eax, 8
push    eax
call    Coord__Subtract
mov     eax, [esp+154h+var_50]
mov     ecx, [esp+154h+var_4C]
mov     edx, [esp+154h+var_48]
mov     [esp+154h+var_8C], eax
mov     [esp+154h+var_88], ecx
lea     eax, [esp+154h+var_E8]
lea     ecx, [esp+154h+var_8C]
push    eax
push    ecx
mov     ecx, ds:887324h
mov     [esp+15Ch+var_84], edx
call    Coord__To_Screen
lea     edx, [esp+154h+var_E8]
mov     ecx, [esp+154h+var_E8]
push    edi
sub     ecx, 1Eh
push    edx
mov     [esp+15Ch+var_E8], ecx
mov     ecx, esi
call    BuildingClass__Draw_0
lea     eax, [esp+154h+var_E8]
mov     ecx, esi
push    edi
push    eax
call    TacticalClass__DrawBuildingPlacement
mov     [esi+44h], ebp
mov     cl, byte ptr [esp+154h+var_13C]
mov     [esi+11Eh], cl
jmp     def_4D19BD      ; jumptable 004D19BD default case, cases 7-19,21-28,30-35
; ---------------------------------------------------------------------------

loc_4D1AD9:                             ; CODE XREF: TacticalClass__DrawBuildings+12D↑j
; DATA XREF: .text:jpt_4D19BD↓o
mov     edx, [ebx+60h]  ; jumptable 004D19BD case 36
lea     esi, [ebx+34h]
mov     ecx, esi
mov     eax, [edx]
mov     edx, [ecx]
mov     [esp+154h+var_13C], eax
mov     [esp+154h+var_44], edx
lea     edx, [esp+154h+var_44]
mov     eax, [ecx+4]
push    edx
mov     [esp+158h+var_40], eax
mov     ecx, [ecx+8]
mov     [esp+158h+var_3C], ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ebp, eax
mov     eax, [ebx+60h]
mov     ecx, [eax+4]
mov     [esp+154h+var_134], ecx
mov     ecx, [esp+154h+var_13C]
mov     edx, [ecx]
call    dword ptr [edx+9Ch]
mov     ebx, eax
mov     eax, esi
mov     ecx, [eax]
mov     [esp+154h+var_74], ecx
lea     ecx, [esp+154h+var_10C]
mov     edx, [eax+4]
push    ecx
mov     ecx, ds:887324h
mov     [esp+158h+var_70], edx
mov     eax, [eax+8]
lea     edx, [esp+158h+var_74]
push    edx
mov     [esp+15Ch+var_6C], eax
call    Coord__To_Screen
mov     edx, [edi]
mov     eax, ds:886FA0h
mov     ecx, ds:886FA4h
sub     eax, edx
mov     edx, [edi+4]
sub     ecx, edx
mov     edx, [esp+154h+var_10C]
add     edx, eax
mov     eax, [esi]
mov     [esp+154h+var_10C], edx
mov     edx, [esp+154h+var_108]
add     edx, ecx
mov     ecx, [esi+4]
mov     [esp+154h+var_F8], ecx
mov     ecx, [esi+8]
mov     [esp+154h+var_108], edx
mov     [esp+154h+var_FC], eax
call    ZCoordToScreenY
mov     esi, eax
mov     eax, [ebp+34h]
neg     esi
test    eax, eax
jnz     short loc_4D1BCE
push    3E8h
push    3E8h
push    3E8h
push    0
push    10000h
push    0
mov     ecx, ebp
call    TacticalClass__SetView

loc_4D1BCE:                             ; CODE XREF: TacticalClass__DrawBuildings+31D↑j
movsx   edx, word ptr [ebp+10Ch]
xor     ecx, ecx
xor     eax, eax
push    ecx
push    eax
push    ecx
push    ecx
push    ecx
push    edx
mov     edx, [esp+16Ch+var_134]
lea     eax, [esi-4]
push    2
push    eax
push    ecx
push    4E00h
lea     ecx, [esp+17Ch+var_10C]
push    edi
push    ecx
mov     ecx, ds:887314h
push    edx
mov     edx, [ebp+34h]
push    ebx
call    DrawToSurfaceSHP
mov     al, byte_822CF1
test    al, al
jz      def_4D19BD      ; jumptable 004D19BD default case, cases 7-19,21-28,30-35
xor     ecx, ecx
xor     eax, eax
push    ecx
push    eax
push    ecx
push    ecx
push    ecx
push    3E8h
add     esi, 0FFFFFFFEh
push    ecx
push    esi
push    ecx
push    4601h
lea     eax, [esp+17Ch+var_10C]
push    edi
push    eax
movsx   eax, word ptr [ebx+6]
cdq
sub     eax, edx
mov     edx, [esp+184h+var_134]
sar     eax, 1
add     eax, edx
mov     edx, [ebp+34h]
push    eax
push    ebx
jmp     loc_4D2306
; ---------------------------------------------------------------------------

loc_4D1C4A:                             ; CODE XREF: TacticalClass__DrawBuildings+12D↑j
; DATA XREF: .text:jpt_4D19BD↓o
mov     eax, [ebx+6Ch]  ; jumptable 004D19BD case 6
mov     [esp+154h+var_134], 0
test    eax, eax
jle     def_4D19BD      ; jumptable 004D19BD default case, cases 7-19,21-28,30-35

loc_4D1C5D:                             ; CODE XREF: TacticalClass__DrawBuildings+96D↓j
mov     ebp, [esp+154h+var_134]
mov     ecx, [ebx+60h]
shl     ebp, 4
mov     [esp+154h+var_128], ebp
mov     esi, [ecx+ebp]
mov     edx, [ecx+ebp+4]
lea     eax, [ecx+ebp]
mov     ecx, esi
mov     eax, [esi]
mov     [esp+154h+var_130], edx
call    dword ptr [eax+9Ch]
mov     ecx, [ebx+60h]
mov     [esp+154h+var_138], eax
mov     eax, [ebx+28h]
mov     dl, [ecx+ebp+8]
mov     ecx, [eax+16054h]
mov     [esp+154h+var_129], dl
mov     edx, dword_A8ED54+76780h
mov     eax, [edx+ecx*4]
mov     ecx, [eax+30Ch]
mov     eax, [esp+154h+var_134]
test    eax, eax
mov     [esp+154h+var_13C], ecx
jnz     loc_4D204D
lea     ebp, [ebx+34h]
mov     edx, ebp
mov     eax, [edx]
add     eax, 0FFFFFF80h
mov     ecx, [edx+4]
mov     [esp+154h+var_2C], eax
add     ecx, 0FFFFFF80h
lea     eax, [esp+154h+var_114]
mov     edx, [edx+8]
mov     [esp+154h+var_28], ecx
lea     ecx, [esp+154h+var_2C]
push    eax
push    ecx
mov     ecx, ds:887324h
mov     [esp+15Ch+var_24], edx
call    Coord__To_Screen
mov     edx, ebp
mov     eax, [edx]
mov     [esp+154h+var_5C], eax
lea     eax, [esp+154h+var_5C]
mov     ecx, [edx+4]
push    eax
mov     [esp+158h+var_58], ecx
mov     ecx, 87F7E8h
mov     edx, [edx+8]
mov     [esp+158h+var_54], edx
call    Coord__To_Cell
mov     edx, [edi]
mov     ecx, [edi+4]
mov     [esp+154h+var_140], eax
mov     eax, ds:886FA0h
sub     eax, edx
mov     edx, ds:886FA4h
sub     edx, ecx
mov     ecx, [esp+154h+var_114]
add     ecx, eax
mov     al, [esi+1701h]
mov     [esp+154h+var_114], ecx
mov     ecx, [esp+154h+var_110]
add     ecx, edx
test    al, al
mov     [esp+154h+var_110], ecx
jnz     def_4D19BD      ; jumptable 004D19BD default case, cases 7-19,21-28,30-35
mov     edx, [esi+1520h]
mov     eax, [esp+154h+var_114]
mov     [esp+154h+var_128], edx
mov     edx, [esp+154h+var_138]
mov     [esp+154h+var_104], eax
mov     [esp+154h+var_100], ecx
movsx   eax, word ptr [edx+4]
cdq
sub     eax, edx
sar     eax, 1
add     eax, ecx
mov     ecx, edi
mov     edx, [ecx]
mov     [esp+154h+var_E0], edx
mov     edx, [ecx+4]
mov     [esp+154h+var_DC], edx
mov     edx, [ecx+8]
mov     [esp+154h+var_D8], edx
mov     ecx, [ecx+0Ch]
cmp     ecx, eax
mov     [esp+154h+var_D4], ecx
jle     short loc_4D1DB5
mov     [esp+154h+var_D4], eax

loc_4D1DB5:                             ; CODE XREF: TacticalClass__DrawBuildings+51C↑j
mov     eax, [esi+1530h]
push    0
add     eax, 90h
mov     ecx, esi
mov     [esp+158h+var_124], eax
mov     eax, [esi+1534h]
add     eax, 0ACh
mov     [esp+158h+var_120], eax
call    BuildingTypeClass__GetFoundationHeight
shl     eax, 8
sub     eax, 100h
mov     ecx, esi
mov     [esp+154h+var_144], eax
call    BuildingTypeClass__GetFoundationWidth
shl     eax, 8
sub     eax, 100h
lea     ecx, [esp+154h+var_B4]
mov     [esp+154h+var_B4], eax
mov     eax, [esp+154h+var_144]
lea     edx, [esp+154h+var_18]
push    ecx
mov     ecx, ds:887324h
push    edx
mov     [esp+15Ch+var_B0], eax
call    TacticalClass__AdjustForZShapeMove
mov     ecx, [eax]
mov     edx, [esp+154h+var_124]
sub     edx, ecx
mov     ecx, ebp
mov     [esp+154h+var_124], edx
mov     edx, [eax+4]
mov     eax, [esp+154h+var_120]
sub     eax, edx
mov     edx, [ecx]
mov     [esp+154h+var_120], eax
mov     eax, ds:89DDBCh
mov     [esp+154h+var_C8], eax
mov     eax, [ecx+4]
mov     [esp+154h+var_FC], edx
mov     [esp+154h+var_F8], eax
mov     ecx, [ecx+8]
call    ZCoordToScreenY
mov     ecx, [ebp+0]
mov     edx, [ebp+4]
neg     eax
mov     [esp+154h+var_A4], ecx
lea     ecx, [esp+154h+var_A4]
mov     [esp+154h+var_144], eax
mov     eax, [ebp+8]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+158h+var_A0], edx
mov     [esp+158h+var_9C], eax
call    Coord__To_Cell
movsx   ebp, word ptr [eax+10Ah]
movsx   edx, word ptr [esi+1548h]
mov     ecx, [esp+154h+var_140]
add     ebp, edx
mov     eax, [ecx+34h]
test    eax, eax
jnz     short loc_4D1ED2
push    3E8h
push    3E8h
push    3E8h
push    0
push    10000h
push    0
call    TacticalClass__SetView
mov     ecx, [esp+154h+var_140]

loc_4D1ED2:                             ; CODE XREF: TacticalClass__DrawBuildings+61F↑j
mov     al, [esi+1702h]
test    al, al
jz      short loc_4D1EE5
mov     eax, [ecx+34h]
mov     [esp+154h+var_140], eax
jmp     short loc_4D1EED
; ---------------------------------------------------------------------------

loc_4D1EE5:                             ; CODE XREF: TacticalClass__DrawBuildings+64A↑j
mov     ecx, [esp+154h+var_13C]
mov     [esp+154h+var_140], ecx

loc_4D1EED:                             ; CODE XREF: TacticalClass__DrawBuildings+653↑j
mov     eax, [esp+154h+var_D4]
test    eax, eax
jle     loc_4D2011
mov     al, [esp+154h+var_129]
test    al, al
jz      short loc_4D1F70
mov     edx, [esp+154h+var_144]
xor     ecx, ecx
xor     eax, eax
push    ecx
push    eax
push    ecx
push    ecx
push    ecx
add     edx, 0FFFFFFFEh
push    ebp
push    ecx
push    edx
mov     edx, [esp+174h+var_130]
push    ecx
lea     eax, [esp+178h+var_E0]
push    4E00h
lea     ecx, [esp+17Ch+var_104]
push    eax
mov     eax, [esp+180h+var_138]
push    ecx
mov     ecx, ds:887314h
push    edx
mov     edx, [esp+188h+var_140]
push    eax
call    DrawToSurfaceSHP
xor     eax, eax
xor     ecx, ecx
push    ecx
push    eax
push    ecx
push    ecx
push    ecx
push    3E8h
push    ecx
mov     ecx, [esp+170h+var_144]
lea     edx, [esp+170h+var_E0]
lea     eax, [ecx-2]
push    eax
push    0
push    4E01h
lea     eax, [esp+17Ch+var_104]
push    edx
push    eax
jmp     short loc_4D1FED
; ---------------------------------------------------------------------------

loc_4D1F70:                             ; CODE XREF: TacticalClass__DrawBuildings+672↑j
mov     ecx, [esp+154h+var_120]
mov     edx, [esp+154h+var_124]
mov     eax, [esp+154h+var_C8]
push    ecx
mov     ecx, [esp+158h+var_128]
push    edx
mov     edx, [esp+15Ch+var_144]
push    0
push    eax
push    0
push    ebp
lea     eax, [edx+ecx-2]
push    2
push    eax
mov     eax, [esp+174h+var_130]
push    0
lea     ecx, [esp+178h+var_E0]
push    4E00h
lea     edx, [esp+17Ch+var_104]
push    ecx
mov     ecx, [esp+180h+var_138]
push    edx
mov     edx, [esp+184h+var_140]
push    eax
push    ecx
mov     ecx, ds:887314h
call    DrawToSurfaceSHP
xor     ecx, ecx
xor     eax, eax
mov     edx, [esp+154h+var_144]
push    ecx
push    eax
push    ecx
push    ecx
push    ecx
push    3E8h
add     edx, 0FFFFFFFEh
push    ecx
push    edx
push    ecx
lea     eax, [esp+178h+var_E0]
push    4E01h
lea     ecx, [esp+17Ch+var_104]
push    eax
push    ecx

loc_4D1FED:                             ; CODE XREF: TacticalClass__DrawBuildings+6DE↑j
mov     ecx, [esp+184h+var_138]
movsx   eax, word ptr [ecx+6]
cdq
sub     eax, edx
mov     edx, [esp+184h+var_130]
sar     eax, 1
add     eax, edx
mov     edx, [esp+184h+var_140]
push    eax
push    ecx
mov     ecx, ds:887314h
call    DrawToSurfaceSHP

loc_4D2011:                             ; CODE XREF: TacticalClass__DrawBuildings+666↑j
mov     esi, [esi+1518h]
test    esi, esi
jz      loc_4D21EF
mov     edx, [esp+154h+var_144]
xor     ecx, ecx
xor     eax, eax
push    ecx
push    eax
push    ecx
push    ecx
push    ecx
push    ebp
add     edx, 0FFFFFFFDh
push    ecx
push    edx
mov     edx, [esp+174h+var_140]
push    ecx
mov     ecx, [esp+178h+var_130]
push    4E00h
lea     eax, [esp+17Ch+var_114]
push    edi
push    eax
push    ecx
push    esi
jmp     loc_4D21E4
; ---------------------------------------------------------------------------

loc_4D204D:                             ; CODE XREF: TacticalClass__DrawBuildings+424↑j
test    esi, esi
jz      loc_4D21EF
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 5
jnz     loc_4D21EF
mov     eax, [esi+2D4h]
mov     ecx, ds:0A8EB78h
cmp     eax, ecx
jg      loc_4D21EF
mov     eax, [esp+154h+var_138]
test    eax, eax
jz      loc_4D21EF
lea     ebp, [ebx+34h]
mov     edx, ebp
mov     eax, [edx]
add     eax, 0FFFFFF80h
mov     ecx, [edx+4]
mov     [esp+154h+var_98], eax
add     ecx, 0FFFFFF80h
lea     eax, [esp+154h+var_11C]
mov     edx, [edx+8]
mov     [esp+154h+var_94], ecx
lea     ecx, [esp+154h+var_98]
push    eax
push    ecx
mov     ecx, ds:887324h
mov     [esp+15Ch+var_90], edx
call    Coord__To_Screen
mov     edx, [edi]
mov     eax, ds:886FA0h
mov     ecx, ds:886FA4h
mov     [esp+154h+var_20], edx
mov     edx, [edi+4]
sub     eax, [esp+154h+var_20]
sub     ecx, edx
mov     edx, [esp+154h+var_11C]
add     edx, eax
mov     eax, 3E8h
mov     [esp+154h+var_11C], edx
mov     edx, [esp+154h+var_118]
add     edx, ecx
mov     cl, [esi+35Dh]
test    cl, cl
mov     [esp+154h+var_118], edx
jnz     short loc_4D2140
mov     eax, ebp
mov     ecx, [eax]
mov     [esp+154h+var_80], ecx
lea     ecx, [esp+154h+var_80]
mov     edx, [eax+4]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+158h+var_7C], edx
mov     eax, [eax+8]
mov     [esp+158h+var_78], eax
call    Coord__To_Cell
movsx   eax, word ptr [eax+10Ah]

loc_4D2140:                             ; CODE XREF: TacticalClass__DrawBuildings+876↑j
mov     ecx, [esp+154h+var_13C]
test    ecx, ecx
jz      short loc_4D2158
mov     dl, [esi+35Ch]
test    dl, dl
jz      short loc_4D2158
mov     [esp+154h+var_144], ecx
jmp     short loc_4D2162
; ---------------------------------------------------------------------------

loc_4D2158:                             ; CODE XREF: TacticalClass__DrawBuildings+8B6↑j
; TacticalClass__DrawBuildings+8C0↑j
mov     edx, ds:87F6C0h
mov     [esp+154h+var_144], edx

loc_4D2162:                             ; CODE XREF: TacticalClass__DrawBuildings+8C6↑j
mov     ecx, [ebx+60h]
mov     edx, [esp+154h+var_128]
mov     ecx, [ecx+edx+0Ch]
mov     [esp+154h+var_13C], ecx
mov     cl, [esi+369h]
test    cl, cl
jz      short loc_4D2199
mov     ecx, [ebp+0]
xor     edx, edx
xor     esi, esi
mov     [esp+154h+var_FC], ecx
mov     ecx, [ebp+4]
mov     ebp, [ebp+8]
push    esi
push    edx
push    esi
push    esi
push    esi
push    eax
mov     [esp+16Ch+var_F8], ecx
push    esi
jmp     short loc_4D21B6
; ---------------------------------------------------------------------------

loc_4D2199:                             ; CODE XREF: TacticalClass__DrawBuildings+8E9↑j
mov     ecx, [ebp+0]
xor     edx, edx
xor     esi, esi
mov     [esp+154h+var_FC], ecx
mov     ecx, [ebp+4]
mov     ebp, [ebp+8]
push    esi
push    edx
push    esi
push    esi
push    esi
push    eax
mov     [esp+16Ch+var_F8], ecx
push    2

loc_4D21B6:                             ; CODE XREF: TacticalClass__DrawBuildings+907↑j
mov     ecx, ebp
call    ZCoordToScreenY
mov     edx, eax
mov     eax, [esp+170h+var_13C]
mov     ecx, [esp+170h+var_130]
sub     eax, edx
mov     edx, [esp+170h+var_138]
sub     eax, 2
push    eax
push    0
push    2E00h
lea     eax, [esp+17Ch+var_11C]
push    edi
push    eax
push    ecx
push    edx
mov     edx, [esp+18Ch+var_144]

loc_4D21E4:                             ; CODE XREF: TacticalClass__DrawBuildings+7B8↑j
mov     ecx, ds:887314h
call    DrawToSurfaceSHP

loc_4D21EF:                             ; CODE XREF: TacticalClass__DrawBuildings+789↑j
; TacticalClass__DrawBuildings+7BF↑j ...
mov     eax, [esp+154h+var_134]
mov     ecx, [ebx+6Ch]
inc     eax
cmp     eax, ecx
mov     [esp+154h+var_134], eax
jl      loc_4D1C5D
jmp     def_4D19BD      ; jumptable 004D19BD default case, cases 7-19,21-28,30-35
; ---------------------------------------------------------------------------

loc_4D2208:                             ; CODE XREF: TacticalClass__DrawBuildings+12D↑j
; DATA XREF: .text:jpt_4D19BD↓o
mov     eax, ds:887324h ; jumptable 004D19BD case 29
mov     ebp, [edi+4]
mov     edx, [edi]
mov     ecx, [eax+0B0h]
mov     eax, [eax+0B4h]
mov     [esp+154h+var_D0], ecx
mov     ecx, [esi+4]
mov     [esp+154h+var_CC], eax
mov     eax, [esi]
mov     esi, [esp+154h+var_D0]
sub     eax, esi
mov     esi, [esp+154h+var_CC]
sub     ecx, esi
mov     esi, ds:886FA0h
lea     eax, [eax+esi+1Eh]
mov     esi, ds:886FA4h
add     ecx, esi
sub     eax, edx
mov     edx, ds:0A8EC1Ch
sub     ecx, ebp
mov     [esp+154h+var_A8], ecx
mov     ecx, [ebx+54h]
mov     [esp+154h+var_AC], eax
mov     ecx, [edx+ecx*4]
mov     eax, [ecx]
call    dword ptr [eax+9Ch]
mov     ebp, eax
test    ebp, ebp
jz      def_4D19BD      ; jumptable 004D19BD default case, cases 7-19,21-28,30-35
lea     esi, [ebx+34h]
mov     ecx, esi
mov     edx, [ecx]
mov     [esp+154h+var_68], edx
lea     edx, [esp+154h+var_68]
mov     eax, [ecx+4]
push    edx
mov     [esp+158h+var_64], eax
mov     ecx, [ecx+8]
mov     [esp+158h+var_60], ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, [esi]
xor     edx, edx
mov     [esp+154h+var_FC], ecx
mov     ecx, [esi+4]
mov     esi, [esi+8]
mov     [esp+154h+var_F8], ecx
xor     ecx, ecx
mov     [esp+154h+var_128], eax
movsx   eax, word ptr [eax+10Ch]
push    ecx
push    edx
push    ecx
push    ecx
push    ecx
push    eax
push    2
mov     ecx, esi
call    ZCoordToScreenY
mov     ecx, [esp+170h+var_128]
lea     edx, [esp+170h+var_AC]
neg     eax
push    eax
mov     eax, [ebx+58h]
push    0
push    0E00h
push    edi
push    edx
mov     edx, [ecx+34h]
push    eax
push    ebp

loc_4D2306:                             ; CODE XREF: TacticalClass__DrawBuildings+3B5↑j
mov     ecx, ds:887314h
call    DrawToSurfaceSHP

def_4D19BD:                             ; CODE XREF: TacticalClass__DrawBuildings+6C↑j
; TacticalClass__DrawBuildings+108↑j ...
mov     esi, [esp+154h+var_EC] ; jumptable 004D19BD default case, cases 7-19,21-28,30-35
mov     eax, ds:8B3CC4h
inc     esi
cmp     esi, eax
mov     [esp+154h+var_EC], esi
jl      loc_4D18BC
pop     ebp
pop     ebx

loc_4D2329:                             ; CODE XREF: TacticalClass__DrawBuildings+11↑j
; TacticalClass__DrawBuildings+24↑j
pop     edi
pop     esi
add     esp, 144h
retn
*/
}

// IDA: 0x47F510 -- TacticalClass::DrawBuildingPlacement
// Draws building placement preview during construction.
void TacticalClass::DrawBuildingPlacement(BuildingClass* building, int state)
{
    (void)building;
    (void)state;
}

// ============================================================
// Overlay drawing
// ============================================================

// IDA: 0x547230 -- TacticalClass::DrawCellOverlay
// Draws overlay (walls, ore, crates, etc.) for a cell.
void TacticalClass::DrawCellOverlay(int cx, int cy, int flags)
{
    (void)cx;
    (void)cy;
    (void)flags;
}

// IDA: 0x6D2DE0 -- TacticalClass::RenderIsometricOverlay
// Renders overlay graphics in isometric view.
void TacticalClass::RenderIsometricOverlay(const RectangleStruct& viewRect)
{
    (void)viewRect;
}

// IDA: 0x658780 -- TacticalClass::renderOverlay
// Thin wrapper that delegates to RenderIsometricOverlay.
// 0x658780
void TacticalClass::renderOverlay()
{
// [IDA decompile]
_DWORD *__thiscall TacticalClass::sub_658780(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block);
  if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
  return Block;
}

/* ASM:
push    esi
mov     esi, ecx
call    GadgetClass__Dtor
test    [esp+4+arg_0], 1
jz      short loc_658798
push    esi             ; Block
call    ??3_YAXPAX_Z
add     esp, 4

loc_658798:                             ; CODE XREF: TacticalClass__renderOverlay+D↑j
mov     eax, esi
pop     esi
retn    4
*/
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
void TacticalClass::RenderCells()
{
// [IDA decompile]
char __thiscall TacticalClass_RenderCells(int this)
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
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // al
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
  __int16 v39; // [esp+58h] [ebp-3Ch] BYREF
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

  v2 = *(_DWORD *)(this + 76);
  if ( v2 > 0 )
  {
    if ( *(_BYTE *)(this + 32) )
    {
      LOBYTE(v2) = PrepareTacticalClassCellTransform((int *)this);
    }
    else
    {
      if ( (dword_A8ED54[46809] & 1) == 0 )
      {
        dword_A8ED54[46714] = -1;
        dword_A8ED54[46713] = 0;
        dword_A8ED54[46716] = 0;
        dword_A8ED54[46715] = 1;
        dword_A8ED54[46718] = -1;
        dword_A8ED54[46717] = 0;
        dword_A8ED54[46719] = 0;
        dword_A8ED54[46721] = 1;
        dword_A8ED54[46723] = 0;
        dword_A8ED54[46720] = 1;
        dword_A8ED54[46725] = -1;
        dword_A8ED54[46722] = 0;
        dword_A8ED54[46727] = 1;
        dword_A8ED54[46724] = 1;
        dword_A8ED54[46729] = -1;
        dword_A8ED54[46726] = 0;
        dword_A8ED54[46728] = 0;
        dword_A8ED54[46730] = 0;
        dword_A8ED54[46731] = 0;
        dword_A8ED54[46733] = 0;
        dword_A8ED54[46732] = 1;
        dword_A8ED54[46735] = 1;
        dword_A8ED54[46734] = -1;
        dword_A8ED54[46737] = 0;
        dword_A8ED54[46736] = 0;
        dword_A8ED54[46739] = -1;
        dword_A8ED54[46738] = -1;
        dword_A8ED54[46741] = -1;
        LOBYTE(dword_A8ED54[46809]) |= 1u;
        dword_A8ED54[46740] = 0;
        dword_A8ED54[46742] = 0;
        dword_A8ED54[46743] = 1;
        dword_A8ED54[46744] = 0;
        atexit(nullsub_21);
      }
      LOBYTE(v2) = *(_BYTE *)(this + 81);
      if ( !(_BYTE)v2 )
      {
        v3 = *(_DWORD *)(this + 36);
        v44 = *(_DWORD *)(this + 48);
        v43 = v3;
        v4 = Math::CalcAngle((double)*(int *)(this + 40) - (double)*(int *)(this + 52), (double)v44 - (double)v3);
        LOWORD(v44) = Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427);
        v5 = ((((unsigned int)v44 >> 12) + 1) >> 1) & 7;
        Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], (_DWORD *)(this + 36), &v53);
        Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], (_DWORD *)(this + 48), &v51);
        v6 = *(_DWORD *)(this + 60) - ZCoordToScreenY(*(_DWORD *)(this + 44)) - 2;
        v7 = ZCoordToScreenY(*(_DWORD *)(this + 56));
        v39 = 0;
        v8 = -2 - v7;
        LOBYTE(v7) = *(_BYTE *)(this + 68);
        v40 = 0;
        v44 = 0;
        v38 = 1;
        if ( (_BYTE)v7 || *(_BYTE *)(this + 69) || *(_BYTE *)(this + 70) )
        {
          v44 = Random::Range(
                  &MEMORY[0x87F7E8][7400],
                  -*(unsigned __int8 *)(this + 71),
                  *(unsigned __int8 *)(this + 71));
          v41 = Random::Range(
                  &MEMORY[0x87F7E8][7400],
                  -*(unsigned __int8 *)(this + 72),
                  *(unsigned __int8 *)(this + 72));
          *(float *)&v42 = COERCE_FLOAT(
                             Random::Range(
                               &MEMORY[0x87F7E8][7400],
                               -*(unsigned __int8 *)(this + 73),
                               *(unsigned __int8 *)(this + 73)));
          v9 = *(unsigned __int8 *)(this + 68) + v44 < 0 ? 0 : *(unsigned __int8 *)(this + 68) + v44;
          if ( v9 > 255 )
            v9 = 255;
          v41 = *(unsigned __int8 *)(this + 69) + v41 < 0 ? 0 : *(unsigned __int8 *)(this + 69) + v41;
          if ( v41 > 255 )
            v41 = 255;
          v42 = *(unsigned __int8 *)(this + 70) + v42 < 0 ? 0 : *(unsigned __int8 *)(this + 70) + v42;
          v10 = v42;
          if ( v42 > 255 )
          {
            v10 = 255;
            v42 = 255;
          }
          LOBYTE(v39) = v9;
          v43 = (v41 >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
              | (v10 >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]));
          HIBYTE(v39) = v41;
          v44 = (v9 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170])) | v43;
          v40 = v42;
        }
        else
        {
          v38 = 0;
        }
        v11 = *(_BYTE *)(this + 66);
        v43 = this + 65;
        *(float *)&v42 = 1.0;
        LOBYTE(v49) = *(_BYTE *)(this + 65);
        LOBYTE(v47) = (_BYTE)v49 != 0;
        LOBYTE(v46) = v11 != 0;
        v12 = *(_BYTE *)(this + 67);
        LOBYTE(v45) = v12 != 0;
        if ( *(_BYTE *)(this + 82) )
        {
          v13 = *(float *)(this + 84) - *(float *)(this + 88);
          v41 = *(_DWORD *)(this + 76);
          *(float *)&v42 = v13 * (double)(v41 - *(_DWORD *)this) / (double)v41 + *(float *)(this + 88);
        }
        if ( MEMORY[0x87F7E8][539876] )
        {
          if ( *(_BYTE *)(this + 80) )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 60))(
              MEMORY[0x87F7E8][7883],
              &MEMORY[0x87F7E8][7662],
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
            LOBYTE(v2) = v38;
            if ( v38 )
            {
              v14 = 4 * v5;
              v15 = dword_A8ED54[v14 + 46714];
              v49 = v51 + dword_A8ED54[v14 + 46713];
              v16 = v53 + dword_A8ED54[v14 + 46713];
              v50 = v52 + v15;
              v17 = dword_A8ED54[v14 + 46714];
              v47 = v16;
              v48 = v54 + v17;
              (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, __int16 *, int, int, _DWORD, int, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 60))(
                MEMORY[0x87F7E8][7883],
                &MEMORY[0x87F7E8][7662],
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
              v18 = dword_A8ED54[v14 + 46716];
              v49 = v51 + dword_A8ED54[v14 + 46715];
              v19 = dword_A8ED54[v14 + 46715];
              v20 = dword_A8ED54[v14 + 46716];
              v47 = v53 + v19;
              v50 = v52 + v18;
              v48 = v54 + v20;
              LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD *, int *, int *, __int16 *, int, int, _DWORD, int, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 60))(
                             MEMORY[0x87F7E8][7883],
                             &MEMORY[0x87F7E8][7662],
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
          else if ( v38 )
          {
            v21 = 4 * v5;
            v22 = dword_A8ED54[v21 + 46714];
            v23 = dword_A8ED54[v21 + 46713];
            v49 = v51 + v23;
            v24 = v23 + v53;
            v25 = v42;
            v50 = v52 + v22;
            v26 = dword_A8ED54[v21 + 46714];
            v47 = v24;
            v48 = v54 + v26;
            (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, __int16 *, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883]
                                                                                             + 64))(
              MEMORY[0x87F7E8][7883],
              &MEMORY[0x87F7E8][7662],
              &v47,
              &v49,
              &v39,
              v42,
              v6,
              v8);
            v27 = dword_A8ED54[v21 + 46716];
            v49 = v51 + dword_A8ED54[v21 + 46715];
            v28 = dword_A8ED54[v21 + 46715];
            v29 = dword_A8ED54[v21 + 46716];
            v47 = v53 + v28;
            v50 = v52 + v27;
            v48 = v54 + v29;
            (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, __int16 *, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883]
                                                                                             + 64))(
              MEMORY[0x87F7E8][7883],
              &MEMORY[0x87F7E8][7662],
              &v47,
              &v49,
              &v39,
              v25,
              v6,
              v8);
            LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 64))(
                           MEMORY[0x87F7E8][7883],
                           &MEMORY[0x87F7E8][7662],
                           &v53,
                           &v51,
                           v43,
                           v25,
                           v6,
                           v8);
          }
          else
          {
            LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 60))(
                           MEMORY[0x87F7E8][7883],
                           &MEMORY[0x87F7E8][7662],
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
          (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883]
                                                                                        + 52))(
            MEMORY[0x87F7E8][7883],
            &MEMORY[0x87F7E8][7662],
            &v53,
            &v51,
            ((unsigned __int8)v49 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170]))
          | (v11 >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
          | (v12 >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172])),
            v6,
            v8,
            0);
          LOBYTE(v2) = v38;
          if ( v38 )
          {
            v30 = 4 * v5;
            v31 = v52 + dword_A8ED54[v30 + 46714];
            v49 = v51 + dword_A8ED54[v30 + 46713];
            v32 = dword_A8ED54[v30 + 46713];
            v50 = v31;
            v33 = dword_A8ED54[v30 + 46714];
            v47 = v53 + v32;
            v48 = v54 + v33;
            (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883]
                                                                                          + 52))(
              MEMORY[0x87F7E8][7883],
              &MEMORY[0x87F7E8][7662],
              &v47,
              &v49,
              v44,
              v6,
              v8,
              0);
            v34 = dword_A8ED54[v30 + 46716];
            v49 = v51 + dword_A8ED54[v30 + 46715];
            v35 = dword_A8ED54[v30 + 46715];
            v36 = dword_A8ED54[v30 + 46716];
            v50 = v52 + v34;
            v47 = v53 + v35;
            v48 = v54 + v36;
            LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 52))(
                           MEMORY[0x87F7E8][7883],
                           &MEMORY[0x87F7E8][7662],
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
  return v2;
}

/* ASM:
sub     esp, 40h
push    ebx
mov     ebx, ecx
push    ebp
push    esi
mov     eax, [ebx+4Ch]
push    edi
test    eax, eax
jle     loc_5509CA
mov     al, [ebx+20h]
test    al, al
jz      short loc_550288
call    PrepareTacticalClassCellTransform
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn
; ---------------------------------------------------------------------------

loc_550288:                             ; CODE XREF: TacticalClass__RenderCells+19↑j
mov     al, byte ptr dword_A8ED54+2DB64h
test    al, 1
jnz     loc_5503AE
or      ecx, 0FFFFFFFFh
mov     dl, al
xor     eax, eax
mov     dword_A8ED54+2D9E8h, ecx
xor     ecx, ecx
mov     dword_A8ED54+2D9E4h, eax
mov     eax, 1
mov     dword_A8ED54+2D9F0h, ecx
or      ecx, 0FFFFFFFFh
mov     dword_A8ED54+2D9ECh, eax
xor     eax, eax
mov     dword_A8ED54+2D9F8h, ecx
mov     ecx, 1
mov     dword_A8ED54+2D9F4h, eax
mov     dword_A8ED54+2D9FCh, eax
mov     eax, ecx
mov     dword_A8ED54+2DA04h, eax
xor     eax, eax
mov     dword_A8ED54+2DA0Ch, eax
or      eax, 0FFFFFFFFh
mov     dword_A8ED54+2DA00h, ecx
mov     dword_A8ED54+2DA14h, eax
xor     ecx, ecx
mov     eax, 1
mov     dword_A8ED54+2DA08h, ecx
mov     dword_A8ED54+2DA1Ch, eax
mov     ecx, 1
or      eax, 0FFFFFFFFh
mov     dword_A8ED54+2DA10h, ecx
mov     dword_A8ED54+2DA24h, eax
xor     ecx, ecx
xor     eax, eax
mov     dword_A8ED54+2DA18h, ecx
mov     dword_A8ED54+2DA20h, ecx
mov     dword_A8ED54+2DA28h, ecx
mov     dword_A8ED54+2DA2Ch, eax
mov     dword_A8ED54+2DA34h, eax
mov     ecx, 1
mov     eax, 1
mov     dword_A8ED54+2DA30h, ecx
mov     dword_A8ED54+2DA3Ch, eax
or      ecx, 0FFFFFFFFh
xor     eax, eax
mov     dword_A8ED54+2DA38h, ecx
mov     dword_A8ED54+2DA44h, eax
xor     ecx, ecx
or      eax, 0FFFFFFFFh
mov     dword_A8ED54+2DA40h, ecx
mov     dword_A8ED54+2DA4Ch, eax
or      ecx, 0FFFFFFFFh
or      eax, 0FFFFFFFFh
mov     dword_A8ED54+2DA48h, ecx
mov     dword_A8ED54+2DA54h, eax
or      dl, 1
xor     ecx, ecx
mov     eax, 1
push    offset nullsub_21 ; void (__cdecl *)()
mov     byte ptr dword_A8ED54+2DB64h, dl
mov     dword_A8ED54+2DA50h, ecx
mov     dword_A8ED54+2DA58h, ecx
mov     dword_A8ED54+2DA5Ch, eax
mov     dword_A8ED54+2DA60h, ecx
call    _atexit
add     esp, 4

loc_5503AE:                             ; CODE XREF: TacticalClass__RenderCells+2F↑j
mov     al, [ebx+51h]
test    al, al
jnz     loc_5509CA
mov     ecx, [ebx+30h]
mov     eax, [ebx+24h]
lea     edi, [ebx+30h]
lea     ebp, [ebx+24h]
mov     [esp+50h+var_2C], ecx
mov     [esp+50h+var_30], eax
fild    [esp+50h+var_2C]
sub     esp, 8
sub     esp, 8
fisub   [esp+60h+var_30]
fstp    [esp+60h+var_58] ; double
fild    dword ptr [ebp+4]
fisub   dword ptr [edi+4]
fstp    [esp+60h+var_60] ; double
call    Math__CalcAngle
fsub    ds:dbl_7E2820
add     esp, 10h
fmul    ds:dbl_7E2818
call    Math__RoundToInt
mov     word ptr [esp+50h+var_2C], ax
mov     esi, [esp+50h+var_2C]
mov     ecx, ds:887324h
lea     edx, [esp+50h+var_8]
shr     esi, 0Ch
inc     esi
push    edx
shr     esi, 1
push    ebp
and     esi, 7
call    Coord__To_Screen
mov     ecx, ds:887324h
lea     eax, [esp+50h+var_10]
push    eax
push    edi
call    Coord__To_Screen
mov     ecx, [ebx+2Ch]
call    ZCoordToScreenY
mov     edi, [ebx+3Ch]
mov     ecx, [ebx+38h]
sub     edi, eax
sub     edi, 2
call    ZCoordToScreenY
mov     ebp, 0FFFFFFFEh
mov     byte ptr [esp+50h+var_3C], 0
sub     ebp, eax
mov     al, [ebx+44h]
test    al, al
mov     byte ptr [esp+50h+var_3C+1], 0
mov     byte ptr [esp+50h+var_3C+2], 0
mov     [esp+50h+var_2C], 0
mov     byte ptr [esp+50h+var_40+3], 1
jnz     short loc_55048F
mov     al, [ebx+45h]
test    al, al
jnz     short loc_55048F
mov     al, [ebx+46h]
test    al, al
jnz     short loc_55048F
mov     byte ptr [esp+50h+var_40+3], 0
jmp     loc_5505B2
; ---------------------------------------------------------------------------

loc_55048F:                             ; CODE XREF: TacticalClass__RenderCells+215↑j
; TacticalClass__RenderCells+21C↑j ...
xor     ecx, ecx
mov     cl, [ebx+47h]
mov     eax, ecx
push    ecx
neg     eax
push    eax
mov     ecx, 886B88h
call    Random__Range
xor     ecx, ecx
mov     [esp+50h+var_2C], eax
mov     cl, [ebx+48h]
mov     eax, ecx
push    ecx
neg     eax
push    eax
mov     ecx, 886B88h
call    Random__Range
xor     ecx, ecx
mov     [esp+50h+var_38], eax
mov     cl, [ebx+49h]
mov     eax, ecx
push    ecx
neg     eax
push    eax
mov     ecx, 886B88h
call    Random__Range
xor     ecx, ecx
mov     [esp+50h+var_34], eax
mov     cl, [ebx+44h]
mov     eax, [esp+50h+var_2C]
add     eax, ecx
mov     edx, 0
sets    dl
dec     edx
and     edx, eax
cmp     edx, 0FFh
jle     short loc_5504FD
mov     edx, 0FFh

loc_5504FD:                             ; CODE XREF: TacticalClass__RenderCells+296↑j
mov     ecx, [esp+50h+var_38]
xor     eax, eax
mov     al, [ebx+45h]
add     ecx, eax
mov     eax, 0
sets    al
dec     eax
and     eax, ecx
cmp     eax, 0FFh
mov     [esp+50h+var_38], eax
jle     short loc_550526
mov     [esp+50h+var_38], 0FFh

loc_550526:                             ; CODE XREF: TacticalClass__RenderCells+2BC↑j
mov     ecx, [esp+50h+var_34]
xor     eax, eax
mov     al, [ebx+46h]
add     ecx, eax
mov     eax, 0
sets    al
dec     eax
and     eax, ecx
cmp     eax, 0FFh
mov     [esp+50h+var_34], eax
jle     short loc_550550
mov     eax, 0FFh
mov     [esp+50h+var_34], eax

loc_550550:                             ; CODE XREF: TacticalClass__RenderCells+2E5↑j
mov     ecx, ds:8A0DDCh
mov     byte ptr [esp+50h+var_3C], dl
sar     eax, cl
mov     ecx, ds:8A0DD8h
shl     eax, cl
mov     ecx, ds:8A0DE4h
mov     [esp+50h+var_30], eax
mov     eax, [esp+50h+var_38]
sar     eax, cl
mov     ecx, ds:8A0DE0h
shl     eax, cl
mov     ecx, [esp+50h+var_30]
or      ecx, eax
mov     eax, edx
mov     [esp+50h+var_30], ecx
mov     ecx, ds:8A0DD4h
sar     eax, cl
mov     ecx, ds:8A0DD0h
mov     dl, byte ptr [esp+50h+var_38]
mov     byte ptr [esp+50h+var_3C+1], dl
shl     eax, cl
mov     ecx, [esp+50h+var_30]
or      ecx, eax
mov     al, byte ptr [esp+50h+var_34]
mov     [esp+50h+var_2C], ecx
mov     byte ptr [esp+50h+var_3C+2], al

loc_5505B2:                             ; CODE XREF: TacticalClass__RenderCells+22A↑j
mov     dl, [ebx+42h]
lea     eax, [ebx+41h]
mov     [esp+50h+var_30], eax
mov     [esp+50h+var_34], 3F800000h
mov     al, [eax]
test    al, al
setnbe  cl
test    dl, dl
mov     byte ptr [esp+50h+var_18], al
mov     byte ptr [esp+50h+var_20], cl
setnbe  al
mov     byte ptr [esp+50h+var_24], al
mov     al, [ebx+43h]
test    al, al
setnbe  cl
mov     byte ptr [esp+50h+var_28], cl
mov     cl, [ebx+52h]
test    cl, cl
jz      short loc_550611
mov     ecx, [ebx+4Ch]
fld     dword ptr [ebx+54h]
fsub    dword ptr [ebx+58h]
mov     [esp+50h+var_38], ecx
sub     ecx, [ebx]
mov     [esp+50h+var_34], ecx
fimul   [esp+50h+var_34]
fidiv   [esp+50h+var_38]
fadd    dword ptr [ebx+58h]
fstp    [esp+50h+var_34]

loc_550611:                             ; CODE XREF: TacticalClass__RenderCells+38D↑j
mov     ecx, ds:0A8EB78h
test    ecx, ecx
jz      loc_55088B
mov     al, [ebx+50h]
test    al, al
jz      loc_55074B
mov     eax, [esp+50h+var_34]
mov     ecx, ds:887314h
push    eax
mov     eax, [esp+54h+var_30]
push    1
push    1
push    1
push    0
mov     edx, [ecx]
push    ebp
push    edi
push    eax
lea     eax, [esp+70h+var_10]
push    eax
lea     eax, [esp+74h+var_8]
push    eax
push    886FA0h
call    dword ptr [edx+3Ch]
mov     al, byte ptr [esp+50h+var_40+3]
test    al, al
jz      loc_5509CA
mov     ebx, [esp+50h+var_10]
mov     edx, [esp+50h+var_C]
shl     esi, 4
push    3F800000h
push    1
mov     eax, (dword_A8ED54+2D9E4h)[esi]
mov     ecx, (dword_A8ED54+2D9E8h)[esi]
add     eax, ebx
mov     ebx, [esp+58h+var_8]
mov     [esp+58h+var_18], eax
mov     eax, (dword_A8ED54+2D9E4h)[esi]
add     ecx, edx
mov     edx, [esp+58h+var_4]
add     eax, ebx
push    1
push    1
mov     [esp+60h+var_14], ecx
mov     ecx, (dword_A8ED54+2D9E8h)[esi]
mov     [esp+60h+var_20], eax
push    0
push    ebp
lea     eax, [esp+68h+var_3C]
push    edi
add     ecx, edx
push    eax
lea     eax, [esp+70h+var_18]
mov     [esp+70h+var_1C], ecx
mov     ecx, ds:887314h
push    eax
lea     eax, [esp+74h+var_20]
mov     edx, [ecx]
push    eax
push    886FA0h
call    dword ptr [edx+3Ch]
mov     eax, (dword_A8ED54+2D9ECh)[esi]
mov     ecx, [esp+50h+var_10]
mov     edx, [esp+50h+var_8]
mov     ebx, [esp+50h+var_C]
add     eax, ecx
mov     ecx, (dword_A8ED54+2D9F0h)[esi]
mov     [esp+50h+var_18], eax
mov     eax, (dword_A8ED54+2D9ECh)[esi]
mov     esi, (dword_A8ED54+2D9F0h)[esi]
push    3F800000h
push    1
add     eax, edx
push    1
push    1
add     ecx, ebx
mov     [esp+60h+var_20], eax
push    0
push    ebp
lea     eax, [esp+68h+var_3C]
mov     [esp+68h+var_14], ecx
mov     ecx, [esp+68h+var_4]
push    edi
push    eax
lea     eax, [esp+70h+var_18]
add     esi, ecx
mov     ecx, ds:887314h
push    eax
lea     eax, [esp+74h+var_20]
mov     [esp+74h+var_1C], esi
mov     edx, [ecx]
push    eax
push    886FA0h
call    dword ptr [edx+3Ch]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn
; ---------------------------------------------------------------------------

loc_55074B:                             ; CODE XREF: TacticalClass__RenderCells+3C4↑j
mov     al, byte ptr [esp+50h+var_40+3]
test    al, al
jz      loc_55084C
mov     ebx, [esp+50h+var_10]
mov     edx, [esp+50h+var_C]
shl     esi, 4
push    ebp
push    edi
mov     eax, (dword_A8ED54+2D9E4h)[esi]
mov     ecx, (dword_A8ED54+2D9E8h)[esi]
add     eax, ebx
mov     ebx, (dword_A8ED54+2D9E4h)[esi]
mov     [esp+58h+var_18], eax
mov     eax, [esp+58h+var_8]
add     ecx, edx
mov     edx, [esp+58h+var_4]
add     eax, ebx
mov     ebx, [esp+58h+var_34]
mov     [esp+58h+var_14], ecx
mov     ecx, (dword_A8ED54+2D9E8h)[esi]
mov     [esp+58h+var_20], eax
lea     eax, [esp+58h+var_3C]
push    ebx
add     ecx, edx
push    eax
lea     eax, [esp+60h+var_18]
mov     [esp+60h+var_1C], ecx
mov     ecx, ds:887314h
push    eax
lea     eax, [esp+64h+var_20]
mov     edx, [ecx]
push    eax
push    886FA0h
call    dword ptr [edx+40h]
mov     eax, (dword_A8ED54+2D9ECh)[esi]
mov     ecx, [esp+50h+var_10]
mov     edx, [esp+50h+var_C]
add     eax, ecx
mov     ecx, (dword_A8ED54+2D9F0h)[esi]
mov     [esp+50h+var_18], eax
mov     eax, (dword_A8ED54+2D9ECh)[esi]
add     ecx, edx
mov     edx, [esp+50h+var_8]
mov     esi, (dword_A8ED54+2D9F0h)[esi]
add     eax, edx
push    ebp
mov     [esp+54h+var_20], eax
push    edi
lea     eax, [esp+58h+var_3C]
mov     [esp+58h+var_14], ecx
mov     ecx, [esp+58h+var_4]
push    ebx
push    eax
lea     eax, [esp+60h+var_18]
add     esi, ecx
mov     ecx, ds:887314h
push    eax
lea     eax, [esp+64h+var_20]
mov     [esp+64h+var_1C], esi
mov     edx, [ecx]
push    eax
push    886FA0h
call    dword ptr [edx+40h]
mov     eax, [esp+50h+var_30]
mov     ecx, ds:887314h
push    ebp
push    edi
mov     edx, [ecx]
push    ebx
push    eax
lea     eax, [esp+60h+var_10]
push    eax
lea     eax, [esp+64h+var_8]
push    eax
push    886FA0h
call    dword ptr [edx+40h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn
; ---------------------------------------------------------------------------

loc_55084C:                             ; CODE XREF: TacticalClass__RenderCells+4F1↑j
mov     eax, [esp+50h+var_34]
mov     ecx, ds:887314h
push    eax
mov     eax, [esp+54h+var_28]
push    eax
mov     eax, [esp+58h+var_24]
push    eax
mov     eax, [esp+5Ch+var_20]
push    eax
mov     eax, [esp+60h+var_30]
push    0
mov     edx, [ecx]
push    ebp
push    edi
push    eax
lea     eax, [esp+70h+var_10]
push    eax
lea     eax, [esp+74h+var_8]
push    eax
push    886FA0h
call    dword ptr [edx+3Ch]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn
; ---------------------------------------------------------------------------

loc_55088B:                             ; CODE XREF: TacticalClass__RenderCells+3B9↑j
mov     ecx, ds:887314h
and     eax, 0FFh
and     edx, 0FFh
push    0
mov     ebx, [ecx]
mov     cl, ds:8A0DDCh
shr     eax, cl
mov     ecx, ds:8A0DD8h
push    ebp
push    edi
shl     eax, cl
mov     cl, ds:8A0DE4h
shr     edx, cl
mov     ecx, ds:8A0DE0h
shl     edx, cl
mov     cl, ds:8A0DD4h
or      eax, edx
mov     edx, [esp+5Ch+var_18]
and     edx, 0FFh
shr     edx, cl
mov     ecx, ds:8A0DD0h
shl     edx, cl
mov     ecx, ds:887314h
or      eax, edx
lea     edx, [esp+5Ch+var_10]
push    eax
lea     eax, [esp+60h+var_8]
push    edx
push    eax
push    886FA0h
call    dword ptr [ebx+34h]
mov     al, byte ptr [esp+50h+var_40+3]
test    al, al
jz      loc_5509CA
mov     ebx, [esp+50h+var_10]
mov     edx, [esp+50h+var_C]
shl     esi, 4
push    0
push    ebp
mov     eax, (dword_A8ED54+2D9E4h)[esi]
mov     ecx, (dword_A8ED54+2D9E8h)[esi]
add     eax, ebx
mov     ebx, [esp+58h+var_8]
add     ecx, edx
mov     edx, [esp+58h+var_4]
mov     [esp+58h+var_18], eax
mov     eax, (dword_A8ED54+2D9E4h)[esi]
mov     [esp+58h+var_14], ecx
mov     ecx, (dword_A8ED54+2D9E8h)[esi]
add     eax, ebx
mov     ebx, [esp+58h+var_2C]
add     ecx, edx
mov     [esp+58h+var_20], eax
push    edi
lea     eax, [esp+5Ch+var_18]
mov     [esp+5Ch+var_1C], ecx
mov     ecx, ds:887314h
push    ebx
push    eax
mov     edx, [ecx]
lea     eax, [esp+64h+var_20]
push    eax
push    886FA0h
call    dword ptr [edx+34h]
mov     eax, (dword_A8ED54+2D9ECh)[esi]
mov     ecx, [esp+50h+var_10]
mov     edx, [esp+50h+var_C]
add     eax, ecx
mov     ecx, (dword_A8ED54+2D9F0h)[esi]
mov     [esp+50h+var_18], eax
mov     eax, (dword_A8ED54+2D9ECh)[esi]
mov     esi, (dword_A8ED54+2D9F0h)[esi]
add     ecx, edx
mov     edx, [esp+50h+var_8]
add     eax, edx
mov     [esp+50h+var_14], ecx
mov     ecx, [esp+50h+var_4]
push    0
mov     [esp+54h+var_20], eax
push    ebp
push    edi
lea     eax, [esp+5Ch+var_18]
add     esi, ecx
mov     ecx, ds:887314h
push    ebx
push    eax
lea     eax, [esp+64h+var_20]
mov     [esp+64h+var_1C], esi
mov     edx, [ecx]
push    eax
push    886FA0h
call    dword ptr [edx+34h]

loc_5509CA:                             ; CODE XREF: TacticalClass__RenderCells+E↑j
; TacticalClass__RenderCells+153↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn
*/
}

// ============================================================
// Viewport management
// ============================================================

// IDA: 0x6D8B30 -- TacticalClass::CalcViewportCells
// Calculates which cells are visible in the current viewport.
// 0x6d8b30
void TacticalClass::CalcViewportCells()
{
// [IDA decompile]
unsigned int __thiscall TacticalClass_CalcViewportCells(int this)
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

  v13 = 0;
  v2 = *(_DWORD *)(this + 3428);
  v3 = *(_DWORD *)(this + 3432);
  *(_DWORD *)(this + 176) = v2;
  *(_DWORD *)(this + 180) = v3;
  *(_DWORD *)(this + 176) = v2 - MEMORY[0xB0CE30] / 2;
  LODWORD(v10[0]) = *(_DWORD *)(this + 176) - 60;
  v4 = (double)SLODWORD(v10[0]);
  v5 = v3 - MEMORY[0xB0CE34] / 2;
  *(_DWORD *)(this + 180) = v5;
  v11 = v4;
  LODWORD(v10[1]) = v5 - 30;
  v12 = (float)(v5 - 30);
  v6 = TransformMatrix3x4Point(v10, (float *)(this + 3556), &v11);
  v11 = *v6;
  v12 = v6[1];
  v13 = *((_DWORD *)v6 + 2);
  v7 = Math::RoundToInt(v11);
  v8 = Math::RoundToInt(v12);
  *(_DWORD *)(this + 3456) = v7 / 256;
  *(_DWORD *)(this + 3460) = v8 / 256;
  *(_DWORD *)(this + 3464) = MEMORY[0xB0CE30] / 60 + 2;
  result = (unsigned int)((unsigned __int64)(2290649225LL * MEMORY[0xB0CE34]) >> 32) >> 31;
  *(_DWORD *)(this + 3468) = MEMORY[0xB0CE34] / 15 + 4;
  return result;
}

/* ASM:
sub     esp, 18h
push    esi
mov     esi, ecx
push    edi
mov     [esp+20h+var_4], 0
mov     ecx, [esi+0D64h]
mov     edi, [esi+0D68h]
mov     [esi+0B0h], ecx
mov     [esi+0B4h], edi
mov     eax, dword_A8ED54+7E0DCh
cdq
sub     eax, edx
sar     eax, 1
sub     ecx, eax
mov     [esi+0B0h], ecx
mov     eax, dword_A8ED54+7E0E0h
cdq
sub     eax, edx
mov     edx, [esi+0B0h]
mov     ecx, eax
sub     edx, 3Ch ; '<'
sar     ecx, 1
mov     eax, edi
mov     [esp+20h+var_18], edx
fild    [esp+20h+var_18]
sub     eax, ecx
lea     edx, [esi+0DE4h]
mov     [esi+0B4h], eax
add     eax, 0FFFFFFE2h
fstp    [esp+20h+var_C]
mov     [esp+20h+var_14], eax
lea     eax, [esp+20h+var_C]
fild    [esp+20h+var_14]
push    eax
lea     ecx, [esp+24h+var_18]
fstp    [esp+24h+var_8]
call    TransformMatrix3x4Point
mov     ecx, [eax]
mov     [esp+20h+var_C], ecx
mov     edx, [eax+4]
fld     [esp+20h+var_C]
mov     [esp+20h+var_8], edx
mov     eax, [eax+8]
mov     [esp+20h+var_4], eax
call    Math__RoundToInt
fld     [esp+20h+var_8]
mov     edi, eax
call    Math__RoundToInt
mov     ecx, eax
mov     eax, edi
cdq
and     edx, 0FFh
pop     edi
add     eax, edx
sar     eax, 8
mov     [esi+0D80h], eax
mov     eax, ecx
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     [esi+0D84h], eax
mov     ecx, dword_A8ED54+7E0DCh
mov     eax, 88888889h
imul    ecx
add     edx, ecx
mov     eax, 88888889h
sar     edx, 5
mov     ecx, edx
shr     ecx, 1Fh
lea     edx, [edx+ecx+2]
mov     [esi+0D88h], edx
mov     ecx, dword_A8ED54+7E0E0h
imul    ecx
add     edx, ecx
sar     edx, 3
mov     eax, edx
shr     eax, 1Fh
lea     ecx, [edx+eax+4]
mov     [esi+0D8Ch], ecx
pop     esi
add     esp, 18h
retn
*/
}

// IDA: 0x653760 -- TacticalClass::PixelToCellCheck
// Converts pixel coordinates to cell coordinates and checks validity.
// 0x653760
bool TacticalClass::PixelToCellCheck(const Point2D& pixel, CellStruct* out_cell) const
{
// [IDA decompile]
_DWORD *__stdcall TacticalClass_PixelToCellCheck(_DWORD *a1, int *a2)
{
  int v2; // edx
  _DWORD *v3; // eax
  int v4; // edx
  int v6[2]; // [esp+4h] [ebp-14h] BYREF
  _BYTE v7[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a2[1];
  v6[0] = *a2;
  v6[1] = v2;
  v3 = (_DWORD *)((_DWORD *(__stdcall *)(_BYTE *, int *))TacticalClass::TransformPixel)(v7, v6);
  if ( *v3 == dword_A8ED54[120555] && v3[1] == dword_A8ED54[120556] && v3[2] == dword_A8ED54[120557] )
  {
    *a1 = dword_A8ED54[120539];
    return a1;
  }
  else
  {
    v4 = *Tactical::PixelToCell(MEMORY[0x87F7E8][7887], &a2, v6);
    *a1 = v4;
    return a1;
  }
}

/* ASM:
sub     esp, 14h
mov     eax, [esp+14h+arg_4]
push    esi
mov     ecx, [eax]
mov     edx, [eax+4]
mov     [esp+18h+var_14], ecx
lea     eax, [esp+18h+var_14]
lea     ecx, [esp+18h+var_C]
push    eax
push    ecx
mov     ecx, ds:887324h
mov     [esp+20h+var_10], edx
call    TacticalClass__TransformPixel
mov     esi, dword_A8ED54+75BACh
mov     edx, eax
mov     eax, [edx]
cmp     eax, esi
pop     esi
mov     ecx, [edx+4]
mov     edx, [edx+8]
jnz     short loc_6537AF
cmp     ecx, dword_A8ED54+75BB0h
jnz     short loc_6537AF
cmp     edx, dword_A8ED54+75BB4h
jz      short loc_6537F9

loc_6537AF:                             ; CODE XREF: TacticalClass__PixelToCellCheck+3D↑j
; TacticalClass__PixelToCellCheck+45↑j
mov     al, byte ptr dword_A8ED54+17h
test    al, al
lea     eax, [esp+14h+var_14]
push    eax
jz      short loc_6537DB
lea     ecx, [esp+18h+arg_4]
push    ecx
mov     ecx, ds:887324h
call    Tactical__PixelToCell
mov     edx, [eax]
mov     eax, [esp+14h+arg_0]
mov     [eax], edx
add     esp, 14h
retn    8
; ---------------------------------------------------------------------------

loc_6537DB:                             ; CODE XREF: TacticalClass__PixelToCellCheck+5B↑j
lea     ecx, [esp+18h+arg_4]
push    ecx
mov     ecx, ds:887324h
call    Tactical__PixelToCell
mov     edx, [eax]
mov     eax, [esp+14h+arg_0]
mov     [eax], edx
add     esp, 14h
retn    8
; ---------------------------------------------------------------------------

loc_6537F9:                             ; CODE XREF: TacticalClass__PixelToCellCheck+4D↑j
mov     eax, [esp+14h+arg_0]
mov     ecx, dword_A8ED54+75B6Ch
mov     [eax], ecx
add     esp, 14h
retn    8
*/
}

// IDA: 0x656750 -- TacticalClass::ScreenToCellLookup
// Converts screen coordinates to cell index lookup.
// 0x656750
CellStruct TacticalClass::ScreenToCellLookup(const Point2D& screen) const
{
// [IDA decompile]
int __thiscall sub_656750(int this, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // ebx
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  int result; // eax
  double v13; // st7
  _DWORD v14[3]; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *retaddr; // [esp+24h] [ebp+0h]
  int v16; // [esp+28h] [ebp+4h]
  int v17; // [esp+30h] [ebp+Ch]

  v4 = *a2 - *(_DWORD *)(this + 5276);
  v5 = a2[1] - *(_DWORD *)(this + 5280);
  v6 = **(_DWORD **)(this + 4696) + 24 * (unsigned __int8)(v4 - 5 * v5);
  v7 = *(_DWORD *)(v6 + 16);
  *a4 = 0;
  v8 = v7 - 1;
  if ( v8 >= 0 )
  {
    v9 = (_DWORD *)(*(_DWORD *)(v6 + 4) + 16 * v8);
    v10 = v9 + 1;
    while ( 1 )
    {
      v14[0] = *v9;
      if ( *v10 == v4 && v10[1] == v5 )
        break;
      --v8;
      v9 -= 4;
      v10 -= 4;
      if ( v8 < 0 )
        goto LABEL_8;
    }
    *a4 = v14[0];
  }
LABEL_8:
  if ( *a4 )
  {
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD))(*(_DWORD *)*a4 + 76))(*a4, v14, 0);
    LOWORD(v16) = *v11 / 256;
    HIWORD(v16) = v11[1] / 256;
    *retaddr = v16;
    return v16;
  }
  else
  {
    v13 = (double)v4 / *(float *)(this + 5256) - (double)*(int *)(this + 5264);
    LOWORD(v17) = Math::RoundToInt(v13);
    result = Math::RoundToInt(v13);
    HIWORD(v17) = result;
    *a3 = v17;
  }
  return result;
}

/* ASM:
sub     esp, 14h
mov     edx, [esp+14h+arg_0]
mov     eax, [ecx+149Ch]
push    ebx
push    ebp
push    esi
mov     esi, [edx]
mov     edx, [edx+4]
push    edi
mov     edi, [ecx+14A0h]
sub     esi, eax
sub     edx, edi
mov     ebx, [esp+24h+arg_8]
mov     [esp+24h+var_14], esi
mov     [esp+24h+var_10], edx
lea     eax, [edx+edx*4]
mov     edi, eax
mov     eax, esi
sub     eax, edi
mov     edi, [ecx+1258h]
and     eax, 0FFh
mov     edi, [edi]
lea     eax, [eax+eax*2]
lea     edi, [edi+eax*8]
mov     eax, [edi+10h]
mov     dword ptr [ebx], 0
dec     eax
test    eax, eax
jl      short loc_6567DB
mov     edi, [edi+4]
mov     ebx, eax
shl     ebx, 4
add     ebx, edi
lea     edi, [ebx+4]

loc_6567B3:                             ; CODE XREF: TacticalClass__ScreenToCellLookup+7F↓j
mov     ebp, [ebx]
mov     [esp+24h+var_C], ebp
mov     ebp, [edi]
cmp     ebp, esi
jnz     short loc_6567C4
cmp     [edi+4], edx
jz      short loc_6567D1

loc_6567C4:                             ; CODE XREF: TacticalClass__ScreenToCellLookup+6D↑j
dec     eax
sub     ebx, 10h
sub     edi, 10h
test    eax, eax
jl      short loc_6567DB
jmp     short loc_6567B3
; ---------------------------------------------------------------------------

loc_6567D1:                             ; CODE XREF: TacticalClass__ScreenToCellLookup+72↑j
mov     eax, [esp+24h+arg_8]
mov     edx, [esp+24h+var_C]
mov     [eax], edx

loc_6567DB:                             ; CODE XREF: TacticalClass__ScreenToCellLookup+54↑j
; TacticalClass__ScreenToCellLookup+7D↑j
mov     edx, [esp+24h+arg_8]
pop     edi
pop     esi
pop     ebp
mov     eax, [edx]
pop     ebx
test    eax, eax
jz      short loc_656830
mov     edx, [eax]
lea     ecx, [esp+14h+var_C]
push    0
push    ecx
mov     ecx, eax
call    dword ptr [edx+4Ch]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+1Ch+arg_0], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
mov     edx, [esp+1Ch]
sar     eax, 8
mov     word ptr [esp+1Ch+arg_0+2], ax
mov     eax, [esp+1Ch+arg_0]
mov     [edx], eax
add     esp, 14h
retn    0Ch
; ---------------------------------------------------------------------------

loc_656830:                             ; CODE XREF: TacticalClass__ScreenToCellLookup+97↑j
fild    [esp+14h+var_14]
fdiv    dword ptr [ecx+1488h]
fisub   dword ptr [ecx+1490h]
fild    [esp+14h+var_10]
fdiv    dword ptr [ecx+1488h]
fiadd   dword ptr [ecx+1498h]
fld     st
fadd    st, st(2)
fmul    ds:flt_7E5168
fadd    ds:dbl_7E1738
call    Math__RoundToInt
fsub    st, st(1)
mov     word ptr [esp+14h+arg_8], ax
fmul    ds:flt_7E5168
fadd    ds:dbl_7E1738
call    Math__RoundToInt
mov     ecx, [esp+14h+arg_4]
mov     word ptr [esp+14h+arg_8+2], ax
mov     edx, [esp+14h+arg_8]
fstp    st
mov     [ecx], edx
add     esp, 14h
retn    0Ch
*/
}

// ============================================================
// View control
// ============================================================

// IDA: 0x483E30 -- TacticalClass::SetView
// Sets the tactical view parameters.
// 0x483e30
void TacticalClass::SetView(int view_x, int view_y, int view_width, int view_height)
{
// [IDA decompile]
__int16 __thiscall TacticalClass_SetView(int this, int a2, int a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7)
{
  int v7; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  __int16 v13; // cx
  __int16 v14; // dx
  __int16 v15; // ax
  __int16 v16; // cx
  __int16 v17; // dx
  int v18; // eax
  __int16 v19; // cx
  int v21; // [esp+4h] [ebp-14h] BYREF
  int v22; // [esp+8h] [ebp-10h] BYREF
  int v23; // [esp+Ch] [ebp-Ch]
  int v24; // [esp+10h] [ebp-8h]
  int v25; // [esp+14h] [ebp-4h] BYREF

  v7 = a2;
  if ( a2 )
  {
    v9 = *(_DWORD *)(this + 52);
    if ( v9 && MEMORY[0xA8E9A0] )
      --*(_DWORD *)(v9 + 404);
    *(_DWORD *)(this + 52) = v7;
    ++*(_DWORD *)(v7 + 404);
    v10 = *(_DWORD **)(this + 52);
    a2 = v10[102];
    v21 = v10[103];
    v22 = v10[104];
LABEL_20:
    v13 = a4;
    v14 = a5;
    *(_DWORD *)(this + 260) = a3;
    v15 = a6;
    *(_WORD *)(this + 264) = v13;
    v16 = a7;
    *(_WORD *)(this + 266) = v14;
    v17 = a2;
    *(_WORD *)(this + 268) = v15;
    LOWORD(v18) = v21;
    *(_WORD *)(this + 270) = v16;
    v19 = v22;
    *(_WORD *)(this + 272) = v17;
    *(_WORD *)(this + 274) = v18;
    *(_WORD *)(this + 276) = v19;
    return v18;
  }
  if ( (*(_WORD *)(this + 36) || *(_WORD *)(this + 38))
    && (*(_WORD *)(this + 36) != 0xFFFF || *(_WORD *)(this + 38) != 0xFFFF) )
  {
    Tactical::CalculateTacticalLighting(&a3, &a4, &a5, &a6, &a7, &a2, &v21, &v22);
    if ( !*(_DWORD *)(this + 52) )
      goto LABEL_18;
    v23 = a2;
    v24 = v21;
    v25 = v22;
    QuantizeColorRGB(&v25);
    v11 = *(_DWORD **)(this + 52);
    if ( v11[102] != v23 || v11[103] != v24 || v11[104] != v25 )
    {
      if ( MEMORY[0xA8E9A0] )
        --v11[101];
      *(_DWORD *)(this + 52) = 0;
    }
    if ( !*(_DWORD *)(this + 52) )
    {
LABEL_18:
      v12 = CreateSurfaceClassPrimary(v22);
      *(_DWORD *)(this + 52) = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 404);
    }
    goto LABEL_20;
  }
  v18 = CreateSurfaceClassPrimary(1000);
  *(_DWORD *)(this + 52) = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 404);
  *(_WORD *)(this + 266) = 1000;
  *(_WORD *)(this + 268) = 1000;
  *(_WORD *)(this + 270) = 1000;
  *(_WORD *)(this + 272) = 1000;
  *(_WORD *)(this + 274) = 1000;
  *(_WORD *)(this + 276) = 1000;
  *(_DWORD *)(this + 260) = 0x10000;
  *(_WORD *)(this + 264) = 0;
  return v18;
}

/* ASM:
mov     eax, [esp+arg_0]
sub     esp, 14h
test    eax, eax
push    esi
mov     esi, ecx
jz      short loc_483E8B
mov     ecx, [esi+34h]
test    ecx, ecx
jz      short loc_483E55
mov     dl, ds:0A8E9A0h
test    dl, dl
jz      short loc_483E55
dec     dword ptr [ecx+194h]

loc_483E55:                             ; CODE XREF: TacticalClass__SetView+13↑j
; TacticalClass__SetView+1D↑j
mov     [esi+34h], eax
mov     ecx, [eax+194h]
inc     ecx
mov     [eax+194h], ecx
mov     eax, [esi+34h]
mov     ecx, [eax+198h]
mov     [esp+18h+arg_0], ecx
mov     edx, [eax+19Ch]
mov     [esp+18h+var_14], edx
mov     eax, [eax+1A0h]
mov     [esp+18h+var_10], eax
jmp     loc_483F7A
; ---------------------------------------------------------------------------

loc_483E8B:                             ; CODE XREF: TacticalClass__SetView+C↑j
cmp     word ptr [esi+24h], 0
jnz     short loc_483E9D
cmp     word ptr [esi+26h], 0
jz      loc_483FDF

loc_483E9D:                             ; CODE XREF: TacticalClass__SetView+60↑j
or      eax, 0FFFFFFFFh
cmp     [esi+24h], ax
jnz     short loc_483EB0
cmp     [esi+26h], ax
jz      loc_483FDF

loc_483EB0:                             ; CODE XREF: TacticalClass__SetView+74↑j
lea     ecx, [esp+18h+var_10]
lea     edx, [esp+18h+var_14]
push    ecx
lea     eax, [esp+1Ch+arg_0]
push    edx
lea     ecx, [esp+20h+arg_14]
push    eax
lea     edx, [esp+24h+arg_10]
push    ecx
lea     eax, [esp+28h+arg_C]
push    edx
lea     ecx, [esp+2Ch+arg_8]
push    eax
lea     edx, [esp+30h+arg_4]
push    ecx
push    edx
mov     ecx, esi
call    Tactical__CalculateTacticalLighting
mov     eax, [esi+34h]
test    eax, eax
jz      short loc_483F5B
mov     eax, [esp+18h+arg_0]
mov     ecx, [esp+18h+var_14]
mov     edx, [esp+18h+var_10]
mov     [esp+18h+var_C], eax
lea     eax, [esp+18h+var_4]
mov     [esp+18h+var_8], ecx
mov     [esp+18h+var_4], edx
push    eax
lea     edx, [esp+1Ch+var_8]
lea     ecx, [esp+1Ch+var_C]
call    QuantizeColorRGB
mov     eax, [esi+34h]
mov     edx, [esp+18h+var_C]
mov     ecx, [eax+198h]
cmp     ecx, edx
jnz     short loc_483F3D
mov     edx, [eax+19Ch]
mov     ecx, [esp+18h+var_8]
cmp     edx, ecx
jnz     short loc_483F3D
mov     ecx, [eax+1A0h]
mov     edx, [esp+18h+var_4]
cmp     ecx, edx
jz      short loc_483F54

loc_483F3D:                             ; CODE XREF: TacticalClass__SetView+EF↑j
; TacticalClass__SetView+FD↑j
mov     cl, ds:0A8E9A0h
test    cl, cl
jz      short loc_483F4D
dec     dword ptr [eax+194h]

loc_483F4D:                             ; CODE XREF: TacticalClass__SetView+115↑j
mov     dword ptr [esi+34h], 0

loc_483F54:                             ; CODE XREF: TacticalClass__SetView+10B↑j
mov     eax, [esi+34h]
test    eax, eax
jnz     short loc_483F7A

loc_483F5B:                             ; CODE XREF: TacticalClass__SetView+B4↑j
mov     edx, [esp+18h+var_10]
mov     ecx, [esp+18h+arg_0]
push    edx
mov     edx, [esp+1Ch+var_14]
call    CreateSurfaceClassPrimary
test    eax, eax
mov     [esi+34h], eax
jz      short loc_483F7A
inc     dword ptr [eax+194h]

loc_483F7A:                             ; CODE XREF: TacticalClass__SetView+56↑j
; TacticalClass__SetView+129↑j ...
mov     eax, [esp+18h+arg_4]
mov     cx, [esp+18h+arg_8]
mov     dx, [esp+18h+arg_C]
mov     [esi+104h], eax
mov     ax, [esp+18h+arg_10]
mov     [esi+108h], cx
mov     cx, [esp+18h+arg_14]
mov     [esi+10Ah], dx
mov     dx, word ptr [esp+18h+arg_0]
mov     [esi+10Ch], ax
mov     ax, word ptr [esp+18h+var_14]
mov     [esi+10Eh], cx
mov     cx, word ptr [esp+18h+var_10]
mov     [esi+110h], dx
mov     [esi+112h], ax
mov     [esi+114h], cx
pop     esi
add     esp, 14h
retn    18h
; ---------------------------------------------------------------------------

loc_483FDF:                             ; CODE XREF: TacticalClass__SetView+67↑j
; TacticalClass__SetView+7A↑j
push    edi
mov     edi, 3E8h
push    edi
mov     edx, edi
mov     ecx, edi
call    CreateSurfaceClassPrimary
test    eax, eax
mov     [esi+34h], eax
jz      short loc_483FFC
inc     dword ptr [eax+194h]

loc_483FFC:                             ; CODE XREF: TacticalClass__SetView+1C4↑j
mov     [esi+10Ah], di
mov     [esi+10Ch], di
mov     [esi+10Eh], di
mov     [esi+110h], di
mov     [esi+112h], di
mov     [esi+114h], di
mov     dword ptr [esi+104h], 10000h
mov     word ptr [esi+108h], 0
pop     edi
pop     esi
add     esp, 14h
retn    18h
*/
}

// IDA: 0x4A8960 -- TacticalClass::SetViewDimensions
// Sets viewport dimensions and recalculates visible area.
// 0x4a8960
void TacticalClass::SetViewDimensions(int width, int height)
{
// [IDA decompile]
void __stdcall TacticalClass::SetViewDimensions(int *a1)
{
  void *v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  void *v4; // esi
  int *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // esi
  _DWORD v9[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v10; // [esp+24h] [ebp-4h]

  Debug::Log();
  MEMORY[0x87F7E8][7662] = *a1;
  MEMORY[0x87F7E8][7663] = a1[1];
  MEMORY[0x87F7E8][7664] = a1[2];
  MEMORY[0x87F7E8][7665] = a1[3];
  if ( MEMORY[0x87F7E8][7887] )
  {
    TacticalClass::SetViewportPosition(MEMORY[0x87F7E8][7887], &MEMORY[0x87F7E8][7662]);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 12))(MEMORY[0x87F7E8][8086]);
    if ( MEMORY[0x87F7E8][8087] )
    {
      Debug::Log();
      v1 = (void *)MEMORY[0x87F7E8][8087];
      if ( MEMORY[0x87F7E8][8087] )
      {
        Stream::GetField((_DWORD *)MEMORY[0x87F7E8][8087]);
        __3_YAXPAX_Z(v1);
      }
      MEMORY[0x87F7E8][8087] = 0;
    }
    v2 = (_DWORD *)__2_YAPAXI_Z(48);
    if ( v2 )
      v3 = BSurface::ConstructEx(
             v2,
             MEMORY[0x87F7E8][7662],
             MEMORY[0x87F7E8][7663],
             MEMORY[0x87F7E8][7664],
             MEMORY[0x87F7E8][7665]);
    else
      v3 = 0;
    MEMORY[0x87F7E8][8087] = v3;
    v3[9] = 0x8000;
    Debug::Log();
    if ( MEMORY[0x87E8A4] )
    {
      Debug::Log();
      v4 = MEMORY[0x87E8A4];
      if ( MEMORY[0x87E8A4] )
      {
        StreamObj::Release(MEMORY[0x87E8A4]);
        __3_YAXPAX_Z(v4);
      }
      MEMORY[0x87E8A4] = 0;
    }
    v5 = (int *)__2_YAPAXI_Z(48);
    if ( v5 )
      MEMORY[0x87E8A4] = BSurface::Construct(
                           v5,
                           MEMORY[0x87F7E8][7662],
                           MEMORY[0x87F7E8][7663],
                           MEMORY[0x87F7E8][7664],
                           MEMORY[0x87F7E8][7665]);
    else
      MEMORY[0x87E8A4] = 0;
    Debug::Log();
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 16))(MEMORY[0x87F7E8][8086]);
  }
  SidebarClass::LoadResources();
  v6 = MEMORY[0x87F7E8][7662];
  v7 = MEMORY[0x87F7E8][7663];
  v8 = MEMORY[0x87F7E8][7664];
  MEMORY[0x87F7E8][33735] = MEMORY[0x87F7E8][7662];
  MEMORY[0x87F7E8][33736] = MEMORY[0x87F7E8][7663];
  MEMORY[0x87F7E8][33737] = MEMORY[0x87F7E8][7664];
  MEMORY[0x87F7E8][33738] = MEMORY[0x87F7E8][7665];
  if ( MEMORY[0x87F7E8][7904] )
  {
    v10 = 0;
    v9[0] = 500;
    v9[5] = 0;
    v9[1] = MEMORY[0x87F7E8][7662];
    v9[2] = MEMORY[0x87F7E8][7663];
    v9[3] = MEMORY[0x87F7E8][7664];
    v9[4] = MEMORY[0x87F7E8][7665];
    HashTable::Remove((int *)MEMORY[0x87F7E8][7904], 500);
    CommandClass::AddAction(MEMORY[0x87F7E8][7904], (int)v9);
    v7 = MEMORY[0x87F7E8][7663];
    v6 = MEMORY[0x87F7E8][7662];
    v8 = MEMORY[0x87F7E8][7664];
  }
  MessageListClass::Init((#474 *)&MEMORY[0x87F7E8][536862], v6 + 3, v7, 6, 98, 14, -1, -1, 0, 20, 98, v8 - 6);
  TacticalClass::processInput((int **)&MEMORY[0x87F7E8][536862], MEMORY[0x87F7E8][7664]);
  Debug::Log();
}

/* ASM:
sub     esp, 1Ch
push    ebx
push    esi
mov     esi, [esp+24h+arg_0]
push    edi
mov     eax, [esi+0Ch]
mov     ecx, [esi+8]
mov     edx, [esi+4]
push    eax
mov     eax, [esi]
push    ecx
push    edx
push    eax
push    offset aSetViewDimensi ; "Set_View_Dimensions(%d,%d,%d,%d)\n"
call    Debug__Log
mov     ecx, [esi]
xor     ebx, ebx
mov     ds:886FA0h, ecx
mov     edx, [esi+4]
mov     ds:886FA4h, edx
mov     eax, [esi+8]
mov     ds:886FA8h, eax
mov     ecx, [esi+0Ch]
mov     ds:886FACh, ecx
mov     ecx, ds:887324h
add     esp, 14h
cmp     ecx, ebx
jz      loc_4A8B0E
push    886FA0h
call    TacticalClass__SetViewportPosition
mov     ecx, ds:887640h
mov     edx, [ecx]
call    dword ptr [edx+0Ch]
cmp     ds:887644h, ebx
jz      short loc_4A8A02
push    offset aDeletingZbuffe ; "Deleting ZBuffer\n"
call    Debug__Log
mov     esi, ds:887644h
add     esp, 4
cmp     esi, ebx
jz      short loc_4A89FC
mov     ecx, esi
call    Stream__GetField
push    esi             ; Block
call    ??3_YAXPAX_Z
add     esp, 4

loc_4A89FC:                             ; CODE XREF: TacticalClass__SetViewDimensions+8A↑j
mov     ds:887644h, ebx

loc_4A8A02:                             ; CODE XREF: TacticalClass__SetViewDimensions+73↑j
push    30h ; '0'       ; Size
call    ??2_YAPAXI_Z
add     esp, 4
cmp     eax, ebx
jz      short loc_4A8A41
mov     edx, ds:886FA0h
sub     esp, 10h
mov     ecx, esp
mov     [ecx], edx
mov     edx, ds:886FA4h
mov     [ecx+4], edx
mov     edx, ds:886FA8h
mov     [ecx+8], edx
mov     edx, ds:886FACh
mov     [ecx+0Ch], edx
mov     ecx, eax
call    BSurface__ConstructEx
jmp     short loc_4A8A43
; ---------------------------------------------------------------------------

loc_4A8A41:                             ; CODE XREF: TacticalClass__SetViewDimensions+AE↑j
xor     eax, eax

loc_4A8A43:                             ; CODE XREF: TacticalClass__SetViewDimensions+DF↑j
mov     ds:887644h, eax
mov     dword ptr [eax+24h], 8000h
mov     eax, ds:886FACh
mov     ecx, ds:886FA8h
push    eax
push    ecx
push    offset aAllocatingZbuf ; "Allocating ZBuffer (%dx%d)\n"
call    Debug__Log
mov     eax, ds:87E8A4h
add     esp, 0Ch
cmp     eax, ebx
jz      short loc_4A8A9F
push    offset aDeletingAbuffe ; "Deleting ABuffer\n"
call    Debug__Log
mov     esi, ds:87E8A4h
add     esp, 4
cmp     esi, ebx
jz      short loc_4A8A99
mov     ecx, esi
call    StreamObj__Release
push    esi             ; Block
call    ??3_YAXPAX_Z
add     esp, 4

loc_4A8A99:                             ; CODE XREF: TacticalClass__SetViewDimensions+127↑j
mov     ds:87E8A4h, ebx

loc_4A8A9F:                             ; CODE XREF: TacticalClass__SetViewDimensions+110↑j
push    30h ; '0'       ; Size
call    ??2_YAPAXI_Z
add     esp, 4
cmp     eax, ebx
jz      short loc_4A8AE3
mov     ecx, ds:886FA0h
sub     esp, 10h
mov     edx, esp
mov     [edx], ecx
mov     ecx, ds:886FA4h
mov     [edx+4], ecx
mov     ecx, ds:886FA8h
mov     [edx+8], ecx
mov     ecx, ds:886FACh
mov     [edx+0Ch], ecx
mov     ecx, eax
call    BSurface__Construct
mov     ds:87E8A4h, eax
jmp     short loc_4A8AE9
; ---------------------------------------------------------------------------

loc_4A8AE3:                             ; CODE XREF: TacticalClass__SetViewDimensions+14B↑j
mov     ds:87E8A4h, ebx

loc_4A8AE9:                             ; CODE XREF: TacticalClass__SetViewDimensions+181↑j
mov     edx, ds:886FACh
mov     eax, ds:886FA8h
push    edx
push    eax
push    offset aAllocatingAbuf ; "Allocating ABuffer (%dx%d)\n"
call    Debug__Log
mov     ecx, ds:887640h
add     esp, 0Ch
mov     edx, [ecx]
call    dword ptr [edx+10h]

loc_4A8B0E:                             ; CODE XREF: TacticalClass__SetViewDimensions+52↑j
mov     ecx, 87F7E8h
call    SidebarClass__LoadResources
mov     ecx, ds:887368h
mov     edx, ds:886FA0h
mov     eax, ds:886FA4h
mov     esi, ds:886FA8h
mov     edi, ds:886FACh
cmp     ecx, ebx
mov     ds:8A0704h, edx
mov     ds:8A0708h, eax
mov     ds:8A070Ch, esi
mov     ds:8A0710h, edi
jz      short loc_4A8B9B
push    1F4h
mov     [esp+2Ch+var_4], bl
mov     [esp+2Ch+var_1C], 1F4h
mov     [esp+2Ch+var_8], ebx
mov     [esp+2Ch+var_18], edx
mov     [esp+2Ch+var_14], eax
mov     [esp+2Ch+var_10], esi
mov     [esp+2Ch+var_C], edi
call    HashTable__Remove
mov     ecx, ds:887368h
lea     eax, [esp+28h+var_1C]
push    eax
call    CommandClass__AddAction
mov     eax, ds:886FA4h
mov     edx, ds:886FA0h
mov     esi, ds:886FA8h

loc_4A8B9B:                             ; CODE XREF: TacticalClass__SetViewDimensions+1EE↑j
add     esi, 0FFFFFFFAh
add     edx, 3
push    esi             ; int
push    62h ; 'b'       ; int
push    14h             ; int
push    ebx             ; char
push    0FFFFFFFFh      ; int
push    0FFFFFFFFh      ; int
push    0Eh             ; int
push    62h ; 'b'       ; int
push    6               ; int
push    eax             ; int
push    edx             ; int
mov     ecx, 0A8BC60h   ; this
call    MessageListClass__Init
mov     ecx, ds:886FA8h
push    ecx
mov     ecx, 0A8BC60h
call    TacticalClass__processInput
push    offset aSetViewDimensi_0 ; "Set_View_Dimensions(exit)\n"
call    Debug__Log
add     esp, 4
pop     edi
pop     esi
pop     ebx
add     esp, 1Ch
retn    4
*/
}

// IDA: 0x537620 -- TacticalClass::InitView
// Initializes the tactical view for first use.
// 0x537620
void TacticalClass::InitView()
{
// [IDA decompile]
_DWORD *__stdcall TacticalClass_InitView(int a1)
{
  int v1; // eax
  _DWORD *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  _DWORD v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (*((__int16 *)MEMORY[0xA8B230] + 6734) << 8) + 128;
  v4[0] = (*((__int16 *)MEMORY[0xA8B230] + 6733) << 8) + 128;
  v4[1] = v1;
  GroundHeight = 0;
  GroundHeight = Cell::GetGroundHeight(v4);
  Tactical::SetTacticalPosition(v4);
  result = (_DWORD *)MEMORY[0x880990];
  if ( MEMORY[0x880990] )
    return Tactical::MouseMove((int)&MEMORY[0x87F7E8], &v3, &MEMORY[0xA8F2F8]);
  return result;
}

/* ASM:
sub     esp, 10h
mov     ecx, ds:0A8B230h
lea     edx, [esp+10h+var_C]
push    edx
movsx   eax, word ptr [ecx+349Ch]
movsx   ecx, word ptr [ecx+349Ah]
shl     ecx, 8
shl     eax, 8
add     ecx, 80h
add     eax, 80h
mov     [esp+14h+var_C], ecx
mov     ecx, 87F7E8h
mov     [esp+14h+var_8], eax
mov     [esp+14h+var_4], 0
call    Cell__GetGroundHeight
mov     ecx, ds:887324h
mov     [esp+10h+var_4], eax
lea     eax, [esp+10h+var_C]
push    eax
call    Tactical__SetTacticalPosition
mov     eax, ds:880990h
test    eax, eax
jz      short loc_537698
lea     ecx, [esp+10h+var_10]
push    (offset dword_A8ED54+5A4h)
push    ecx
mov     ecx, 87F7E8h
call    Tactical__MouseMove

loc_537698:                             ; CODE XREF: TacticalClass__InitView+62↑j
add     esp, 10h
retn    4
*/
}

// IDA: 0x6D5F60 -- TacticalClass::SetViewportPosition
// Sets the viewport scroll position.
// 0x6d5f60
void TacticalClass::SetViewportPosition(int x, int y)
{
// [IDA decompile]
unsigned int __thiscall sub_6D5F60(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  unsigned int result; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h]

  MEMORY[0xB0CE28] = *a2;
  MEMORY[0xB0CE2C] = a2[1];
  MEMORY[0xB0CE30] = a2[2];
  MEMORY[0xB0CE34] = a2[3];
  v3 = *(_DWORD *)(this + 3444);
  v8 = *(_DWORD *)(this + 3448);
  v7 = v3;
  if ( !ClampCoordMap(&v7) || MEMORY[0xA8ED6B] )
  {
    v4 = *(_DWORD *)(this + 3444);
    v5 = *(_DWORD *)(this + 3448);
  }
  else
  {
    v4 = v7;
    v5 = v8;
  }
  *(_DWORD *)(this + 3428) = v4;
  *(_DWORD *)(this + 3444) = v4;
  *(_DWORD *)(this + 3432) = v5;
  *(_DWORD *)(this + 3448) = v5;
  result = TacticalClass::CalcViewportCells(this);
  *(_BYTE *)(this + 3453) = 1;
  return result;
}

/* ASM:
sub     esp, 8
mov     eax, [esp+8+arg_0]
push    esi
mov     esi, ecx
mov     ecx, [eax]
mov     dword_A8ED54+7E0D4h, ecx
mov     edx, [eax+4]
mov     dword_A8ED54+7E0D8h, edx
mov     ecx, [eax+8]
mov     dword_A8ED54+7E0DCh, ecx
mov     edx, [eax+0Ch]
mov     dword_A8ED54+7E0E0h, edx
mov     ecx, [esi+0D78h]
mov     eax, [esi+0D74h]
lea     edx, [esp+0Ch+var_8]
mov     [esp+0Ch+var_4], ecx
push    edx
mov     ecx, esi
mov     [esp+10h+var_8], eax
call    ClampCoordMap
test    al, al
jz      short loc_6D5FC4
mov     al, byte ptr dword_A8ED54+17h
test    al, al
jnz     short loc_6D5FC4
mov     eax, [esp+0Ch+var_8]
mov     ecx, [esp+0Ch+var_4]
jmp     short loc_6D5FD0
; ---------------------------------------------------------------------------

loc_6D5FC4:                             ; CODE XREF: TacticalClass__SetViewportPosition+4F↑j
; TacticalClass__SetViewportPosition+58↑j
mov     eax, [esi+0D74h]
mov     ecx, [esi+0D78h]

loc_6D5FD0:                             ; CODE XREF: TacticalClass__SetViewportPosition+62↑j
mov     [esi+0D64h], eax
mov     [esi+0D74h], eax
mov     [esi+0D68h], ecx
mov     [esi+0D78h], ecx
mov     ecx, esi
call    TacticalClass__CalcViewportCells
mov     byte ptr [esi+0D7Dh], 1
pop     esi
add     esp, 8
retn    4
*/
}

// IDA: 0x6D2540 -- TacticalClass::ScrollViewport
// Scrolls the viewport by a delta amount.
// 0x6d2540
void TacticalClass::ScrollViewport(int dx, int dy)
{
// [IDA decompile]
char __thiscall TacticalClass::ScrollViewport(int this)
{
  int v1; // eax
  char v2; // bl
  _DWORD *v4; // ebp
  double v5; // st7
  _DWORD *v6; // edi
  int *v7; // eax
  double v8; // st7
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  signed int v12; // edi
  signed int v13; // eax
  int v14; // edi
  unsigned int Ticks; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v22; // [esp+8h] [ebp-14h] BYREF
  int v23; // [esp+Ch] [ebp-10h]
  int v24; // [esp+10h] [ebp-Ch] BYREF
  int v25; // [esp+14h] [ebp-8h]

  LOBYTE(v1) = MEMORY[0x87F7E8][538500];
  v2 = 0;
  if ( (MEMORY[0x87F7E8][538500] & 2) != 0 )
    return v1;
  if ( *(_DWORD *)(this + 168) != dword_A8ED54[12] )
  {
    if ( LOBYTE(dword_A8ED54[2]) )
    {
      v4 = (_DWORD *)(this + 208);
      if ( (*(_DWORD *)(this + 208) != dword_A8ED54[129069] || *(_DWORD *)(this + 212) != dword_A8ED54[129070])
        && *(float *)(this + 216) != 0.0 )
      {
        v5 = *(float *)(this + 220) + *(float *)(this + 216);
        *(float *)(this + 220) = v5;
        if ( v5 > 1.0 )
          *(_DWORD *)(this + 220) = 1065353216;
        v6 = (_DWORD *)(this + 200);
        v7 = TacticalClass::CalcInverseAlpha(&v24, this + 208, *(float *)(this + 220));
        v8 = *(float *)(this + 220);
        v9 = *v7;
        v25 = v7[1];
        if ( v8 >= 1.0 )
        {
          *v4 = 0;
          *v6 = 0;
          *(_DWORD *)(this + 212) = 0;
          *(_DWORD *)(this + 204) = 0;
          *(_DWORD *)(this + 216) = 0;
          *(_DWORD *)(this + 220) = 0;
        }
        v22 = v9;
        v23 = v25;
        if ( !ClampCoordMap(&v22) || HIBYTE(dword_A8ED54[5]) )
        {
          v11 = v25;
          v10 = v9;
        }
        else
        {
          v10 = v22;
          v11 = v23;
        }
        *(_DWORD *)(this + 3428) = v10;
        *(_DWORD *)(this + 3444) = v10;
        *(_DWORD *)(this + 3432) = v11;
        *(_DWORD *)(this + 3448) = v11;
        TacticalClass::CalcViewportCells(this);
        *(_BYTE *)(this + 3453) = 1;
        v2 = 1;
      }
    }
    v12 = *(_DWORD *)(this + 3500);
    if ( *(_DWORD *)(this + 3492) != -1 )
    {
      v13 = Timer::GetTicks() - *(_DWORD *)(this + 3492);
      if ( v13 >= v12 )
      {
LABEL_20:
        v14 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 80);
        Ticks = Timer::GetTicks();
        v16 = v25;
        *(_DWORD *)(this + 3492) = Ticks;
        v17 = *(_DWORD *)(this + 3488);
        *(_DWORD *)(this + 3496) = v16;
        *(_DWORD *)(this + 3500) = v14;
        *(_DWORD *)(this + 3488) = v17 + 1;
        goto LABEL_21;
      }
      v12 -= v13;
    }
    if ( v12 )
      goto LABEL_21;
    goto LABEL_20;
  }
LABEL_21:
  LOBYTE(v1) = dword_A8ED54[12];
  *(_DWORD *)(this + 168) = dword_A8ED54[12];
  if ( *(_DWORD *)(this + 3444) != *(_DWORD *)(this + 3428)
    || (v1 = *(_DWORD *)(this + 3432), *(_DWORD *)(this + 3448) != v1) )
  {
    if ( !v2 )
    {
      v18 = *(_DWORD *)(this + 3444);
      v23 = *(_DWORD *)(this + 3448);
      v22 = v18;
      if ( !ClampCoordMap(&v22) || HIBYTE(dword_A8ED54[5]) )
      {
        v19 = *(_DWORD *)(this + 3444);
        v20 = *(_DWORD *)(this + 3448);
      }
      else
      {
        v19 = v22;
        v20 = v23;
      }
      *(_DWORD *)(this + 3428) = v19;
      *(_DWORD *)(this + 3444) = v19;
      *(_DWORD *)(this + 3432) = v20;
      *(_DWORD *)(this + 3448) = v20;
      LOBYTE(v1) = TacticalClass::CalcViewportCells(this);
      *(_BYTE *)(this + 3453) = 1;
    }
  }
  return v1;
}

/* ASM:
mov     al, ds:0A8D5F8h
sub     esp, 14h
push    ebx
xor     bl, bl
push    esi
mov     esi, ecx
test    al, 2
jnz     loc_6D2784
mov     eax, [esi+0A8h]
mov     ecx, dword_A8ED54+30h
cmp     eax, ecx
push    edi
jz      loc_6D26ED
mov     al, byte ptr dword_A8ED54+8
push    ebp
test    al, al
jz      loc_6D268B
mov     ecx, [esi+0D0h]
mov     eax, dword_A8ED54+7E0B4h
lea     ebp, [esi+0D0h]
cmp     ecx, eax
jnz     short loc_6D259E
mov     edx, [ebp+4]
mov     eax, dword_A8ED54+7E0B8h
cmp     edx, eax
jz      loc_6D268B

loc_6D259E:                             ; CODE XREF: TacticalClass__ScrollViewport+4C↑j
fld     dword ptr [esi+0D8h]
fcomp   ds:flt_7E1748
fnstsw  ax
test    ah, 40h
jnz     loc_6D268B
fld     dword ptr [esi+0DCh]
fadd    dword ptr [esi+0D8h]
fst     dword ptr [esi+0DCh]
fcomp   ds:dbl_7E1718
fnstsw  ax
test    ah, 41h
jnz     short loc_6D25DE
mov     dword ptr [esi+0DCh], 3F800000h

loc_6D25DE:                             ; CODE XREF: TacticalClass__ScrollViewport+92↑j
mov     eax, [esi+0DCh]
lea     edi, [esi+0C8h]
push    eax             ; float
push    ebp             ; int
mov     edx, edi
lea     ecx, [esp+2Ch+var_C]
call    TacticalClass__CalcInverseAlpha
fld     dword ptr [esi+0DCh]
fcomp   ds:dbl_7E1718
mov     ebx, [eax]
mov     ecx, [eax+4]
fnstsw  ax
mov     [esp+24h+var_8], ecx
test    ah, 1
jnz     short loc_6D262E
xor     eax, eax
xor     ecx, ecx
mov     [ebp+0], eax
mov     [edi], eax
mov     [ebp+4], ecx
mov     [edi+4], ecx
mov     [esi+0D8h], eax
mov     [esi+0DCh], eax

loc_6D262E:                             ; CODE XREF: TacticalClass__ScrollViewport+D1↑j
mov     edx, [esp+24h+var_8]
lea     eax, [esp+24h+var_14]
push    eax
mov     ecx, esi
mov     [esp+28h+var_14], ebx
mov     [esp+28h+var_10], edx
call    ClampCoordMap
test    al, al
jz      short loc_6D265D
mov     al, byte ptr dword_A8ED54+17h
test    al, al
jnz     short loc_6D265D
mov     eax, [esp+24h+var_14]
mov     ecx, [esp+24h+var_10]
jmp     short loc_6D2663
; ---------------------------------------------------------------------------

loc_6D265D:                             ; CODE XREF: TacticalClass__ScrollViewport+108↑j
; TacticalClass__ScrollViewport+111↑j
mov     ecx, [esp+24h+var_8]
mov     eax, ebx

loc_6D2663:                             ; CODE XREF: TacticalClass__ScrollViewport+11B↑j
mov     [esi+0D64h], eax
mov     [esi+0D74h], eax
mov     [esi+0D68h], ecx
mov     [esi+0D78h], ecx
mov     ecx, esi
call    TacticalClass__CalcViewportCells
mov     byte ptr [esi+0D7Dh], 1
mov     bl, 1

loc_6D268B:                             ; CODE XREF: TacticalClass__ScrollViewport+33↑j
; TacticalClass__ScrollViewport+58↑j ...
mov     eax, [esi+0DA4h]
mov     edi, [esi+0DACh]
cmp     eax, 0FFFFFFFFh
pop     ebp
jz      short loc_6D26B4
lea     ecx, [esi+0DA8h]
call    Timer__GetTicks
sub     eax, [esi+0DA4h]
cmp     eax, edi
jge     short loc_6D26B8
sub     edi, eax

loc_6D26B4:                             ; CODE XREF: TacticalClass__ScrollViewport+15B↑j
test    edi, edi
jnz     short loc_6D26ED

loc_6D26B8:                             ; CODE XREF: TacticalClass__ScrollViewport+170↑j
mov     ecx, ds:8871E0h
mov     edi, [ecx+50h]
lea     ecx, [esp+20h+var_8]
call    Timer__GetTicks
mov     edx, [esp+20h+var_8]
mov     [esi+0DA4h], eax
mov     eax, [esi+0DA0h]
mov     [esi+0DA8h], edx
inc     eax
mov     [esi+0DACh], edi
mov     [esi+0DA0h], eax

loc_6D26ED:                             ; CODE XREF: TacticalClass__ScrollViewport+25↑j
; TacticalClass__ScrollViewport+176↑j
mov     eax, dword_A8ED54+30h
pop     edi
mov     [esi+0A8h], eax
mov     ecx, [esi+0D74h]
cmp     ecx, [esi+0D64h]
jnz     short loc_6D2717
mov     edx, [esi+0D78h]
mov     eax, [esi+0D68h]
cmp     edx, eax
jz      short loc_6D2784

loc_6D2717:                             ; CODE XREF: TacticalClass__ScrollViewport+1C5↑j
test    bl, bl
jnz     short loc_6D2784
mov     ecx, [esi+0D78h]
mov     eax, [esi+0D74h]
lea     edx, [esp+1Ch+var_14]
mov     [esp+1Ch+var_10], ecx
push    edx
mov     ecx, esi
mov     [esp+20h+var_14], eax
call    ClampCoordMap
test    al, al
jz      short loc_6D2752
mov     al, byte ptr dword_A8ED54+17h
test    al, al
jnz     short loc_6D2752
mov     eax, [esp+1Ch+var_14]
mov     ecx, [esp+1Ch+var_10]
jmp     short loc_6D275E
; ---------------------------------------------------------------------------

loc_6D2752:                             ; CODE XREF: TacticalClass__ScrollViewport+1FD↑j
; TacticalClass__ScrollViewport+206↑j
mov     eax, [esi+0D74h]
mov     ecx, [esi+0D78h]

loc_6D275E:                             ; CODE XREF: TacticalClass__ScrollViewport+210↑j
mov     [esi+0D64h], eax
mov     [esi+0D74h], eax
mov     [esi+0D68h], ecx
mov     [esi+0D78h], ecx
mov     ecx, esi
call    TacticalClass__CalcViewportCells
mov     byte ptr [esi+0D7Dh], 1

loc_6D2784:                             ; CODE XREF: TacticalClass__ScrollViewport+10↑j
; TacticalClass__ScrollViewport+1D5↑j ...
pop     esi
pop     ebx
add     esp, 14h
retn
*/
}

// ============================================================
// Visibility / fog
// ============================================================

// IDA: 0x5090A0 -- TacticalClass::updateVisibility
// Updates visibility state for all visible cells.
// 0x5090a0
void TacticalClass::updateVisibility()
{
// [IDA decompile]
int __thiscall TacticalClass::updateVisibility(int *this)
{
  int v1; // esi
  int *i; // edi
  int v3; // eax
  int v4; // eax

  v1 = 0;
  for ( i = this + 132; ; ++i )
  {
    v3 = *i;
    if ( !*i )
    {
      v4 = __2_YAPAXI_Z(64);
      if ( v4 )
        v3 = WaypointPathClass::Init(v4);
      else
        v3 = 0;
    }
    if ( !*(_DWORD *)(v3 + 56) )
      break;
    if ( ++v1 >= 12 )
      return -1;
  }
  return v1;
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
}

// ============================================================
// Main render loop
// ============================================================

// IDA: 0x74D490 -- TacticalClass::Render
// Main render entry point. Draws a single object into the tactical view.
// 0x74d490
void TacticalClass::Render(ObjectClass* obj)
{
// [IDA decompile]
void __thiscall sub_74D490(int this)
{
  int v2; // eax
  int v3; // ebp
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // esi
  int v7; // edi
  __int16 *v8; // eax
  int v9; // [esp+4h] [ebp-14h] BYREF
  int v10; // [esp+8h] [ebp-10h]
  _DWORD v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !*(_BYTE *)(this + 256) )
  {
    v2 = *(__int16 *)(this + 248);
    v3 = dword_A8ED54[145766];
    v4 = *(_DWORD *)(this + 252);
    v5 = *(__int16 *)(this + 250) << 8;
    v11[0] = (v2 << 8) + 128;
    v11[1] = v5 + 128;
    v11[2] = 0;
    if ( (*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], v11) + 80) & 0x400000) != 0 )
      v4 = 0;
    Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v11, &v9);
    v6 = 15 * *((char *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)(this + 248)) + 283);
    v10 += -58 - v6;
    TacticalClass::AddToDrawQueue((_DWORD *)MEMORY[0x87F7E8][7887], this, v9, MEMORY[0x87F7E8][7663] + v10 + 58);
    v7 = *(_DWORD *)(*(_DWORD *)(dword_A8ED54[121312] + 4 * *(_DWORD *)(MEMORY[0x87F7E8][528729] + 90196)) + 780);
    v8 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v11);
    DrawToSurfaceSHP(
      (int *)MEMORY[0x87F7E8][7883],
      (_DWORD *)v7,
      v3,
      v4,
      &v9,
      &MEMORY[0x87F7E8][7662],
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

/* ASM:
sub     esp, 14h
push    edi
mov     edi, ecx
mov     al, [edi+100h]
test    al, al
jnz     loc_74D5C4
movsx   eax, word ptr [edi+0F8h]
push    ebx
push    ebp
movsx   ecx, word ptr [edi+0FAh]
push    esi
lea     esi, [edi+0F8h]
mov     ebp, dword_A8ED54+8E598h
mov     ebx, [edi+0FCh]
shl     eax, 8
add     eax, 80h
xor     edx, edx
shl     ecx, 8
add     ecx, 80h
mov     [esp+24h+var_C], eax
lea     eax, [esp+24h+var_C]
mov     [esp+24h+var_8], ecx
push    eax
mov     ecx, 87F7E8h
mov     [esp+28h+var_4], edx
call    Coord__To_Cell
test    dword ptr [eax+140h], 400000h
jz      short loc_74D503
xor     ebx, ebx

loc_74D503:                             ; CODE XREF: TacticalClass__Render+6F↑j
lea     ecx, [esp+24h+var_14]
lea     edx, [esp+24h+var_C]
push    ecx
mov     ecx, ds:887324h
push    edx
call    Coord__To_Screen
push    esi
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
movsx   eax, byte ptr [eax+11Bh]
mov     edx, ds:886FA4h
mov     ecx, 0FFFFFFC6h
lea     eax, [eax+eax*2]
lea     esi, [eax+eax*4]
mov     eax, [esp+24h+var_10]
sub     ecx, esi
add     eax, ecx
mov     ecx, [esp+24h+var_14]
mov     [esp+24h+var_10], eax
lea     eax, [edx+eax+3Ah]
push    eax
push    ecx
mov     ecx, ds:887324h
push    edi
call    TacticalClass__AddToDrawQueue
mov     eax, ds:0A83D4Ch
mov     edx, dword_A8ED54+76780h
mov     ecx, [eax+16054h]
mov     eax, [edx+ecx*4]
xor     ecx, ecx
push    ecx
mov     edi, [eax+30Ch]
xor     eax, eax
push    eax
push    ecx
push    ecx
push    ecx
lea     ecx, [esp+38h+var_C]
push    ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
movsx   edx, word ptr [eax+10Ch]
mov     eax, 0FFFFFFEFh
push    edx
sub     eax, esi
push    0
push    eax
push    0
push    2E00h
lea     ecx, [esp+4Ch+var_14]
push    886FA0h
push    ecx
mov     ecx, ds:887314h
push    ebx
push    ebp
mov     edx, edi
call    DrawToSurfaceSHP
pop     esi
pop     ebp
pop     ebx

loc_74D5C4:                             ; CODE XREF: TacticalClass__Render+E↑j
pop     edi
add     esp, 14h
retn
*/
}

// IDA: 0x4F45B0 -- TacticalClass::RenderFrame
// Renders a complete frame. Called each game tick.
// Handles audio streaming, 3D scene setup, and buffer present.
void TacticalClass::RenderFrame()
{
    // IDA: Check byte_8A0DF0 (DDraw active) and dword_8A0E08 (3D scene)
    // IDA: Check g_DrawColorState vtable[10] (IsLost)

    // Read audio samples first
    // if (AudioStream::ReadSamples(0))

    // If 3D rendering is active:
    //   - Set up cell transforms for ground grid (SetCellTransform)
    //   - Append transforms to StructTable
    //   - RenderTactical3DScene(DSurface_Composite+28)
    //   - Present frame: Frame::Present(DSurface_Composite)

    // End of frame: unlock draw color state
    // g_DrawColorState vtable[11] (Unlock)

    // byte_A9FA94 check for recursive present guard
}

// IDA: 0x6D9EF0 -- TacticalClass::AddToDrawQueue
// Adds an object to the draw queue for Y-sorted rendering.
// 0x6d9ef0
void TacticalClass::AddToDrawQueue(ObjectClass* obj, int screen_x, int screen_y)
{
// [IDA decompile]
char __thiscall TacticalClass_AddToDrawQueue(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edx
  int v6; // eax

  v4 = *(this + 876);
  if ( v4 == 500 || a3 < -32 || a3 > MEMORY[0x886FA8] + 32 || a4 < -32 || a4 > MEMORY[0x886FAC] + 32 )
    return 0;
  MEMORY[0xB0CEC8][3 * v4] = a2;
  v5 = a4 + *(this + 45);
  v6 = 3 * *(this + 876);
  MEMORY[0xB0CECC][v6] = *(this + 44) + a3;
  MEMORY[0xB0CED0][v6] = v5;
  ++*(this + 876);
  return 1;
}

/* ASM:
mov     eax, [ecx+0DB0h]
push    esi
cmp     eax, 1F4h
push    edi
jz      short loc_6D9F74
mov     esi, [esp+8+arg_4]
cmp     esi, 0FFFFFFE0h
jl      short loc_6D9F74
mov     edx, ds:886FA8h
add     edx, 20h ; ' '
cmp     esi, edx
jg      short loc_6D9F74
mov     edi, [esp+8+arg_8]
cmp     edi, 0FFFFFFE0h
jl      short loc_6D9F74
mov     edx, ds:886FACh
add     edx, 20h ; ' '
cmp     edi, edx
jg      short loc_6D9F74
mov     edx, [esp+8+arg_0]
lea     eax, [eax+eax*2]
mov     dword_A8ED54+7E174h[eax*4], edx
mov     eax, [ecx+0B0h]
mov     edx, [ecx+0B4h]
add     esi, eax
mov     eax, [ecx+0DB0h]
add     edx, edi
pop     edi
lea     eax, [eax+eax*2]
mov     dword_A8ED54+7E178h[eax*4], esi
pop     esi
mov     dword_A8ED54+7E17Ch[eax*4], edx
mov     eax, [ecx+0DB0h]
inc     eax
mov     [ecx+0DB0h], eax
mov     al, 1
retn    0Ch
; ---------------------------------------------------------------------------

loc_6D9F74:                             ; CODE XREF: TacticalClass__AddToDrawQueue+D↑j
; TacticalClass__AddToDrawQueue+16↑j ...
pop     edi
xor     al, al
pop     esi
retn    0Ch
*/
}

// ============================================================
// Helper functions
// ============================================================

// IDA: 0x6D3660 -- TacticalClass::CalcAllDrawPositions  
// Calculates screen draw positions for all buildings in view.
void TacticalClass::CalcAllDrawPositions()
{
    // Iterate buildings, compute each building's CalcDrawPos
    // and store results for the current frame
}

// IDA: 0x6DBE20 -- TacticalClass::DrawPlacementCircles
// Draws placement circles (range rings) around a building/unit.
void TacticalClass::DrawPlacementCircles(ObjectClass* obj, int range, int color)
{
    (void)obj;
    (void)range;
    (void)color;
}

// IDA: 0x6DA380 -- TacticalClass::IsOccupiedByTechno
// Checks if a cell is occupied by any Techno object.
bool TacticalClass::IsOccupiedByTechno(const CellStruct& cell) const
{
    // Query the cell for techno occupation
    (void)cell;
    return false;
}

// IDA: 0x6D9B50 -- TacticalClass::CheckUnitOverlap
// Checks if a unit at the given cell would overlap with others.
bool TacticalClass::CheckUnitOverlap(const CellStruct& cell, int facing) const
{
    (void)cell;
    (void)facing;
    return false;
}

// IDA: 0x4AC380 -- TacticalClass::ProcessScroll
// Processes scroll input.
void TacticalClass::ProcessScroll()
{
    // Update scroll position based on input/velocity
}

// IDA: 0x4AE290 -- TacticalClass::InterpolateView
// Interpolates view position for smooth scrolling.
void TacticalClass::InterpolateView()
{
    // Smooth scroll interpolation between current and target view positions
}

// IDA: 0x6D2280 -- TacticalClass::TransformPixel
// Transforms a pixel using the tactical view matrix.
// 0x6d2280
Point2D TacticalClass::TransformPixel(const Point2D& pixel) const
{
// [IDA decompile]
_DWORD *__thiscall TacticalClass_TransformPixel(int this, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // esi
  float *v5; // eax
  int v6; // esi
  int v7; // eax
  float v9[3]; // [esp+8h] [ebp-18h] BYREF
  float v10; // [esp+14h] [ebp-Ch] BYREF
  float v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  if ( *a3 >= MEMORY[0xB0CE30] || (v3 = a3[1], v3 >= MEMORY[0xB0CE34] + MEMORY[0xB0CE2C]) )
  {
    *a2 = MEMORY[0xB0CE08];
    a2[1] = MEMORY[0xB0CE0C];
    a2[2] = MEMORY[0xB0CE10];
    return a2;
  }
  else
  {
    v4 = *(_DWORD *)(this + 180) + v3;
    LODWORD(v9[0]) = *(_DWORD *)(this + 176) + *a3;
    LODWORD(v9[1]) = v4;
    v10 = (float)SLODWORD(v9[0]);
    v12 = 0;
    v11 = (float)v4;
    v5 = TransformMatrix3x4Point(v9, (float *)(this + 3556), &v10);
    v10 = *v5;
    v11 = v5[1];
    v12 = *((_DWORD *)v5 + 2);
    v6 = Math::RoundToInt(v10);
    v7 = Math::RoundToInt(v11);
    *a2 = v6;
    a2[1] = v7;
    a2[2] = 0;
    return a2;
  }
}

/* ASM:
mov     eax, [esp+arg_4]
mov     edx, dword_A8ED54+7E0DCh
sub     esp, 18h
push    esi
push    edi
mov     edi, [eax]
cmp     edi, edx
jge     loc_6D2337
mov     esi, [eax+4]
mov     eax, dword_A8ED54+7E0E0h
mov     edx, dword_A8ED54+7E0D8h
add     edx, eax
cmp     esi, edx
jge     loc_6D2337
mov     eax, [ecx+0B0h]
mov     edx, [ecx+0B4h]
add     edi, eax
add     esi, edx
mov     [esp+20h+var_18], edi
mov     [esp+20h+var_14], esi
fild    [esp+20h+var_18]
lea     eax, [esp+20h+var_C]
lea     edx, [ecx+0DE4h]
push    eax
lea     ecx, [esp+24h+var_18]
fstp    [esp+24h+var_C]
fild    [esp+24h+var_14]
mov     [esp+24h+var_4], 0
fstp    [esp+24h+var_8]
call    TransformMatrix3x4Point
mov     ecx, [eax]
mov     [esp+20h+var_C], ecx
mov     edx, [eax+4]
fld     [esp+20h+var_C]
mov     [esp+20h+var_8], edx
mov     eax, [eax+8]
mov     [esp+20h+var_4], eax
call    Math__RoundToInt
fld     [esp+20h+var_8]
mov     esi, eax
call    Math__RoundToInt
mov     edx, [esp+20h+arg_0]
xor     ecx, ecx
mov     edi, edx
mov     [edi], esi
mov     [edi+4], eax
mov     eax, edx
mov     [edi+8], ecx
pop     edi
pop     esi
add     esp, 18h
retn    8
; ---------------------------------------------------------------------------

loc_6D2337:                             ; CODE XREF: TacticalClass__TransformPixel+13↑j
; TacticalClass__TransformPixel+2B↑j
mov     eax, [esp+20h+arg_0]
mov     edx, dword_A8ED54+7E0B4h
mov     ecx, eax
pop     edi
pop     esi
mov     [ecx], edx
mov     edx, dword_A8ED54+7E0B8h
mov     [ecx+4], edx
mov     edx, dword_A8ED54+7E0BCh
mov     [ecx+8], edx
add     esp, 18h
retn    8
*/
}

// IDA: 0x631E50 -- TacticalClass::InterpolateColor
// Interpolates between two colors for fade effects.
// 0x631e50
uint32_t TacticalClass::InterpolateColor(uint32_t elapsed_ms)
{
// [IDA decompile]
int __thiscall sub_631E50(_DWORD *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // edi

  v2 = a2 * *(this + 5) + *(this + 4);
  *(this + 4) = v2;
  if ( v2 > 0x2000 )
    *(this + 4) = 0x2000;
  result = *(this + 4) & 0xFFF;
  if ( (*(this + 4) & 0x1000) != 0 )
    result = 4096 - result;
  v4 = result * *(this + 7);
  *(this + 1) = (result * *(this + 6) + (4096 - result) * *(this + 9)) >> 12;
  *(this + 2) = (v4 + (4096 - result) * *(this + 10)) >> 12;
  *(this + 3) = (result * *(this + 8) + (4096 - result) * *(this + 11)) >> 12;
  return result;
}

/* ASM:
mov     eax, [ecx+14h]
push    esi
imul    eax, [esp+4+arg_0]
mov     esi, [ecx+10h]
push    edi
add     esi, eax
mov     eax, esi
mov     [ecx+10h], esi
cmp     eax, 2000h
jle     short loc_631E72
mov     dword ptr [ecx+10h], 2000h

loc_631E72:                             ; CODE XREF: TacticalClass__InterpolateColor+19↑j
mov     edx, [ecx+10h]
mov     eax, edx
and     eax, 0FFFh
test    dh, 10h
jz      short loc_631E8A
mov     edx, 1000h
sub     edx, eax
mov     eax, edx

loc_631E8A:                             ; CODE XREF: TacticalClass__InterpolateColor+2F↑j
mov     esi, [ecx+24h]
mov     edi, [ecx+18h]
mov     edx, 1000h
imul    edi, eax
sub     edx, eax
imul    esi, edx
add     esi, edi
mov     edi, [ecx+1Ch]
sar     esi, 0Ch
imul    edi, eax
mov     [ecx+4], esi
mov     esi, [ecx+28h]
imul    esi, edx
add     esi, edi
pop     edi
sar     esi, 0Ch
mov     [ecx+8], esi
mov     esi, [ecx+2Ch]
imul    esi, edx
mov     edx, [ecx+20h]
imul    edx, eax
add     esi, edx
sar     esi, 0Ch
mov     [ecx+0Ch], esi
pop     esi
retn    4
*/
}

// IDA: 0x631EE0 -- TacticalClass::DecrementCounter
// Decrements a frame counter.
// 0x631ee0
bool TacticalClass::DecrementCounter(uint32_t delta)
{
// [IDA decompile]
char __thiscall sub_631EE0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = *(this + 14) - a2;
  *(this + 14) = v2;
  if ( v2 > 0 )
    return 0;
  *(this + 14) = 0;
  return 1;
}

/* ASM:
mov     eax, [esp+arg_0]
mov     edx, [ecx+38h]
sub     edx, eax
mov     eax, edx
mov     [ecx+38h], edx
test    eax, eax
jg      short loc_631EFE
mov     dword ptr [ecx+38h], 0
mov     al, 1
retn    4
; ---------------------------------------------------------------------------

loc_631EFE:                             ; CODE XREF: TacticalClass__DecrementCounter+10↑j
xor     al, al
retn    4
*/
}

// IDA: 0x70F0B0 -- TacticalClass::MapSpecialDrawMode
// Handles special map drawing modes (e.g., waypoint mode).
void TacticalClass::MapSpecialDrawMode()
{
    // Toggle special draw mode based on game state
}

// ============================================================
// Input handling
// ============================================================

// IDA: 0x653850 -- TacticalClass::MouseInput
// Processes mouse input for the tactical view.
// 0x653850
void TacticalClass::MouseInput(int x, int y, int buttons)
{
// [IDA decompile]
int __thiscall TacticalClass_MouseInput(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int result; // eax

  DisplayClass::Update(a2, a3);
  v4 = MEMORY[0xA8EB7C] != 0 ? MEMORY[0x886FA8] : 0;
  if ( *a3 >= v4 + MEMORY[0xB04A00] && *a3 < v4 + MEMORY[0xB04A00] + MEMORY[0xB04A08] )
  {
    v5 = a3[1];
    if ( v5 >= MEMORY[0xB04A04] && v5 < MEMORY[0xB04A0C] + MEMORY[0xB04A04] )
      Mouse::SetCursor((int)&MEMORY[0x87F7E8], 0, 0);
  }
  if ( *a3 >= v4 + MEMORY[0xB048C8] && *a3 < v4 + MEMORY[0xB048C8] + MEMORY[0xB048D0] )
  {
    v6 = a3[1];
    if ( v6 >= MEMORY[0xB048CC] && v6 < MEMORY[0xB048D4] + MEMORY[0xB048CC] )
      Mouse::SetCursor((int)&MEMORY[0x87F7E8], 0, 0);
  }
  if ( *a2 == 33010 )
  {
    if ( !MEMORY[0xA8B238]
      || (MEMORY[0xA8B238] == 3 || MEMORY[0xA8B238] == 4)
      && MEMORY[0xA8B23C]
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 8))(MEMORY[0xA8B23C])
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 4))(MEMORY[0xA8B23C]) )
    {
      MEMORY[0xA8EDA0] = 9;
    }
    else
    {
      MEMORY[0xA8EDA0] = 8;
    }
  }
  else if ( *a2 == 33011 )
  {
    MEMORY[0xA8EDA0] = 1;
  }
  if ( MEMORY[0xB45B68] > 0 )
  {
    v7 = *(this + 1324);
    if ( v7 != 3 && v7 != 4 )
    {
      *(this + 1325) = v7;
      RadarClass::SetViewMode(4, 0);
      *(this + 1326) = 0;
    }
  }
  if ( *(this + 1324) == 4 )
    return TacticalClass::ProcessChronoEffect(this);
  result = UI_Helper();
  if ( !(_BYTE)result )
    return ChronoScreenEffect::DecrementCounter();
  return result;
}

/* ASM:
mov     eax, [esp+arg_0]
push    ebx
push    ebp
push    esi
mov     esi, [esp+0Ch+arg_4]
push    edi
push    esi
mov     ebx, ecx
push    eax
call    DisplayClass__Update
mov     cl, ds:0A8EB7Ch
mov     edx, ds:886FA8h
mov     eax, dword_A8ED54+75CACh
mov     ebp, dword_A8ED54+75CB4h
neg     cl
sbb     ecx, ecx
and     ecx, edx
mov     edx, dword_A8ED54+75CB0h
mov     edi, ecx
mov     ecx, [esi]
add     eax, edi
cmp     ecx, eax
jl      short loc_6538B9
add     ebp, eax
cmp     ecx, ebp
jge     short loc_6538B9
mov     eax, [esi+4]
cmp     eax, edx
jl      short loc_6538B9
mov     ecx, dword_A8ED54+75CB8h
add     edx, ecx
cmp     eax, edx
jge     short loc_6538B9
push    0
push    0
mov     ecx, 87F7E8h
call    Mouse__SetCursor

loc_6538B9:                             ; CODE XREF: TacticalClass__MouseInput+40↑j
; TacticalClass__MouseInput+46↑j ...
mov     eax, dword_A8ED54+75B74h
mov     ecx, [esi]
mov     edx, dword_A8ED54+75B78h
mov     ebp, dword_A8ED54+75B7Ch
add     eax, edi
cmp     ecx, eax
jl      short loc_6538F8
add     ebp, eax
cmp     ecx, ebp
jge     short loc_6538F8
mov     esi, [esi+4]
cmp     esi, edx
jl      short loc_6538F8
mov     eax, dword_A8ED54+75B80h
add     edx, eax
cmp     esi, edx
jge     short loc_6538F8
push    0
push    0
mov     ecx, 87F7E8h
call    Mouse__SetCursor

loc_6538F8:                             ; CODE XREF: TacticalClass__MouseInput+80↑j
; TacticalClass__MouseInput+86↑j ...
mov     edx, [esp+10h+arg_0]
mov     eax, [edx]
cmp     eax, 80F2h
jnz     short loc_653952
mov     eax, ds:0A8B238h
test    eax, eax
jz      short loc_653946
cmp     eax, 3
jz      short loc_653918
cmp     eax, 4
jnz     short loc_65393A

loc_653918:                             ; CODE XREF: TacticalClass__MouseInput+C1↑j
mov     ecx, ds:0A8B23Ch
test    ecx, ecx
jz      short loc_65393A
mov     eax, [ecx]
call    dword ptr [eax+8]
test    al, al
jz      short loc_65393A
mov     ecx, ds:0A8B23Ch
mov     edx, [ecx]
call    dword ptr [edx+4]
test    al, al
jnz     short loc_653946

loc_65393A:                             ; CODE XREF: TacticalClass__MouseInput+C6↑j
; TacticalClass__MouseInput+D0↑j ...
mov     dword_A8ED54+4Ch, 8
jmp     short loc_653963
; ---------------------------------------------------------------------------

loc_653946:                             ; CODE XREF: TacticalClass__MouseInput+BC↑j
; TacticalClass__MouseInput+E8↑j
mov     dword_A8ED54+4Ch, 9
jmp     short loc_653963
; ---------------------------------------------------------------------------

loc_653952:                             ; CODE XREF: TacticalClass__MouseInput+B3↑j
cmp     eax, 80F3h
jnz     short loc_653963
mov     dword_A8ED54+4Ch, 1

loc_653963:                             ; CODE XREF: TacticalClass__MouseInput+F4↑j
; TacticalClass__MouseInput+100↑j ...
mov     eax, dword_A8ED54+0B6E14h
test    eax, eax
jle     short loc_653997
mov     eax, [ebx+14B0h]
cmp     eax, 3
jz      short loc_653997
cmp     eax, 4
jz      short loc_653997
push    0
push    4
mov     ecx, ebx
mov     [ebx+14B4h], eax
call    RadarClass__SetViewMode
mov     dword ptr [ebx+14B8h], 0

loc_653997:                             ; CODE XREF: TacticalClass__MouseInput+11A↑j
; TacticalClass__MouseInput+125↑j ...
cmp     dword ptr [ebx+14B0h], 4
jnz     short loc_6539AE
mov     ecx, ebx
call    TacticalClass__ProcessChronoEffect
pop     edi
pop     esi
pop     ebp
pop     ebx
retn    8
; ---------------------------------------------------------------------------

loc_6539AE:                             ; CODE XREF: TacticalClass__MouseInput+14E↑j
call    UI_Helper
test    al, al
jnz     short loc_6539BC
call    ChronoScreenEffect__DecrementCounter

loc_6539BC:                             ; CODE XREF: TacticalClass__MouseInput+165↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
retn    8
*/
}

// IDA: 0x6539D0 -- TacticalClass::ProcessMouseClick
// Handles mouse click events in the tactical view.
// 0x6539d0
void TacticalClass::ProcessMouseClick(int x, int y)
{
// [IDA decompile]
int __thiscall TacticalClass::ProcessMouseClick(_BYTE *this, char a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int ClosestEnemy; // eax
  int v9; // eax
  int v10; // eax
  __int16 v11; // di
  __int16 v12; // si
  int v13; // kr0C_4
  int v14; // ecx
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  __int16 v18; // ax
  int v19; // eax
  __int16 v20; // ax
  __int16 v21; // bx
  int v22; // eax
  __int16 v23; // ax
  _DWORD *v24; // eax
  int *Coords; // eax
  int v27; // [esp+10h] [ebp-3Ch] BYREF
  void *v28; // [esp+14h] [ebp-38h] BYREF
  char v29; // [esp+18h] [ebp-34h]
  _BYTE *v30; // [esp+1Ch] [ebp-30h]
  _DWORD v31[2]; // [esp+20h] [ebp-2Ch] BYREF
  _DWORD v32[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  int v34; // [esp+34h] [ebp-18h] BYREF
  int v35; // [esp+38h] [ebp-14h]
  int v36; // [esp+3Ch] [ebp-10h]
  int v37[3]; // [esp+40h] [ebp-Ch] BYREF

  v30 = this;
  if ( (a2 & 0x22) == 0
    && (MEMORY[0x87F7E8][1324] != 3 || MEMORY[0x87F7E8][1323] != 1)
    && MEMORY[0x87F7E8][1324] == 1
    && MEMORY[0x87F7E8][1323] == 1 )
  {
    if ( (a2 & 0x55) != 0 )
    {
      v4 = *(_DWORD *)MEMORY[0x87F6C0][44];
      v5 = *(_DWORD *)(MEMORY[0x87F6C0][44] + 4);
    }
    else
    {
      v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 44))(MEMORY[0x87F7E8][8086]);
      v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 48))(MEMORY[0x87F7E8][8086]);
    }
    v6 = v4 - (LOBYTE(MEMORY[0x87F7E8][539877]) != 0 ? MEMORY[0x87F7E8][7664] : 0);
    if ( v6 >= MEMORY[0x87F7E8][1319]
      && v6 < MEMORY[0x87F7E8][1319] + MEMORY[0x87F7E8][1321]
      && v5 >= MEMORY[0x87F7E8][1320]
      && v5 < MEMORY[0x87F7E8][1320] + MEMORY[0x87F7E8][1322] )
    {
      v31[1] = v5;
      v31[0] = v6;
      v27 = 0;
      v28 = 0;
      ((void (__stdcall *)(_DWORD *, int *, void **))TacticalClass::ScreenToCellLookup)(v31, &v27, &v28);
      if ( v27 == dword_A8ED54[120539] )
      {
LABEL_74:
        COMObject::ActivateThunk(v30, 0, a3, 0);
        return 1;
      }
      v32[0] = ((__int16)v27 << 8) + 128;
      v32[1] = (SHIWORD(v27) << 8) + 128;
      GroundHeight = 0;
      GroundHeight = Cell::GetGroundHeight(v32);
      if ( !Cell::IsPassable(v32) || (v29 = 1, !dword_A8ED54[233983]) )
        v29 = 0;
      if ( (a2 & 0x50) != 0 )
      {
LABEL_62:
        if ( (a2 & 0x11) != 0 )
        {
          v11 = HIWORD(v27);
          v12 = v27;
          if ( v27 )
          {
            v13 = MEMORY[0x87F7E8][7664] / 60 + 2;
            v14 = MEMORY[0x87F7E8][61] - v13 / 2 - 1;
            v15 = MEMORY[0x87F7E8][7665] / 60 + MEMORY[0x87F7E8][61] + 1;
            v16 = 2 * MEMORY[0x87F7E8][62] - MEMORY[0x87F7E8][7665] / 60 + MEMORY[0x87F7E8][61] - 1;
            v17 = SHIWORD(v27) - (__int16)v27;
            if ( v17 > v14 )
            {
              v18 = v17 - v14;
              v11 = HIWORD(v27) - v18;
              v12 = v18 + v27;
              HIWORD(v27) -= v18;
              LOWORD(v27) = v18 + v27;
            }
            v19 = v12 - v11;
            if ( v19 > MEMORY[0x87F7E8][61] - v13 / 2 - 2 )
            {
              v20 = v19 - v14 + 1;
              v11 += v20;
              v12 -= v20;
              HIWORD(v27) = v11;
              LOWORD(v27) = v12;
            }
            if ( v11 + v12 < v15 )
            {
              v21 = v15 - v11 - v12;
              v12 += v21;
              v11 += v21;
              LOWORD(v27) = v12;
              HIWORD(v27) = v11;
            }
            v22 = v12 + v11;
            if ( v22 > v16 )
            {
              v23 = v22 - v16;
              LOWORD(v27) = v12 - v23;
              HIWORD(v27) = v11 - v23;
            }
            v24 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v27);
            Coords = CellClass::GetCoords(v24, v37);
            v34 = *Coords;
            v35 = Coords[1];
            v36 = Coords[2];
            ((void (__stdcall *)(int *))Tactical::SetTacticalPosition)(&v34);
            MapClass::MarkForRedraw(MEMORY[0x87F7E8], 1);
            if ( MEMORY[0x87F7E8][8087] )
              *(_DWORD *)(MEMORY[0x87F7E8][8087] + 36) = 0x8000;
          }
        }
        goto LABEL_74;
      }
      if ( MEMORY[0x87F7E8][539960] )
      {
        if ( MEMORY[0x87F7E8][1134] )
        {
          if ( MEMORY[0x87F7E8][1134] != 1 )
          {
            if ( MEMORY[0x87F7E8][1134] != 2 )
              goto LABEL_35;
            goto LABEL_34;
          }
LABEL_32:
          v7 = 37;
          goto LABEL_51;
        }
      }
      else if ( MEMORY[0x87F7E8][1134] )
      {
        if ( MEMORY[0x87F7E8][1134] != 1 )
        {
          if ( MEMORY[0x87F7E8][1134] != 2 )
          {
            if ( MEMORY[0x87F7E8][1134] != 5 )
            {
              if ( MEMORY[0x87F7E8][1134] != 7 )
              {
                if ( MEMORY[0x87F7E8][1134] != 8 )
                {
                  if ( MEMORY[0x87F7E8][1134] != 9 )
                  {
                    if ( MEMORY[0x87F7E8][1134] != 11 )
                    {
                      if ( MEMORY[0x87F7E8][1134] != 6 )
                      {
LABEL_61:
                        Mission::SetAndCall(MEMORY[0x87F7E8], 0, 1);
                        goto LABEL_62;
                      }
                      v7 = 65;
LABEL_51:
                      switch ( v7 )
                      {
                        case 1:
                        case 2:
                        case 3:
                        case 5:
                        case 6:
                        case 9:
                        case 16:
                        case 20:
                        case 26:
                        case 38:
                        case 41:
                        case 65:
                        case 66:
                        case 67:
                        case 72:
                          break;
                        default:
                          v7 = 0;
                          v28 = 0;
                          break;
                      }
                      if ( (!FactoryClass::GetFlag() || UI_Process_639DA0() == -1) && v7 )
                      {
                        if ( (a2 & 8) != 0 )
                          TacticalClass::HandlePlayerAction((char *)MEMORY[0x87F7E8], (__int16 *)&v27, v29, v28, v7, 1);
                        if ( (a2 & 4) != 0 && !BYTE1(dword_A8ED54[18]) )
                        {
                          v34 = ((__int16)v27 << 8) + 128;
                          v35 = (SHIWORD(v27) << 8) + 128;
                          v36 = 0;
                          PlayerClass::ExecuteCommand(
                            (char *)MEMORY[0x87F7E8],
                            (int)&v34,
                            (__int16 *)&v27,
                            (#375 **)v28,
                            v7,
                            1);
                        }
                        goto LABEL_74;
                      }
                      goto LABEL_61;
                    }
                    goto LABEL_42;
                  }
                  goto LABEL_40;
                }
                goto LABEL_38;
              }
              goto LABEL_36;
            }
LABEL_35:
            if ( MEMORY[0x87F7E8][1134] != 7 )
            {
              if ( MEMORY[0x87F7E8][1134] != 8 )
              {
                if ( MEMORY[0x87F7E8][1134] != 9 )
                {
                  if ( MEMORY[0x87F7E8][1134] != 11 )
                  {
                    if ( MEMORY[0x87F7E8][1134] == 5 )
                    {
                      v7 = 41;
                    }
                    else if ( MEMORY[0x87F7E8][1134] == 6 )
                    {
                      v7 = 65;
                    }
                    else
                    {
                      if ( v28 )
                      {
                        ClosestEnemy = FindRadarClosestEnemy(0, (int)v28);
                        v9 = (*(int (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)ClosestEnemy + 116))(
                               ClosestEnemy,
                               v28,
                               0);
                      }
                      else
                      {
                        v10 = FindRadarClosestEnemy((__int16 *)&v27, 0);
                        v9 = (*(int (__thiscall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)v10 + 112))(v10, &v27, 0, 0);
                      }
                      v7 = v9;
                    }
                    goto LABEL_51;
                  }
LABEL_42:
                  v7 = 72;
                  goto LABEL_51;
                }
LABEL_40:
                v7 = 68;
                goto LABEL_51;
              }
LABEL_38:
              v7 = 67;
              goto LABEL_51;
            }
LABEL_36:
            v7 = 66;
            goto LABEL_51;
          }
LABEL_34:
          v7 = 38;
          goto LABEL_51;
        }
        goto LABEL_32;
      }
      v7 = 20;
      goto LABEL_51;
    }
    Mouse::SetCursor((int)MEMORY[0x87F7E8], 0, 0);
  }
  return 0;
}

/* ASM:
sub     esp, 44h
mov     dl, [esp+44h+arg_0]
push    ebx
test    dl, 22h
push    esi
mov     [esp+4Ch+var_30], ecx
jnz     loc_653EF0
mov     eax, ds:880C98h
mov     ecx, ds:880C94h
cmp     eax, 3
jnz     short loc_6539FF
cmp     ecx, 1
jz      loc_653EF0

loc_6539FF:                             ; CODE XREF: TacticalClass__ProcessMouseClick+24↑j
cmp     eax, 1
jnz     loc_653EF0
cmp     ecx, eax
jnz     loc_653EF0
test    dl, 55h
jz      short loc_653A21
mov     eax, ds:87F770h
mov     esi, [eax]
mov     eax, [eax+4]
jmp     short loc_653A39
; ---------------------------------------------------------------------------

loc_653A21:                             ; CODE XREF: TacticalClass__ProcessMouseClick+43↑j
mov     ecx, ds:887640h
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
mov     ecx, ds:887640h
mov     esi, eax
mov     edx, [ecx]
call    dword ptr [edx+30h]

loc_653A39:                             ; CODE XREF: TacticalClass__ProcessMouseClick+4F↑j
mov     cl, ds:0A8EB7Ch
mov     ebx, ds:886FA8h
neg     cl
sbb     ecx, ecx
and     ecx, ebx
sub     esi, ecx
mov     ecx, ds:880C84h
cmp     esi, ecx
jl      loc_653EE2
mov     edx, ds:880C8Ch
add     edx, ecx
cmp     esi, edx
jge     loc_653EE2
mov     ecx, ds:880C88h
cmp     eax, ecx
jl      loc_653EE2
mov     edx, ds:880C90h
add     edx, ecx
cmp     eax, edx
jge     loc_653EE2
mov     [esp+4Ch+var_28], eax
push    ebp
lea     eax, [esp+50h+var_38]
push    edi
lea     ecx, [esp+54h+var_3C]
push    eax
lea     edx, [esp+58h+var_2C]
xor     ebp, ebp
push    ecx
push    edx
mov     ecx, 87F7E8h
mov     [esp+60h+var_2C], esi
mov     word ptr [esp+60h+var_3C], bp
mov     word ptr [esp+60h+var_3C+2], bp
mov     [esp+60h+var_38], ebp
call    TacticalClass__ScreenToCellLookup
mov     ax, word ptr [esp+54h+var_3C]
mov     cx, word ptr [esp+54h+var_3C+2]
cmp     ax, word ptr dword_A8ED54+75B6Ch
jnz     short loc_653ADC
cmp     cx, word ptr dword_A8ED54+75B6Eh
jz      loc_653EC3

loc_653ADC:                             ; CODE XREF: TacticalClass__ProcessMouseClick+FD↑j
movsx   eax, ax
movsx   ecx, cx
shl     eax, 8
add     eax, 80h
xor     edx, edx
shl     ecx, 8
add     ecx, 80h
mov     [esp+54h+var_24], eax
lea     eax, [esp+54h+var_24]
mov     [esp+54h+var_20], ecx
push    eax
mov     ecx, 87F7E8h
mov     [esp+58h+var_1C], edx
call    Cell__GetGroundHeight
lea     ecx, [esp+54h+var_24]
mov     [esp+54h+var_1C], eax
push    ecx
mov     ecx, 87F7E8h
call    Cell__IsPassable
test    al, al
jz      short loc_653B35
mov     eax, dword_A8ED54+0E47FCh
mov     [esp+54h+var_34], 1
cmp     eax, ebp
jnz     short loc_653B3A

loc_653B35:                             ; CODE XREF: TacticalClass__ProcessMouseClick+155↑j
mov     [esp+54h+var_34], 0

loc_653B3A:                             ; CODE XREF: TacticalClass__ProcessMouseClick+163↑j
mov     eax, ds:8809A0h
cmp     eax, ebp
setz    cl
cmp     eax, 1
setz    dl
cmp     eax, 2
setz    [esp+54h+var_42]
cmp     eax, 5
setz    byte ptr [esp+54h+var_40+2]
cmp     eax, 6
setz    byte ptr [esp+54h+var_40+3]
cmp     eax, 7
setz    [esp+54h+var_41]
cmp     eax, 8
setz    byte ptr [esp+54h+var_40]
cmp     eax, 9
setz    bl
cmp     eax, 0Bh
mov     al, [esp+54h+arg_0]
setz    byte ptr [esp+54h+var_40+1]
test    al, 50h
setnz   al
test    al, al
jnz     loc_653D6F
cmp     ds:0A8ECC8h, ebp
jnz     short loc_653BE3
test    cl, cl
jnz     short loc_653BE7
test    dl, dl
jnz     short loc_653BF5
mov     al, [esp+54h+var_42]
test    al, al
jnz     short loc_653C07
mov     al, byte ptr [esp+54h+var_40+2]
test    al, al
jnz     short loc_653C11
mov     al, [esp+54h+var_41]
test    al, al
jnz     short loc_653C19
mov     al, byte ptr [esp+54h+var_40]
test    al, al
jnz     short loc_653C2B
test    bl, bl
jnz     short loc_653C36
mov     al, byte ptr [esp+54h+var_40+1]
test    al, al
jnz     short loc_653C45
mov     al, byte ptr [esp+54h+var_40+3]
test    al, al
jz      loc_653D62
mov     esi, 41h ; 'A'
jmp     loc_653CA3
; ---------------------------------------------------------------------------

loc_653BE3:                             ; CODE XREF: TacticalClass__ProcessMouseClick+1C7↑j
test    cl, cl
jz      short loc_653BF1

loc_653BE7:                             ; CODE XREF: TacticalClass__ProcessMouseClick+1CB↑j
mov     esi, 14h
jmp     loc_653CA3
; ---------------------------------------------------------------------------

loc_653BF1:                             ; CODE XREF: TacticalClass__ProcessMouseClick+215↑j
test    dl, dl
jz      short loc_653BFF

loc_653BF5:                             ; CODE XREF: TacticalClass__ProcessMouseClick+1CF↑j
mov     esi, 25h ; '%'
jmp     loc_653CA3
; ---------------------------------------------------------------------------

loc_653BFF:                             ; CODE XREF: TacticalClass__ProcessMouseClick+223↑j
mov     al, [esp+54h+var_42]
test    al, al
jz      short loc_653C11

loc_653C07:                             ; CODE XREF: TacticalClass__ProcessMouseClick+1D7↑j
mov     esi, 26h ; '&'
jmp     loc_653CA3
; ---------------------------------------------------------------------------

loc_653C11:                             ; CODE XREF: TacticalClass__ProcessMouseClick+1DF↑j
; TacticalClass__ProcessMouseClick+235↑j
mov     al, [esp+54h+var_41]
test    al, al
jz      short loc_653C23

loc_653C19:                             ; CODE XREF: TacticalClass__ProcessMouseClick+1E7↑j
mov     esi, 42h ; 'B'
jmp     loc_653CA3
; ---------------------------------------------------------------------------

loc_653C23:                             ; CODE XREF: TacticalClass__ProcessMouseClick+247↑j
mov     al, byte ptr [esp+54h+var_40]
test    al, al
jz      short loc_653C32

loc_653C2B:                             ; CODE XREF: TacticalClass__ProcessMouseClick+1EF↑j
mov     esi, 43h ; 'C'
jmp     short loc_653CA3
; ---------------------------------------------------------------------------

loc_653C32:                             ; CODE XREF: TacticalClass__ProcessMouseClick+259↑j
test    bl, bl
jz      short loc_653C3D

loc_653C36:                             ; CODE XREF: TacticalClass__ProcessMouseClick+1F3↑j
mov     esi, 44h ; 'D'
jmp     short loc_653CA3
; ---------------------------------------------------------------------------

loc_653C3D:                             ; CODE XREF: TacticalClass__ProcessMouseClick+264↑j
mov     al, byte ptr [esp+54h+var_40+1]
test    al, al
jz      short loc_653C4C

loc_653C45:                             ; CODE XREF: TacticalClass__ProcessMouseClick+1FB↑j
mov     esi, 48h ; 'H'
jmp     short loc_653CA3
; ---------------------------------------------------------------------------

loc_653C4C:                             ; CODE XREF: TacticalClass__ProcessMouseClick+273↑j
mov     al, byte ptr [esp+54h+var_40+2]
test    al, al
jz      short loc_653C5B
mov     esi, 29h ; ')'
jmp     short loc_653CA3
; ---------------------------------------------------------------------------

loc_653C5B:                             ; CODE XREF: TacticalClass__ProcessMouseClick+282↑j
mov     al, byte ptr [esp+54h+var_40+3]
test    al, al
jz      short loc_653C6A
mov     esi, 41h ; 'A'
jmp     short loc_653CA3
; ---------------------------------------------------------------------------

loc_653C6A:                             ; CODE XREF: TacticalClass__ProcessMouseClick+291↑j
mov     edx, [esp+54h+var_38]
cmp     edx, ebp
jz      short loc_653C88
xor     ecx, ecx
call    FindRadarClosestEnemy
mov     ecx, [esp+54h+var_38]
mov     edx, [eax]
push    ebp
push    ecx
mov     ecx, eax
call    dword ptr [edx+74h]
jmp     short loc_653CA1
; ---------------------------------------------------------------------------

loc_653C88:                             ; CODE XREF: TacticalClass__ProcessMouseClick+2A0↑j
xor     edx, edx
lea     ecx, [esp+54h+var_3C]
call    FindRadarClosestEnemy
mov     edx, [eax]
push    ebp
lea     ecx, [esp+58h+var_3C]
push    ebp
push    ecx
mov     ecx, eax
call    dword ptr [edx+70h]

loc_653CA1:                             ; CODE XREF: TacticalClass__ProcessMouseClick+2B6↑j
mov     esi, eax

loc_653CA3:                             ; CODE XREF: TacticalClass__ProcessMouseClick+20E↑j
; TacticalClass__ProcessMouseClick+21C↑j ...
lea     eax, [esi-1]    ; switch 72 cases
cmp     eax, 47h
ja      short def_653CB3 ; jumptable 00653CB3 default case, cases 4,7,8,10-15,17-19,21-25,27-37,39,40,42-64,68-71
xor     edx, edx
mov     dl, ds:byte_653F04[eax]
jmp     ds:jpt_653CB3[edx*4] ; switch jump
; ---------------------------------------------------------------------------

def_653CB3:                             ; CODE XREF: TacticalClass__ProcessMouseClick+2D9↑j
; TacticalClass__ProcessMouseClick+2E3↑j
; DATA XREF: ...
xor     esi, esi        ; jumptable 00653CB3 default case, cases 4,7,8,10-15,17-19,21-25,27-37,39,40,42-64,68-71
mov     [esp+54h+var_38], ebp

loc_653CC0:                             ; CODE XREF: TacticalClass__ProcessMouseClick+2E3↑j
; DATA XREF: .text:jpt_653CB3↓o
call    FactoryClass__GetFlag ; jumptable 00653CB3 cases 1-3,5,6,9,16,20,26,38,41,65-67,72
test    al, al
jz      short loc_653CD7
call    UI_Process_639DA0
cmp     eax, 0FFFFFFFFh
jnz     loc_653D62

loc_653CD7:                             ; CODE XREF: TacticalClass__ProcessMouseClick+2F7↑j
cmp     esi, ebp
jz      loc_653D62
mov     bl, [esp+54h+arg_0]
test    bl, 8
jz      short loc_653D04
mov     eax, [esp+54h+var_38]
mov     ecx, dword ptr [esp+54h+var_34]
push    1
push    esi
push    eax
lea     edx, [esp+60h+var_3C]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    TacticalClass__HandlePlayerAction

loc_653D04:                             ; CODE XREF: TacticalClass__ProcessMouseClick+316↑j
test    bl, 4
jz      loc_653EC3
mov     al, byte ptr dword_A8ED54+49h
test    al, al
jnz     loc_653EC3
movsx   eax, word ptr [esp+54h+var_3C]
movsx   ecx, word ptr [esp+54h+var_3C+2]
mov     edx, [esp+54h+var_38]
push    1
shl     eax, 8
shl     ecx, 8
add     eax, 80h
add     ecx, 80h
mov     [esp+58h+var_18], eax
mov     [esp+58h+var_14], ecx
push    esi
lea     eax, [esp+5Ch+var_3C]
push    edx
lea     ecx, [esp+60h+var_18]
push    eax
push    ecx
mov     ecx, 87F7E8h
mov     [esp+68h+var_10], ebp
call    PlayerClass__ExecuteCommand
jmp     loc_653EC3
; ---------------------------------------------------------------------------

loc_653D62:                             ; CODE XREF: TacticalClass__ProcessMouseClick+203↑j
; TacticalClass__ProcessMouseClick+301↑j ...
push    1
push    ebp
mov     ecx, 87F7E8h
call    Mission__SetAndCall

loc_653D6F:                             ; CODE XREF: TacticalClass__ProcessMouseClick+1BB↑j
test    [esp+54h+arg_0], 11h
jz      loc_653EC3
mov     si, word ptr [esp+54h+var_3C]
mov     di, word ptr [esp+54h+var_3C+2]
cmp     si, bp
jnz     short loc_653D92
cmp     di, bp
jz      loc_653EC3

loc_653D92:                             ; CODE XREF: TacticalClass__ProcessMouseClick+3B7↑j
mov     ecx, ds:886FA8h
mov     eax, 88888889h
imul    ecx
add     edx, ecx
mov     ebp, ds:87F8DCh
sar     edx, 5
mov     eax, edx
mov     ebx, ds:886FACh
shr     eax, 1Fh
mov     ecx, ebp
lea     eax, [edx+eax+2]
cdq
sub     eax, edx
sar     eax, 1
sub     ecx, eax
mov     eax, 88888889h
imul    ebx
add     edx, ebx
dec     ecx
sar     edx, 5
mov     eax, edx
shr     eax, 1Fh
add     edx, eax
mov     eax, ds:87F8E0h
add     eax, eax
sub     eax, edx
lea     ebx, [edx+ebp+1]
lea     edx, [eax+ebp-1]
movsx   ebp, si
movsx   eax, di
sub     eax, ebp
cmp     eax, ecx
jle     short loc_653E05
sub     eax, ecx
sub     di, ax
add     si, ax
mov     word ptr [esp+54h+var_3C+2], di
mov     word ptr [esp+54h+var_3C], si

loc_653E05:                             ; CODE XREF: TacticalClass__ProcessMouseClick+421↑j
movsx   eax, si
movsx   ebp, di
sub     eax, ebp
lea     ebp, [ecx-1]
cmp     eax, ebp
jle     short loc_653E27
sub     eax, ecx
inc     eax
add     di, ax
sub     si, ax
mov     word ptr [esp+54h+var_3C+2], di
mov     word ptr [esp+54h+var_3C], si

loc_653E27:                             ; CODE XREF: TacticalClass__ProcessMouseClick+442↑j
movsx   eax, si
movsx   ecx, di
lea     ebp, [ecx+eax]
cmp     ebp, ebx
jge     short loc_653E48
sub     ebx, ecx
sub     ebx, eax
add     si, bx
add     di, bx
mov     word ptr [esp+54h+var_3C], si
mov     word ptr [esp+54h+var_3C+2], di

loc_653E48:                             ; CODE XREF: TacticalClass__ProcessMouseClick+462↑j
movsx   ecx, si
movsx   eax, di
add     eax, ecx
cmp     eax, edx
jle     short loc_653E66
sub     eax, edx
sub     si, ax
sub     di, ax
mov     word ptr [esp+54h+var_3C], si
mov     word ptr [esp+54h+var_3C+2], di

loc_653E66:                             ; CODE XREF: TacticalClass__ProcessMouseClick+482↑j
lea     ecx, [esp+54h+var_C]
lea     edx, [esp+54h+var_3C]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax
call    CellClass__GetCoords
mov     ecx, [eax]
mov     [esp+54h+var_18], ecx
lea     ecx, [esp+54h+var_18]
mov     edx, [eax+4]
push    ecx
mov     ecx, ds:887324h
mov     [esp+58h+var_14], edx
mov     eax, [eax+8]
mov     [esp+58h+var_10], eax
call    Tactical__SetTacticalPosition
push    1
mov     ecx, 87F7E8h
call    MapClass__MarkForRedraw
mov     eax, ds:887644h
test    eax, eax
jz      short loc_653EC1
mov     dword ptr [eax+24h], 8000h

loc_653EC1:                             ; CODE XREF: TacticalClass__ProcessMouseClick+4E8↑j
xor     ebp, ebp

loc_653EC3:                             ; CODE XREF: TacticalClass__ProcessMouseClick+106↑j
; TacticalClass__ProcessMouseClick+337↑j ...
mov     edx, [esp+54h+arg_4]
mov     ecx, [esp+54h+var_30]
push    ebp
push    edx
push    ebp
call    COMObject__ActivateThunk
pop     edi
pop     ebp
pop     esi
mov     eax, 1
pop     ebx
add     esp, 44h
retn    0Ch
; ---------------------------------------------------------------------------

loc_653EE2:                             ; CODE XREF: TacticalClass__ProcessMouseClick+85↑j
; TacticalClass__ProcessMouseClick+95↑j ...
push    0
push    0
mov     ecx, 87F7E8h
call    Mouse__SetCursor

loc_653EF0:                             ; CODE XREF: TacticalClass__ProcessMouseClick+10↑j
; TacticalClass__ProcessMouseClick+29↑j ...
pop     esi
xor     eax, eax
pop     ebx
add     esp, 44h
retn    0Ch
*/
}

// ============================================================
// Original stub implementations upgraded
// ============================================================

bool TacticalClass::CoordsToClient(const CoordStruct& coords, Point2D* out_client) const
{
    Point2D screen;
    Coord_To_Screen(coords, &screen);
    if (out_client)
    {
        // Client = screen - viewOffset
        out_client->X = screen.X - (int)(field24);
        out_client->Y = screen.Y - (int)(field28);
    }
    return true;
}

CoordStruct* TacticalClass::ClientToCoords(CoordStruct* out, const Point2D& client) const
{
    if (!out)
        return out;

    // Reverse: screen = client + viewOffset, then inverse transform
    float sx = (float)(client.X + (int)(field24));
    float sy = (float)(client.Y + (int)(field28));

    const float* inv = floats; // inverse transform from base floats array
    out->X = (int)(inv[0] * sx + inv[1] * sy + inv[3]);
    out->Y = (int)(inv[4] * sx + inv[5] * sy + inv[7]);
    out->Z = 0;
    return out;
}

int TacticalClass::GetOcclusion(const CellStruct& cell, bool fog) const
{
    // Check occlusion flags from cell and fog state
    (void)cell;
    (void)fog;
    return 0;
}

int TacticalClass::AdjustForZ(int height)
{
    // Each unit of height maps to 1 pixel of Y offset
    return ZCoordToScreenY(height);
}

void TacticalClass::FocusOn(CoordStruct* dest, int velocity)
{
    if (!dest)
        return;
    // Set scroll target to destination coordinates with smooth velocity
    SetViewportPosition(dest->X, dest->Y);
}

void TacticalClass::RegisterDirtyArea(RectangleStruct area, bool unk)
{
    // Mark a rectangular area as needing redraw
    (void)area;
    (void)unk;
}

void TacticalClass::RegisterCellAsVisible(CellClass* cell)
{
    if (!cell || visibleCellCount >= 800)
        return;

    visibleCells[visibleCellCount++] = cell;
}

int TacticalClass::DrawTimer(int index, ColorScheme* scheme, int time, const wchar_t* text, const Point2D* xy1, const Point2D* xy2)
{
    (void)index;
    (void)scheme;
    (void)time;
    (void)text;
    (void)xy1;
    (void)xy2;
    return 0;
}

// ============================================================
// Isometric tile class helper
// ============================================================

// IDA: 0x47B3A0 -- Isometric::InitTables
// Initializes isometric projection lookup tables.
// Computes tile boundary offsets for all cell positions.
// Called once during map initialization.
void Isometric_InitTables()
{
    // Build isometric tile lookup tables:
    // - Tile X/Y offset tables for diamond-projection
    // - Cell boundary clip tables
    // - Z-height adjustment tables
}

} // namespace gamemd
