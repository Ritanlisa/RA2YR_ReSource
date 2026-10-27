// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
#include "system/map.hpp"
#include "render/display.hpp"  // x145b: DisplayClass::ProcessCellReveal supply
#include "misc/misc_ext.hpp"  // x145b: Conditions::CheckResult3 supply
#include "misc/rules.hpp"  // x145b: RulesClass ElevationBonusCap/IncrementBonus
#include "e4/classes/HouseClass_e4.hpp"
#include "system/cell.hpp"

#include <cstring>
#include "core/globals_core.hpp"
#include "e4/e4_globals_decls.hpp"
#include "e4/e4_globals_decls.hpp"
#include "core/globals_core.hpp"
#include "core/globals_core.hpp"
#include "e4/e4_globals_decls.hpp"
#include "e4/e4_globals_decls.hpp"
#include "system/globals_system.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"

// [x87] C3861 declaration supply (signals@0x6d20e0)
namespace gamemd { __int64 ZCoordToScreenY(int p0); }

namespace gamemd
{

MapClass::MapClass() noexcept
    : unknown10(0)
    , unknownPointer14(nullptr)
    , MapClass_field_4C(0)
    , zoneConnections(nullptr)
    , zoneConnectionCount(0)
    , zoneConnectionCapacity(0)
    , unknownArray68(nullptr)
    , numItemsIn68(0)
    , unknown70(0)
    , unknown74(0)
    , spawnStatus(0)
    , visibilityFlags(0)
    , subzoneTracking1(nullptr)
    , subzoneTracking1Count(0)
    , subzoneTracking1Capacity(0)
    , subzoneTracking2(nullptr)
    , subzoneTracking2Count(0)
    , subzoneTracking2Capacity(0)
    , subzoneTracking3(nullptr)
    , subzoneTracking3Count(0)
    , subzoneTracking3Capacity(0)
    , cellStructs1(nullptr)
    , cellStructs1Count(0)
    , cellStructs1Capacity(0)
    , cellIteratorNextX(0)
    , cellIteratorNextY(0)
    , cellIteratorCurrentY(0)
    , cellIteratorNextCell(nullptr)
    , MapClass_field_11C(0)
    , unknown120(0)
    , unknown134(0)
    , cells(nullptr)
    , cellsCount(0)
    , cellsCapacity(0)
    , maxWidth(0)
    , maxHeight(0)
    , maxNumCells(0)
    , padding01(0)
    , padding02(0)
    , taggedCells(nullptr)
    , taggedCellsCount(0)
    , taggedCellsCapacity(0)
{
    std::memset(unknownPointerArray18, 0, sizeof(unknownPointerArray18));
    std::memset(unknown80, 0, sizeof(unknown80));
    std::memset(&mapRect, 0, sizeof(mapRect));
    std::memset(&visibleRect, 0, sizeof(visibleRect));
    std::memset(&mapCoordBounds, 0, sizeof(mapCoordBounds));
    std::memset(crates, 0, sizeof(crates));
}

// TODO: complete implementation

CellClass* MapClass::TryGetCellAt(const CellStruct& map_coords) const
{
    int idx = GetCellIndex((const gamemd::CellStruct &)(map_coords));
    if (idx >= 0 && idx < cellsCount && cells)
        return cells[idx];
    return nullptr;
}

CellClass* MapClass::TryGetCellAt(const CoordStruct& crd) const
{
    CellStruct cell = { (int16_t)(crd.X / 256), (int16_t)(crd.Y / 256) };
    return TryGetCellAt(cell);
}

CellClass* MapClass::GetCellAt(const CellStruct& map_coords) const
{
    return cells[GetCellIndex((const gamemd::CellStruct &)(map_coords))];
}

CellClass* MapClass::GetCellAt(const CoordStruct& crd) const
{
    CellStruct cell = { (int16_t)(crd.X / 256), (int16_t)(crd.Y / 256) };
    return GetCellAt(cell);
}

bool MapClass::CellExists(const CellStruct& map_coords) const
{
    int idx = GetCellIndex((const gamemd::CellStruct &)(map_coords));
    return idx >= 0 && idx < cellsCount && cells && cells[idx] != nullptr;
}

int MapClass::GetThreatPosed(const CellStruct& cell, HouseClass* house) const
{
    (void)cell;
    (void)house;
    return 0;
}

bool MapClass::IsLocationShrouded(const CoordStruct& crd) const
{
    auto* cell = TryGetCellAt(crd);
    if (!cell)
        return true;
    // TODO: check cell shroudedness
    (void)crd;
    return true;
}

CoordStruct* MapClass::GetRandomCoordsNear(CoordStruct& out, const CoordStruct& coords, int distance, bool center)
{
    // TODO: random coords within distance of center coords
    (void)coords;
    (void)distance;
    (void)center;
    out = {};
    return &out;
}

CoordStruct* MapClass::PickInfantrySublocation(CoordStruct& out, const CoordStruct& coords, bool ignore_contents)
{
    // TODO: pick valid infantry sub-cell position
    (void)coords;
    (void)ignore_contents;
    out = {};
    return &out;
}

void MapClass::CellIteratorReset()
{
    cellIteratorNextX = mapRect.X;
    cellIteratorNextY = mapRect.Y;
    cellIteratorCurrentY = mapRect.Y;
    cellIteratorNextCell = nullptr;
}

CellClass* MapClass::CellIteratorNext()
{
    // TODO: linear cell iterator over visible area
    return nullptr;
}

DamageAreaResult MapClass::DamageArea(const CoordStruct& coords, int damage, TechnoClass* source, WarheadTypeClass* wh, bool affects_tiberium, HouseClass* source_house)
{
    (void)coords;
    (void)damage;
    (void)source;
    (void)wh;
    (void)affects_tiberium;
    (void)source_house;
    return {};
}

AnimTypeClass* MapClass::SelectDamageAnimation(int damage, WarheadTypeClass* wh, LandType land_type, const CoordStruct& coords)
{
    (void)damage;
    (void)wh;
    (void)land_type;
    (void)coords;
    return nullptr;
}

void MapClass::FlashbangWarheadAt(int damage, WarheadTypeClass* wh, CoordStruct coords, bool force, int cl_disable_flags)
{
    (void)damage;
    (void)wh;
    (void)coords;
    (void)force;
    (void)cl_disable_flags;
}

int MapClass::GetTotalDamage(int damage, const WarheadTypeClass* warhead, Armor armor, int distance)
{
    (void)warhead;
    (void)armor;
    (void)distance;
    return damage;
}

int MapClass::GetCellFloorHeight(const CoordStruct& crd) const
{
    auto* cell = TryGetCellAt(crd);
    if (!cell)
        return 0;
    // TODO: return cell floor height
    (void)crd;
    return 0;
}

CellStruct* MapClass::PickCellOnEdge(CellStruct& buffer, Edge edge, const CellStruct& current_location, const CellStruct& fallback, SpeedType speed, bool validate_reachability, MovementZone mov_zone) const
{
    (void)edge;
    (void)current_location;
    (void)fallback;
    (void)speed;
    (void)validate_reachability;
    (void)mov_zone;
    buffer = {};
    return &buffer;
}

void MapClass::UpdatePathfinding1()
{
}

void MapClass::UpdatePathfinding2(const CellStruct* where, int count)
{
    (void)where;
    (void)count;
}

CellStruct* MapClass::PathfindingFind(CellStruct& out, const CellStruct& position, SpeedType speed, int a5, MovementZone mov_zone, bool alt, int space_size_x, int space_size_y, bool disallow_overlay, bool a11, bool require_burrowable, bool allow_bridge, const CellStruct& close_to, bool a15, bool buildable)
{
    (void)position;
    (void)speed;
    (void)a5;
    (void)mov_zone;
    (void)alt;
    (void)space_size_x;
    (void)space_size_y;
    (void)disallow_overlay;
    (void)a11;
    (void)require_burrowable;
    (void)allow_bridge;
    (void)close_to;
    (void)a15;
    (void)buildable;
    out = {};
    return &out;
}

void MapClass::AddContentAt(CellStruct* coords, TechnoClass* content)
{
    (void)coords;
    (void)content;
}

void MapClass::RemoveContentAt(CellStruct* coords, TechnoClass* content)
{
    (void)coords;
    (void)content;
}

bool MapClass::IsWithinUsableArea(const CellStruct& cell, bool check_level) const
{
    (void)cell;
    (void)check_level;
    return false;
}

bool MapClass::IsWithinUsableArea(CellClass* cell, bool check_level) const
{
    (void)cell;
    (void)check_level;
    return false;
}

bool MapClass::IsWithinUsableArea(const CoordStruct& coords) const
{
    (void)coords;
    return false;
}

bool MapClass::CoordinatesLegal(const CellStruct& cell) const
{
    return TryGetCellAt(cell) != nullptr;
}

// 0x5880a0
CoordStruct* MapClass::FindFirstFirestorm(CoordStruct* a1, const int* a2, const int* a3, const HouseClass* a4) const
{

  int v4; // ebx
  int v5; // edi
  __int16 v6; // di
  int v7; // esi
  unsigned int v8; // eax
  Cell *v9; // eax
  Cell *v10; // ecx
  unsigned int *v11; // eax
  const HouseClass *v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  __int16 v17; // bx
  unsigned __int16 i; // si
  unsigned int v19; // eax
  Cell *v20; // eax
  Cell *v21; // ecx
  unsigned int *v22; // eax
  const HouseClass *v23; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  double v28; // st7
  int v29; // edi
  int v30; // ecx
  Cell *v31; // ecx
  unsigned int *v32; // eax
  const HouseClass *v33; // eax
  __int64 v34; // [esp+Ch] [ebp-3Ch]
  int v35; // [esp+Ch] [ebp-3Ch]
  int v36; // [esp+10h] [ebp-38h]
  double v37; // [esp+10h] [ebp-38h]
  unsigned __int16 *v38; // [esp+10h] [ebp-38h]
  __int16 v39; // [esp+1Ch] [ebp-2Ch]
  int v40; // [esp+1Ch] [ebp-2Ch]
  int v41; // [esp+20h] [ebp-28h]
  int v42; // [esp+20h] [ebp-28h]
  int v43; // [esp+24h] [ebp-24h]
  double v44; // [esp+28h] [ebp-20h]
  double v45; // [esp+30h] [ebp-18h]
  double v46; // [esp+40h] [ebp-8h]

  v4 = *a3; /*0x5880b1*/
  v5 = *a2; /*0x5880b4*/
  if ( *a2 != *a3 || a2[1] != a3[1] || a2[2] != a3[2] )
  {
    (v34) = ((v34) & 0xFFFFFFFF00000000ull) | ((v5 / 256) & 0xFFFFFFFFull); /*0x5880f3*/
    (v34) = ((v34) & 0xFFFFFFFFull) | ((unsigned long long)((v4 / 256) & 0xFFFFFFFFull) << 32); /*0x5880f7*/
    if ( (unsigned __int16)(v5 / 256) == (unsigned __int16)(v4 / 256) )
    {
      (v34) = ((v34) & ~0xFFFF) | ((v5 / 256) & 0xFFFF); /*0x588104*/
      WORD1(v34) = a2[1] / 256; /*0x58811a*/
      v6 = (((v34) >> 16) & 0xFFFF); /*0x588138*/
      v7 = a3[1] / 256; /*0x588141*/
      v39 = (short)(((v34) >> 16) & 0xFFFF) >= (unsigned __int16)v7 ? -1 : 1;
      while ( (unsigned short)v34 != (((v34) >> 32) & 0xFFFF) || v6 != (unsigned short)v7 ) /*0x58815d*/
      {
        v8 = (__int16)v34 + (v6 << 9); /*0x58816c*/
        if ( v8 < 0x40000 && (v9 = *(Cell **)(dword_87F924 + 4 * v8)) != 0 ) /*0x588182*/
        {
          v10 = v9; /*0x588184*/
        }
        else
        {
          v10 = (Cell *)&unk_ABDC50; /*0x58818c*/
          dword_ABDC74 = v34; /*0x588191*/
        }
        v11 = (v10)->IsBridge(); /*0x588196*/
        if ( v11 ) /*0x58819d*/
        {
          if ( *(unsigned char *)(v11[328] + 5824) ) /*0x5881a5*/
          {
            v12 = *(const HouseClass **)((unsigned int *)v11 + 135); /*0x5881af*/
            if ( *(unsigned char *)(v12 + 506) ) /*0x5881b5*/
            {
              if ( v12 != a4 ) /*0x5881c2*/
              {
                v13 = (__int16)v34; /*0x5881d0*/
                goto LABEL_31; /*0x5881d3*/
              }
            }
          }
        }
        v6 += v39; /*0x5881c4*/
        (v34) = ((v34) & ~(0xFFFF << 16)) | (((v6) & 0xFFFF) << 16); /*0x5881c9*/
      }
    }
    else
    {
      v14 = a2[1]; /*0x5881d8*/
      v15 = a3[1]; /*0x5881ec*/
      v16 = v15 / 256; /*0x588202*/
      v41 = v15 / 256; /*0x588208*/
      if ( (unsigned __int16)(v14 / 256) == (unsigned __int16)(v15 / 256) )
      {
        (v34) = ((v34) & ~(0xFFFF << 16)) | (((v14 / 256) & 0xFFFF) << 16); /*0x588223*/
        v6 = (((v34) >> 16) & 0xFFFF); /*0x588234*/
        v17 = (__int16)v34 >= (short)(((v34) >> 32) & 0xFFFF) ? -1 : 1;
        for ( i = v34; ((i & 0xFFFFu) << 16 | (v16 & 0xFFFFu)) != *(unsigned int *)((char *)&v34 + 2); (v34) = ((v34) & ~0xFFFF) | ((i) & 0xFFFF)) /*0x58823d*/
        {
          v19 = (__int16)i + ((short)(((v34) >> 16) & 0xFFFF) << 9); /*0x588259*/
          if ( v19 < 0x40000 && (v20 = *(Cell **)(dword_87F924 + 4 * v19)) != 0 ) /*0x58826f*/
          {
            v21 = v20; /*0x588271*/
          }
          else
          {
            v21 = (Cell *)&unk_ABDC50; /*0x588279*/
            dword_ABDC74 = v34; /*0x58827e*/
          }
          v22 = (v21)->IsBridge(); /*0x588283*/
          if ( v22 ) /*0x58828a*/
          {
            if ( *(unsigned char *)(v22[328] + 5824) ) /*0x588292*/
            {
              v23 = *(const HouseClass **)((unsigned int *)v22 + 135); /*0x58829c*/
              if ( *(unsigned char *)(v23 + 506) ) /*0x5882a2*/
              {
                if ( v23 != a4 ) /*0x5882af*/
                {
                  v13 = (__int16)i; /*0x5882bf*/
LABEL_31:
                  a1->X = (v13 << 8) + 128; /*0x5882c2*/
                  a1->Y = (v6 << 8) + 128; /*0x5882e0*/
                  a1->Z = 0; /*0x5882e3*/
                  return a1; /*0x5882ec*/
                }
              }
            }
          }
          (v16) = ((v16) & ~0xFFFF) | ((v41) & 0xFFFF); /*0x5882b1*/
          i += v17; /*0x5882b5*/
        }
      }
      else
      {
        v43 = v5 >= v4 ? -256 : 256;
        v40 = v14 >= v15 ? -256 : 256;
        if ( v43 >= 0 ) /*0x588321*/
          v25 = v5 - v5 % 256 + 256; /*0x58834d*/
        else
          v25 = v5 - v5 % 256; /*0x588335*/
        v36 = v25; /*0x588352*/
        if ( v40 >= 0 ) /*0x58835e*/
          v26 = v14 - v14 % 256 + 256; /*0x58838e*/
        else
          v26 = v14 - v14 % 256; /*0x588372*/
        v35 = v26; /*0x588374*/
        v42 = v4 - v5; /*0x58839b*/
        v27 = v36; /*0x58839f*/
        v28 = (double)v42; /*0x5883a3*/
        v44 = (double)(v36 - v5) / v28; /*0x5883bb*/
        v37 = (double)(v15 - v14); /*0x5883c7*/
        v45 = (double)(v26 - v14) / v37; /*0x5883d1*/
        v46 = 1.0 / v37; /*0x5883ef*/
        while ( (v44 <= 1.0 || v45 <= 1.0) && v44 >= 0.0 && v45 >= 0.0 ) /*0x58843d*/
        {
          v29 = v35; /*0x588445*/
          v30 = v27 / 256 + ((v35 / 256) << 9); /*0x58846a*/
          if ( v30 < 0 || v30 >= dword_87F928 || (v31 = *(Cell **)(dword_87F924 + 4 * v30)) == 0 ) /*0x588481*/
          {
            LOWORD(v38) = v27 / 256; /*0x588483*/
            HIWORD(v38) = v35 / 256; /*0x588488*/
            v31 = (Cell *)&unk_ABDC50; /*0x588491*/
            dword_ABDC74 = (int)v38; /*0x588496*/
          }
          v32 = (v31)->IsBridge(); /*0x58849b*/
          if ( v32 ) /*0x5884a2*/
          {
            if ( *(unsigned char *)(v32[328] + 5824) ) /*0x5884aa*/
            {
              v33 = *(const HouseClass **)((unsigned int *)v32 + 135); /*0x5884b4*/
              if ( *(unsigned char *)(v33 + 506) ) /*0x5884ba*/
              {
                if ( v33 != a4 ) /*0x5884c7*/
                {
                  a1->X = v27; /*0x588528*/
                  a1->Y = v35; /*0x58852a*/
                  a1->Z = 0; /*0x58852d*/
                  return a1; /*0x588536*/
                }
              }
            }
          }
          if ( v44 >= v45 ) /*0x5884d6*/
          {
            v35 += v40; /*0x588505*/
            v45 = (double)(v40 + v29 - a2[1]) * v46; /*0x588518*/
          }
          else
          {
            v27 += v43; /*0x5884df*/
            v44 = (double)(v27 - *a2) * (1.0 / v28); /*0x5884f3*/
          }
        }
      }
    }
  }
  a1->X = dword_ABDC10; /*0x588547*/
  a1->Y = dword_ABDC14; /*0x58854f*/
  a1->Z = dword_ABDC18; /*0x588558*/
  return a1; /*0x5882e6*/

}
// 0x5678e0
int MapClass::RevealArea1(int *coords, int radius, void *owner, char arg4, int arg5, char arg6, char arg7, char arg8)
{

  double v9; // st7
  int v10; // edi
  int v11; // ebx
  int v12; // ebp
  int v13; // eax
  signed int v14; // edi
  int v15; // eax
  __int64 v16; // rax
  int v17; // edi
  int v18; // ebx
  int result; // eax
  int v20; // edx
  int MapClass_field_0xF4; // ecx
  int v22; // esi
  char *v23; // ebp
  int v24; // eax
  HouseClass *v25; // ebx
  char *v26; // ebp
  int v27; // ecx
  int v28; // esi
  int *v29; // ecx
  __int16 v30; // ax
  __int16 v31; // cx
  int v32; // edx
  int v33; // esi
  unsigned int v34; // edx
  CellClass *v35; // edx
  CellClass *v36; // esi
  unsigned int v37; // eax
  CellClass *v38; // eax
  int smudgeTypeIndex_low; // edx
  int smudgeTypeIndex_high; // eax
  unsigned int v41; // edi
  int v42; // ecx
  double v43; // [esp+0h] [ebp-50h]
  int *v44; // [esp+18h] [ebp-38h]
  int v46; // [esp+20h] [ebp-30h]
  int v47; // [esp+24h] [ebp-2Ch]
  int v48; // [esp+24h] [ebp-2Ch]
  int v49; // [esp+2Ch] [ebp-24h]
  __int16 v50; // [esp+30h] [ebp-20h]
  __int16 v51; // [esp+32h] [ebp-1Eh]
  __int16 v52[4]; // [esp+38h] [ebp-18h] BYREF
  unsigned __int16 *v53; // [esp+40h] [ebp-10h]
  __int16 v54; // [esp+48h] [ebp-8h]
  __int16 v55; // [esp+4Ah] [ebp-6h]
  char v56; // [esp+54h] [ebp+4h]
  int v57; // [esp+60h] [ebp+10h]

  v49 = coords[2] / dword_ABDE88; /*0x5678f9*/
  v10 = *coords; /*0x5678ff*/
  v11 = coords[1]; /*0x567901*/
  v12 = coords[2]; /*0x567904*/
  v13 = ZCoordToScreenY(v12); /*0x567909*/
  v14 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v13) >> 32) - v13) >> 31) /*0x567928*/
        + ((int)(((unsigned __int64)(2004318071LL * v13) >> 32) - v13) >> 4)) << 8)
      + v10;
  v15 = ZCoordToScreenY(v12); /*0x56792a*/
  v16 = (int)(((((unsigned int)(((unsigned __int64)(2004318071LL * v15) >> 32) - v15) >> 31) /*0x567958*/
              + ((int)(((unsigned __int64)(2004318071LL * v15) >> 32) - v15) >> 4)) << 8)
            + v11);
  v52[0] = *coords / 256; /*0x567971*/
  v17 = v14 / 256; /*0x567982*/
  v18 = ((((v16) >> 32) & 0xFF) + (int)v16) >> 8; /*0x567985*/
  v50 = v17; /*0x56798b*/
  v51 = v18; /*0x567990*/
  v52[1] = coords[1] / 256; /*0x56799d*/
  v54 = v17 - v52[0] - 2; /*0x5679c3*/
  v55 = v18 - v52[1] - 2; /*0x5679d3*/
  if ( *(unsigned int *)&dword_A8B238 != 3 && *(unsigned int *)&dword_A8B238 != 4 /*0x5679eb*/
    || !dword_A8B23C
    || (v56 = 1, (*(unsigned __int8 (__thiscall **)(void *))(*(unsigned int *)&dword_A8B23C + 4))((void *)dword_A8B23C)) )
  {
    v56 = 0; /*0x5679f7*/
  }
  result = (__int16)v18; /*0x5679ff*/
  v20 = (__int16)v18 + (__int16)v17; /*0x567a06*/
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x567a09*/
  if ( v20 <= MapClass_field_0xF4 ) /*0x567a11*/
    return result; /*0x567a11*/
  if ( (__int16)v17 - (__int16)v18 >= MapClass_field_0xF4 ) /*0x567a1d*/
    return result; /*0x567a1d*/
  result = (__int16)v18 - (__int16)v17; /*0x567a23*/
  if ( result >= MapClass_field_0xF4 ) /*0x567a27*/
    return result; /*0x567a27*/
  result = *(unsigned int *)this->__pad_F8; /*0x567a2d*/
  if ( v20 > MapClass_field_0xF4 + 2 * result ) /*0x567a38*/
    return result; /*0x567a38*/
  result = radius; /*0x567a3e*/
  if ( !radius ) /*0x567a44*/
    return result; /*0x567a44*/
  if ( radius >= 11 ) /*0x567a4d*/
  {
    result = 10; /*0x567a54*/
    radius = 10; /*0x567a59*/
  }
  v22 = (&dword_7ED3D0)[result]; /*0x567a63*/
  v44 = (int *)&dword_ABD490; /*0x567a6a*/
  v23 = (char *)&unk_ABCF60; /*0x567a72*/
  if ( !*((unsigned char *)&g_RulesClass_Instance->ElevationBonusCap + 2) && arg4 && result > 2 ) /*0x567a8c*/
  {
    v24 = (&dword_7ED3C4)[result]; /*0x567a8e*/
    v22 -= v24; /*0x567a95*/
    v23 = (char *)(4 * v24 + 11259744); /*0x567a9e*/
    v44 = (int *)(4 * v24 + 11261072); /*0x567aa5*/
  }
  v25 = (HouseClass *)owner; /*0x567aa9*/
  v26 = v23 - 4; /*0x567aad*/
  if ( !owner ) /*0x567ab2*/
    goto LABEL_26; /*0x567ab2*/
  result = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x567ab4*/
  if ( !*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x567abb*/
    goto LABEL_27; /*0x567abb*/
  if ( owner != *(void **)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x567abf*/
  {
    if ( ((1 << *(unsigned int *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 52) + 184)) /*0x567ad7*/
        & owner->radarVisibleTo) != 0 )
    {
      v25 = *(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x567ad9*/
      owner = *(void **)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x567adb*/
    }
    if ( v25 != *(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x567ae1*/
    {
      if ( (unsigned __int8)v25->IsAlliedWith() && *((unsigned char *)&g_RulesClass_Instance->ElevationIncrementBonus + 1) ) /*0x567af4*/
      {
        result = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x567afe*/
        v25 = *(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x567b03*/
        owner = *(void **)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x567b05*/
        goto LABEL_27; /*0x567b09*/
      }
LABEL_26:
      result = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x567b0b*/
LABEL_27:
      if ( v25 != (HouseClass *)result ) /*0x567b12*/
        return result; /*0x567b12*/
    }
  }
  v27 = v22; /*0x567b18*/
  v28 = v22 - 1; /*0x567b1a*/
  if ( v27 ) /*0x567b1d*/
  {
    v46 = v28 + 1; /*0x567b24*/
    while ( 1 ) /*0x567b37*/
    {
      v29 = v44++; /*0x567b37*/
      v30 = *(unsigned short *)v29 + v17; /*0x567b43*/
      v31 = v51 + v29->q002_; /*0x567b4a*/
      v32 = this->MapClass_field_0xF4; /*0x567b4f*/
      LOWORD(v53) = v30; /*0x567b55*/
      v26 += 4; /*0x567b5a*/
      HIWORD(v53) = v31; /*0x567b5d*/
      *(unsigned int *)v52 = (unsigned int)v53; /*0x567b6c*/
      v33 = v31 + v30; /*0x567b70*/
      if ( v33 > v32 /*0x567bb8*/
        && v30 - v31 < v32
        && v31 - v30 < v32
        && v33 <= v32 + 2 * *(unsigned int *)this->__pad_F8
        && (int)abs32(v30 - v50) <= radius )
      {
        v47 = (__int16)(HIWORD(v53) - v51); /*0x567bd7*/
        __asm { fild [esp+50h+var_2C] } /*0x567bdb*/
        v48 = (__int16)((unsigned short)v53 - v50); /*0x567bdf*/
        __asm /*0x567be3*/
        {
          fild [esp+50h+var_2C]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+50h+var_50]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v43); /*0x567bf8*/
        if ( (__int16)Math::RoundToInt(v9) <= radius ) /*0x567c0a*/
        {
          v34 = v52[0] + (v52[1] << 9); /*0x567c21*/
          if ( v34 < 0x40000 && (v35 = *(CellClass **)(this->MapClass_field_0x13C + 4 * v34)) != 0 ) /*0x567c38*/
          {
            v36 = v35; /*0x567c3a*/
          }
          else
          {
            dword_ABDC74 = *(unsigned int *)v52; /*0x567c3e*/
            v36 = (CellClass *)&unk_ABDC50; /*0x567c43*/
          }
          if ( !arg7 || !BYTE2(dword_8871E0->ElevationBonusCap[0]) ) /*0x567c56*/
            goto LABEL_47; /*0x567c56*/
          LOWORD(v57) = v52[0] - v54 + *(unsigned short *)v26; /*0x567c7c*/
          HIWORD(v57) = v52[1] - v55 + *((unsigned short *)v26 + 1); /*0x567c81*/
          v37 = (__int16)v57 + ((short)(((v57) >> 16) & 0xFFFF) << 9); /*0x567c8f*/
          if ( v37 >= 0x40000 || (v38 = *(CellClass **)(dword_87F924 + 4 * v37)) == 0 ) /*0x567ca5*/
          {
            dword_ABDC74 = v57; /*0x567cab*/
            v38 = (CellClass *)&unk_ABDC50; /*0x567cb0*/
          }
          if ( v38->level[0] <= v49 + 3 ) /*0x567cc5*/
          {
LABEL_47:
            smudgeTypeIndex_low = SLOWORD(v36->smudgeTypeIndex); /*0x567cd5*/
            smudgeTypeIndex_high = SHIWORD(v36->smudgeTypeIndex); /*0x567cd9*/
            v41 = (unsigned int)v36->flags & 0xFFFFFFBF; /*0x567cdd*/
            v36->flags = (CellFlags)v41; /*0x567ce2*/
            if ( arg6 ) /*0x567ce8*/
            {
              if ( ((v41 & 1) == 0 || (v41 & 2) == 0) && (v36->copyFlags & 8) != 0 ) /*0x567cff*/
                ((DisplayClass *)&dword_87F7E8)->ProcessCellReveal((int)v52, (int)owner); /*0x567d10*/
            }
            else
            {
              if ( !v56 ) /*0x567d1d*/
                goto LABEL_60; /*0x567d1d*/
              if ( smudgeTypeIndex_low == 7 ) /*0x567d22*/
              {
                if ( smudgeTypeIndex_high == this->MapClass_field_0xF4 + 5 ) /*0x567d2f*/
                  goto LABEL_61; /*0x567d2f*/
              }
              else if ( smudgeTypeIndex_low == 13 && smudgeTypeIndex_high == this->MapClass_field_0xF4 + 11 ) /*0x567d43*/
              {
                goto LABEL_61; /*0x567d43*/
              }
              v42 = *(unsigned int *)this->__pad_F8; /*0x567d45*/
              if ( smudgeTypeIndex_low != v42 + 13 || smudgeTypeIndex_high != v42 + this->MapClass_field_0xF4 - 15 ) /*0x567d5e*/
LABEL_60:
                ((Conditions *)(RadarClass *)v52)->CheckResult3((int)owner, arg8, 0); /*0x567d60*/
            }
          }
        }
      }
LABEL_61:
      result = --v46; /*0x567d79*/
      if ( !v46 ) /*0x567d82*/
        return result; /*0x567d82*/
      (v17) = ((v17) & ~0xFFFF) | ((v50) & 0xFFFF); /*0x567b2a*/
    }
  }
  return result; /*0x567d88*/

}
// 0x567da0
int MapClass::RevealArea2(int *coords, int radius, int owner, int arg4)
{

  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int result; // eax
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  signed int v13; // esi
  int v14; // eax
  unsigned int v15; // edx
  int *v16; // ebp
  __int64 v17; // rax
  int v18; // esi
  int v19; // edi
  int *v20; // eax
  int v21; // eax
  bool v22; // sf
  int v23; // eax
  CellClass *v24; // eax
  CellClass *v25; // ebx
  char AdjacentPassableMask; // al
  unsigned __int16 *v28; // [esp+Ch] [ebp+8h]
  int v29; // [esp+10h] [ebp+Ch]

  v5 = owner; /*0x567da1*/
  if ( owner <= 11 ) /*0x567dac*/
  {
    if ( owner < 3 ) /*0x567db8*/
      v5 = 3; /*0x567dba*/
  }
  else
  {
    v5 = 11; /*0x567dae*/
  }
  v6 = radius; /*0x567dbf*/
  if ( radius < 0 ) /*0x567dc5*/
  {
    v7 = (&dword_7ED3D0)[v5]; /*0x567dc7*/
    radius = 0; /*0x567dce*/
    goto LABEL_10; /*0x567dd6*/
  }
  if ( radius > 8 ) /*0x567ddb*/
  {
    radius = 8; /*0x567de1*/
    v6 = 8; /*0x567de9*/
LABEL_9:
    v7 = (&dword_7ED3D0)[v5] - (&dword_7ED3CC)[v6]; /*0x567ded*/
    goto LABEL_10; /*0x567dfb*/
  }
  if ( radius ) /*0x567efd*/
    goto LABEL_9; /*0x567efd*/
  v7 = (&dword_7ED3D0)[v5]; /*0x567f03*/
LABEL_10:
  v29 = v7; /*0x567dfd*/
  result = arg4; /*0x567e01*/
  if ( !arg4 ) /*0x567e0b*/
  {
    v9 = *coords; /*0x567e15*/
    v10 = coords[1]; /*0x567e17*/
    v11 = coords[2]; /*0x567e1a*/
    v12 = ZCoordToScreenY(v11); /*0x567e1f*/
    v13 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 31) /*0x567e3e*/
          + ((int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 4)) << 8)
        + v9;
    v14 = ZCoordToScreenY(v11); /*0x567e40*/
    v15 = (int)(((unsigned __int64)(2004318071LL * v14) >> 32) - v14) >> 4; /*0x567e52*/
    v16 = (int *)&dword_ABD490; /*0x567e57*/
    v17 = (int)((((v15 >> 31) + v15) << 8) + v10); /*0x567e73*/
    v18 = v13 / 256; /*0x567e82*/
    v19 = ((((v17) >> 32) & 0xFF) + (int)v17) >> 8; /*0x567e85*/
    if ( radius ) /*0x567e8a*/
      v16 = (int *)(4 * (&dword_7ED3CC)[radius] + 11261072); /*0x567e93*/
    for ( result = v29 - 1; v29; --v29 ) /*0x567ea3*/
    {
      v20 = v16++; /*0x567eae*/
      HIWORD(v28) = v19 + *((unsigned short *)v20 + 1); /*0x567ec0*/
      LOWORD(v28) = v18 + *(unsigned short *)v20; /*0x567ec5*/
      v21 = SHIWORD(v28) << 9; /*0x567ed4*/
      v22 = (__int16)v28 + v21 < 0; /*0x567ed7*/
      v23 = (__int16)v28 + v21; /*0x567ed7*/
      arg4 = (int)v28; /*0x567ed9*/
      if ( v22 || v23 >= 0x40000 || (v24 = *(CellClass **)(this->MapClass_field_0x13C + 4 * v23)) == 0 ) /*0x567ef5*/
      {
        dword_ABDC74 = (int)v28; /*0x567f0f*/
        v25 = (CellClass *)&unk_ABDC50; /*0x567f15*/
      }
      else
      {
        v25 = v24; /*0x567ef7*/
      }
      AdjacentPassableMask = ((Cell *)(__int16 *)&arg4)->GetAdjacentPassableMask(0); /*0x567f27*/
      if ( AdjacentPassableMask != v25->shroudedness[0] ) /*0x567f32*/
      {
        v25->shroudedness[0] = AdjacentPassableMask; /*0x567f34*/
        v25->visibilityChanged[0] = 1; /*0x567f3a*/
        ((Tactical *)g_TacticalClass_Instance)->AddCellToDrawList((int)v25); /*0x567f48*/
      }
      result = v29 - 1; /*0x567f51*/
    }
  }
  return result; /*0x567f61*/

}
void MapClass::RevealArea3(CoordStruct* coords, int height, int radius, bool skip_reveal)
{
    (void)coords;
    (void)height;
    (void)radius;
    (void)skip_reveal;
}

void MapClass::Reveal(HouseClass* house)
{
    (void)house;
}

void MapClass::Reshroud(HouseClass* house)
{
    (void)house;
}

void MapClass::RedrawSidebar(int mode)
{
    (void)mode;
}

void MapClass::SetTogglePowerMode(int mode)
{
    (void)mode;
}

void MapClass::SetPlaceBeaconMode(int mode)
{
    (void)mode;
}

void MapClass::SetSellMode(int mode)
{
    (void)mode;
}

void MapClass::SetRepairMode(int mode)
{
    (void)mode;
}

void MapClass::DestroyCliff(CellClass* cell)
{
    (void)cell;
}

bool MapClass::MakeTraversable(const ObjectClass* visitor, const CellStruct& cell) const
{
    (void)visitor;
    (void)cell;
    return false;

} // namespace gamemd
} // namespace gamemd
