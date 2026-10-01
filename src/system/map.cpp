#include "system/map.hpp"
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
CoordStruct* MapClass::FindFirstFirestorm(CoordStruct* out, const CoordStruct& start, const CoordStruct& end, const HouseClass* house = nullptr) const
{
  int v4; // ebx
  int v5; // edi
  int16_t v6; // di
  int v7; // esi
  unsigned int v8; // eax
  unsigned int *v9; // eax
  unsigned int *v10; // ecx
  unsigned int *v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  int16_t v17; // bx
  uint16_t i; // si
  unsigned int v19; // eax
  unsigned int *v20; // eax
  unsigned int *v21; // ecx
  unsigned int *v22; // eax
  int v23; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  double v28; // st7
  int v29; // edi
  int v30; // ecx
  unsigned int *v31; // ecx
  unsigned int *v32; // eax
  int v33; // eax
  int64_t v34; // [esp+Ch] [ebp-3Ch]
  int v35; // [esp+Ch] [ebp-3Ch]
  int v36; // [esp+10h] [ebp-38h]
  double v37; // [esp+10h] [ebp-38h]
  int v38; // [esp+10h] [ebp-38h]
  int16_t v39; // [esp+1Ch] [ebp-2Ch]
  int v40; // [esp+1Ch] [ebp-2Ch]
  int v41; // [esp+20h] [ebp-28h]
  int v42; // [esp+20h] [ebp-28h]
  int v43; // [esp+24h] [ebp-24h]
  double v44; // [esp+28h] [ebp-20h]
  double v45; // [esp+30h] [ebp-18h]
  double v46; // [esp+40h] [ebp-8h]

  v4 = (int)(*end);
  v5 = (int)(*start);
  if ( *start != *end || start[1] != end[1] || start[2] != end[2] )
  {
    IDA_LODWORD(v34) = v5 / 256; /*0x5880f3*/
    IDA_HIDWORD(v34) = v4 / 256; /*0x5880f7*/
    if ( (uint16_t)(v5 / 256) == (uint16_t)(v4 / 256) )
    {
      IDA_LOWORD(v34) = v5 / 256; /*0x588104*/
      IDA_WORD1(v34) = start[1] / 256; /*0x58811a*/
      v6 = IDA_WORD1(v34); /*0x588138*/
      v7 = end[1] / 256; /*0x588141*/
      v39 = IDA_SWORD1(v34) >= (uint16_t)v7 ? -1 : 1;
      while ( (unsigned short)v34 != IDA_WORD2(v34) || v6 != (unsigned short)v7 ) /*0x58815d*/
      {
        v8 = (int16_t)v34 + (v6 << 9); /*0x58816c*/
        if ( v8 < 0x40000 && (v9 = *(unsigned int **)(dword_87F924 + 4 * v8)) != 0 ) /*0x588182*/
        {
          v10 = v9; /*0x588184*/
        }
        else
        {
          v10 = (unsigned int *)(unk_ABDC50);
          dword_ABDC74 = v34; /*0x588191*/
        }
        v11 = Cell::IsBridge(v10); /*0x588196*/
        if ( v11 ) /*0x58819d*/
        {
          if ( *(unsigned char *)(v11[328] + 5824) ) /*0x5881a5*/
          {
            v12 = v11[135]; /*0x5881af*/
            if ( *(unsigned char *)(v12 + 506) ) /*0x5881b5*/
            {
              if ( v12 != (int)(house) ) /*0x5881c2*/
              {
                v13 = (int16_t)v34; /*0x5881d0*/
                goto LABEL_31; /*0x5881d3*/
              }
            }
          }
        }
        v6 += v39; /*0x5881c4*/
        IDA_WORD1(v34) = v6; /*0x5881c9*/
      }
    }
    else
    {
      v14 = (int)(start[1]);
      v15 = (int)(end[1]);
      v16 = v15 / 256; /*0x588202*/
      v41 = v15 / 256; /*0x588208*/
      if ( (uint16_t)(v14 / 256) == (uint16_t)(v15 / 256) )
      {
        IDA_WORD1(v34) = v14 / 256; /*0x588223*/
        v6 = IDA_WORD1(v34); /*0x588234*/
        v17 = (int16_t)v34 >= IDA_SWORD2(v34) ? -1 : 1;
        for ( i = v34; IDA___PAIR32__(i, v16) != *(unsigned int *)((char *)&v34 + 2); IDA_LOWORD(v34) = i ) /*0x58823d*/
        {
          v19 = (int16_t)i + (IDA_SWORD1(v34) << 9); /*0x588259*/
          if ( v19 < 0x40000 && (v20 = *(unsigned int **)(dword_87F924 + 4 * v19)) != 0 ) /*0x58826f*/
          {
            v21 = v20; /*0x588271*/
          }
          else
          {
            v21 = (unsigned int *)(unk_ABDC50);
            dword_ABDC74 = v34; /*0x58827e*/
          }
          v22 = Cell::IsBridge(v21); /*0x588283*/
          if ( v22 ) /*0x58828a*/
          {
            if ( *(unsigned char *)(v22[328] + 5824) ) /*0x588292*/
            {
              v23 = v22[135]; /*0x58829c*/
              if ( *(unsigned char *)(v23 + 506) ) /*0x5882a2*/
              {
                if ( v23 != (int)(house) ) /*0x5882af*/
                {
                  v13 = (int16_t)i; /*0x5882bf*/
  LABEL_31:
                  *out = (v13 << 8) + 128; /*0x5882c2*/
                  out[1] = (v6 << 8) + 128; /*0x5882e0*/
                  out[2] = 0; /*0x5882e3*/
                  return out; /*0x5882ec*/
                }
              }
            }
          }
          IDA_LOWORD(v16) = v41; /*0x5882b1*/
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
          if ( v30 < 0 || v30 >= dword_87F928 || (v31 = *(unsigned int **)(dword_87F924 + 4 * v30)) == 0 ) /*0x588481*/
          {
            IDA_LOWORD(v38) = v27 / 256; /*0x588483*/
            IDA_HIWORD(v38) = v35 / 256; /*0x588488*/
            v31 = (unsigned int *)(unk_ABDC50); /*0x588491*/
            dword_ABDC74 = v38; /*0x588496*/
          }
          v32 = Cell::IsBridge(v31); /*0x58849b*/
          if ( v32 ) /*0x5884a2*/
          {
            if ( *(unsigned char *)(v32[328] + 5824) ) /*0x5884aa*/
            {
              v33 = v32[135]; /*0x5884b4*/
              if ( *(unsigned char *)(v33 + 506) ) /*0x5884ba*/
              {
                if ( v33 != (int)(house) ) /*0x5884c7*/
                {
                  *out = v27; /*0x588528*/
                  out[1] = v35; /*0x58852a*/
                  out[2] = 0; /*0x58852d*/
                  return out; /*0x588536*/
                }
              }
            }
          }
          if ( v44 >= v45 ) /*0x5884d6*/
          {
            v35 += v40; /*0x588505*/
            v45 = (double)(v40 + v29 - start[1]) * v46; /*0x588518*/
          }
          else
          {
            v27 += v43; /*0x5884df*/
            v44 = (double)(v27 - *start) * (1.0 / v28); /*0x5884f3*/
          }
        }
      }
    }
  }
  *out = dword_ABDC10; /*0x588547*/
  out[1] = dword_ABDC14; /*0x58854f*/
  out[2] = dword_ABDC18; /*0x588558*/
  return out; /*0x5882e6*/
}
// 0x5678e0
void MapClass::RevealArea1(CoordStruct* coords, int radius, HouseClass* owner, CellStruct arg4, uint8_t reveal_by_height, uint8_t arg6, uint8_t arg7, uint8_t arg8)
{
  double v9; // st7
  int v10; // edi
  int v11; // ebx
  int v12; // ebp
  int v13; // eax
  signed int v14; // edi
  int v15; // eax
  int64_t v16; // rax
  int v17; // edi
  int v18; // ebx
  int result; // eax
  int v20; // edx
  void *MapClass_field_0xF4; // ecx
  int v22; // esi
  char *v23; // ebp
  int v24; // eax
  void *v25; // ebx
  char *v26; // ebp
  int v27; // ecx
  int v28; // esi
  char *v29; // ecx
  int16_t v30; // ax
  int16_t v31; // cx
  void *v32; // edx
  int v33; // esi
  unsigned int v34; // edx
  int *v35; // edx
  int *v36; // esi
  unsigned int v37; // eax
  int *v38; // eax
  int v39; // edx
  void *v40; // eax
  unsigned int v41; // edi
  int v42; // ecx
  double v43; // [esp+0h] [ebp-50h]
  char *v44; // [esp+18h] [ebp-38h]
  int v46; // [esp+20h] [ebp-30h]
  int v47; // [esp+24h] [ebp-2Ch]
  int v48; // [esp+24h] [ebp-2Ch]
  int v49; // [esp+2Ch] [ebp-24h]
  int16_t v50; // [esp+30h] [ebp-20h]
  int16_t v51; // [esp+32h] [ebp-1Eh]
  int16_t v52[4]; // [esp+38h] [ebp-18h] BYREF
  int v53; // [esp+40h] [ebp-10h]
  int16_t v54; // [esp+48h] [ebp-8h]
  int16_t v55; // [esp+4Ah] [ebp-6h]
  char v56; // [esp+54h] [ebp+4h]
  int v57; // [esp+60h] [ebp+10h]

  v49 = (int)(coords[2] / g_MissionQueueFrame.briefing[272]);
  v10 = (int)(*coords);
  v11 = (int)(coords[1]);
  v12 = (int)(coords[2]);
  v13 = ZCoordToScreenY(v12); /*0x567909*/
  v14 = ((((unsigned int)(((uint64_t)(2004318071LL * v13) >> 32) - v13) >> 31) /*0x567928*/
        + ((int)(((uint64_t)(2004318071LL * v13) >> 32) - v13) >> 4)) << 8)
      + v10;
  v15 = ZCoordToScreenY(v12); /*0x56792a*/
  v16 = (int)(((((unsigned int)(((uint64_t)(2004318071LL * v15) >> 32) - v15) >> 31) /*0x567958*/
              + ((int)(((uint64_t)(2004318071LL * v15) >> 32) - v15) >> 4)) << 8)
            + v11);
  v52[0] = *coords / 256; /*0x567971*/
  v17 = v14 / 256; /*0x567982*/
  v18 = (IDA_BYTE4(v16) + (int)v16) >> 8; /*0x567985*/
  v50 = v17; /*0x56798b*/
  v51 = v18; /*0x567990*/
  v52[1] = coords[1] / 256; /*0x56799d*/
  v54 = v17 - v52[0] - 2; /*0x5679c3*/
  v55 = v18 - v52[1] - 2; /*0x5679d3*/
  if ( *(unsigned int *)&dword_A8B238 != 3 && *(unsigned int *)&dword_A8B238 != 4 /*0x5679eb*/
    || !dword_A8B23C
    || (v56 = 1, (*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)) )
  {
    v56 = 0; /*0x5679f7*/
  }
  result = (int16_t)v18; /*0x5679ff*/
  v20 = (int16_t)v18 + (int16_t)v17; /*0x567a06*/
  MapClass_field_0xF4 = ((unsigned char *)(this) + 0xF4); /*0x567a09*/
  if ( v20 <= (int)MapClass_field_0xF4 ) /*0x567a11*/
    return result; /*0x567a11*/
  if ( (int16_t)v17 - (int16_t)v18 >= (int)MapClass_field_0xF4 ) /*0x567a1d*/
    return result; /*0x567a1d*/
  result = (int16_t)v18 - (int16_t)v17; /*0x567a23*/
  if ( result >= (int)MapClass_field_0xF4 ) /*0x567a27*/
    return result; /*0x567a27*/
  result = *(unsigned int *)((unsigned char *)(this) + 0xF8); /*0x567a2d*/
  if ( v20 > (int)MapClass_field_0xF4 + 2 * result ) /*0x567a38*/
    return result; /*0x567a38*/
  result = radius; /*0x567a3e*/
  if ( !radius ) /*0x567a44*/
    return result; /*0x567a44*/
  if ( radius >= 11 ) /*0x567a4d*/
  {
    result = 10; /*0x567a54*/
    radius = 10; /*0x567a59*/
  }
  v22 = dword_7ED3D0[result]; /*0x567a63*/
  v44 = &g_MissionQueueFrame.waypoints[2150]; /*0x567a6a*/
  v23 = &g_MissionQueueFrame.waypoints[822]; /*0x567a72*/
  if ( !*(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6126) && arg4 && result > 2 ) /*0x567a8c*/
  {
    v24 = dword_7ED3C4[result]; /*0x567a8e*/
    v22 -= v24; /*0x567a95*/
    v23 = (char *)(4 * v24 + 11259744); /*0x567a9e*/
    v44 = (char *)(4 * v24 + 11261072); /*0x567aa5*/
  }
  v25 = (void *)owner; /*0x567aa9*/
  v26 = v23 - 4; /*0x567aad*/
  if ( !owner ) /*0x567ab2*/
    goto LABEL_26; /*0x567ab2*/
  result = (int)dword_A83D4C; /*0x567ab4*/
  if ( !dword_A83D4C ) /*0x567abb*/
    goto LABEL_27; /*0x567abb*/
  if ( owner != (gamemd::HouseClass *)(dword_A83D4C) ) /*0x567abf*/
  {
    if ( ((1 << *((unsigned int *)dword_A83D4C->Object_field_0x34 + 46)) & *((unsigned int *)owner + 5433)) != 0 ) /*0x567ad7*/
    {
      v25 = (gamemd::HouseClass *)((void *)dword_A83D4C);
      owner = (gamemd::HouseClass *)(dword_A83D4C);
    }
    if ( v25 != (void *)dword_A83D4C ) /*0x567ae1*/
    {
      if ( (uint8_t)HouseClass::IsAlliedWith(v25, (void *)dword_A83D4C) /*0x567af4*/
        && *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6119) )
      {
        result = (int)((gamemd::HouseClass *)((int)dword_A83D4C));
        v25 = (gamemd::HouseClass *)((void *)dword_A83D4C);
        owner = (gamemd::HouseClass *)(dword_A83D4C);
        goto LABEL_27; /*0x567b09*/
      }
  LABEL_26:
      result = (int)dword_A83D4C; /*0x567b0b*/
  LABEL_27:
      if ( v25 != (void *)result ) /*0x567b12*/
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
      v29 = v44; /*0x567b37*/
      v44 += 4; /*0x567b3c*/
      v30 = *(unsigned short *)v29 + v17; /*0x567b43*/
      v31 = v51 + *((unsigned short *)v29 + 1); /*0x567b4a*/
      v32 = ((unsigned char *)(this) + 0xF4); /*0x567b4f*/
      IDA_LOWORD(v53) = v30; /*0x567b55*/
      v26 += 4; /*0x567b5a*/
      IDA_HIWORD(v53) = v31; /*0x567b5d*/
      *(unsigned int *)v52 = v53; /*0x567b6c*/
      v33 = v31 + v30; /*0x567b70*/
      if ( v33 > (int)v32 /*0x567bb8*/
        && v30 - v31 < (int)v32
        && v31 - v30 < (int)v32
        && v33 <= (int)v32 + 2 * *(unsigned int *)((unsigned char *)(this) + 0xF8)
        && (int)abs32(v30 - v50) <= radius )
      {
        v47 = (int16_t)(IDA_HIWORD(v53) - v51); /*0x567bd7*/
        __asm { fild [esp+50h+var_2C] } /*0x567bdb*/
        v48 = (int16_t)(v53 - v50); /*0x567bdf*/
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
        if ( (int16_t)Math::RoundToInt(v9) <= radius ) /*0x567c0a*/
        {
          v34 = v52[0] + (v52[1] << 9); /*0x567c21*/
          if ( v34 < 0x40000 && (v35 = (int *)*((unsigned int *)((unsigned char *)(this) + 0x13C) + v34)) != 0 ) /*0x567c38*/
          {
            v36 = v35; /*0x567c3a*/
          }
          else
          {
            g_MissionQueueFrame.briefing[139] = *(unsigned int *)v52; /*0x567c3e*/
            v36 = &g_MissionQueueFrame.briefing[130]; /*0x567c43*/
          }
          if ( !arg7 || !*(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6126) ) /*0x567c56*/
            goto LABEL_47; /*0x567c56*/
          IDA_LOWORD(v57) = v52[0] - v54 + *(unsigned short *)v26; /*0x567c7c*/
          IDA_HIWORD(v57) = v52[1] - v55 + *((unsigned short *)v26 + 1); /*0x567c81*/
          v37 = (int16_t)v57 + (IDA_SHIWORD(v57) << 9); /*0x567c8f*/
          if ( v37 >= 0x40000 || (v38 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v37)) == 0 ) /*0x567ca5*/
          {
            g_MissionQueueFrame.briefing[139] = v57; /*0x567cab*/
            v38 = &g_MissionQueueFrame.briefing[130]; /*0x567cb0*/
          }
          if ( *((char *)v38 + 283) <= v49 + 3 ) /*0x567cc5*/
          {
  LABEL_47:
            v39 = *((int16_t *)v36 + 18); /*0x567cd5*/
            v40 = (void *)*((int16_t *)v36 + 19); /*0x567cd9*/
            v41 = v36[80] & 0xFFFFFFBF; /*0x567cdd*/
            v36[80] = v41; /*0x567ce2*/
            if ( arg6 ) /*0x567ce8*/
            {
              if ( ((v41 & 1) == 0 || (v41 & 2) == 0) && (v36[75] & 8) != 0 ) /*0x567cff*/
                DisplayClass::ProcessCellReveal((DisplayClass *)&stru_87F5F0.__pad_58[416], v52, (int)owner); /*0x567d10*/
            }
            else
            {
              if ( !v56 ) /*0x567d1d*/
                goto LABEL_60; /*0x567d1d*/
              if ( v39 == 7 ) /*0x567d22*/
              {
                if ( v40 == (char *)((unsigned char *)(this) + 0xF4) + 5 ) /*0x567d2f*/
                  goto LABEL_61; /*0x567d2f*/
              }
              else if ( v39 == 13 && v40 == (char *)((unsigned char *)(this) + 0xF4) + 11 ) /*0x567d43*/
              {
                goto LABEL_61; /*0x567d43*/
              }
              v42 = *(unsigned int *)((unsigned char *)(this) + 0xF8); /*0x567d45*/
              if ( v39 != v42 + 13 || v40 != (char *)((unsigned char *)(this) + 0xF4) + v42 - 15 ) /*0x567d5e*/
  LABEL_60:
                Conditions::CheckResult3((RadarClass *)v52, (int)owner, arg8); /*0x567d60*/
            }
          }
        }
      }
  LABEL_61:
      result = --v46; /*0x567d79*/
      if ( !v46 ) /*0x567d82*/
        return result; /*0x567d82*/
      IDA_LOWORD(v17, unsigned int a4) = v50; /*0x567b2a*/
    }
  }
  return result; /*0x567d88*/
}
// 0x567da0
CoordStruct* MapClass::RevealArea2(CoordStruct* out, const CoordStruct& start, const CoordStruct& end, const HouseClass* house = nullptr, void * a1, void * a2, void * a3, void * a4, void * a5)
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
  char *v16; // ebp
  int64_t v17; // rax
  int v18; // esi
  int v19; // edi
  char *v20; // eax
  int v21; // eax
  bool v22; // sf
  int v23; // eax
  int *v24; // eax
  int *v25; // ebx
  char AdjacentPassableMask; // al
  int v28; // [esp+Ch] [ebp+8h]
  int v29; // [esp+10h] [ebp+Ch]

  v5 = (int)(a4);
  if ( a4 <= (void *)(11) ) /*0x567dac*/
  {
    if ( a4 < (void *)(3) ) /*0x567db8*/
      v5 = 3; /*0x567dba*/
  }
  else
  {
    v5 = 11; /*0x567dae*/
  }
  v6 = (int)(a3);
  if ( a3 < 0 ) /*0x567dc5*/
  {
    v7 = ((unsigned int *)(dword_7ED3D0))[v5]; /*0x567dc7*/
    a3 = 0; /*0x567dce*/
    goto LABEL_10; /*0x567dd6*/
  }
  if ( a3 > (void *)(8) ) /*0x567ddb*/
  {
    a3 = (void *)(8);
    v6 = 8; /*0x567de9*/
  LABEL_9:
    v7 = ((unsigned int *, unsigned int a3, unsigned int a5)(dword_7ED3D0))[v5] - ((unsigned int *)(dword_7ED3CC))[v6]; /*0x567ded*/
    goto LABEL_10; /*0x567dfb*/
  }
  if ( a3 ) /*0x567efd*/
    goto LABEL_9; /*0x567efd*/
  v7 = ((unsigned int *)(dword_7ED3D0))[v5]; /*0x567f03*/
  LABEL_10:
  v29 = v7; /*0x567dfd*/
  result = (int)(a5); /*0x567e01*/
  if ( !a5 ) /*0x567e0b*/
  {
    v9 = (int)(*(unsigned int *)(a2));
    v10 = (int)(a2[1]);
    v11 = (int)(a2[2]);
    v12 = ZCoordToScreenY(v11); /*0x567e1f*/
    v13 = ((((unsigned int)(((uint64_t)(2004318071LL * v12) >> 32) - v12) >> 31) /*0x567e3e*/
          + ((int, void * a1, void * a2, void * a3, void * a4, void * a5)(((uint64_t)(2004318071LL * v12) >> 32) - v12) >> 4)) << 8)
        + v9;
    v14 = ZCoordToScreenY(v11); /*0x567e40*/
    v15 = (int)(((uint64_t)(2004318071LL * v14) >> 32) - v14) >> 4; /*0x567e52*/
    v16 = &g_MissionQueueFrame.waypoints[2150]; /*0x567e57*/
    v17 = (int)((((v15 >> 31) + v15) << 8) + v10); /*0x567e73*/
    v18 = v13 / 256; /*0x567e82*/
    v19 = (IDA_BYTE4(v17) + (int)v17) >> 8; /*0x567e85*/
    if ( a3 ) /*0x567e8a*/
      v16 = (char *)(4 * dword_7ED3CC[a3] + 11261072); /*0x567e93*/
    for ( result = v29 - 1; v29; --v29 ) /*0x567ea3*/
    {
      v20 = (char *)((void *)(v16));
      v16 += 4; /*0x567eb0*/
      IDA_HIWORD(v28) = v19 + *((unsigned short *)v20 + 1); /*0x567ec0*/
      IDA_LOWORD(v28) = v18 + *(unsigned short *)v20; /*0x567ec5*/
      v21 = IDA_SHIWORD(v28) << 9; /*0x567ed4*/
      v22 = (int16_t)v28 + v21 < 0; /*0x567ed7*/
      v23 = (int16_t)v28 + v21; /*0x567ed7*/
      a5 = (void *)(v28); /*0x567ed9*/
      if ( v22 || v23 >= 0x40000 || (v24 = (int *)*((unsigned int *)((unsigned char *)(this) + 0x13C) + v23)) == 0 ) /*0x567ef5*/
      {
        g_MissionQueueFrame.briefing[139] = v28; /*0x567f0f*/
        v25 = &g_MissionQueueFrame.briefing[130]; /*0x567f15*/
      }
      else
      {
        v25 = v24; /*0x567ef7*/
      }
      AdjacentPassableMask = Cell::GetAdjacentPassableMask((int16_t *)&a5, 0); /*0x567f27*/
      if ( AdjacentPassableMask != *((unsigned char *)v25 + 288) ) /*0x567f32*/
      {
        *((unsigned char *)v25 + 288) = AdjacentPassableMask; /*0x567f34*/
        *((unsigned char *)v25 + 312) = 1; /*0x567f3a*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v25); /*0x567f48*/
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
