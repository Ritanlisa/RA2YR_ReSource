// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
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
CoordStruct* MapClass::FindFirstFirestorm(CoordStruct* a1, const int* a2, const int* a3, const HouseClass* a4) const
{
    int v4; // ebx
    int v5; // edi
    __int16 v6; // di
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
    __int16 v17; // bx
    unsigned __int16 i; // si
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
    __int64 v34; // [esp+Ch] [ebp-3Ch]
    int v35; // [esp+Ch] [ebp-3Ch]
    int v36; // [esp+10h] [ebp-38h]
    double v37; // [esp+10h] [ebp-38h]
    int v38; // [esp+10h] [ebp-38h]
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
      IDA_LODWORD(v34) = v5 / 256; /*0x5880f3*/
      IDA_HIDWORD(v34) = v4 / 256; /*0x5880f7*/
      if ( (unsigned __int16)(v5 / 256) == (unsigned __int16)(v4 / 256) )
      {
        IDA_LOWORD(v34) = v5 / 256; /*0x588104*/
        IDA_WORD1(v34) = a2[1] / 256; /*0x58811a*/
        v6 = IDA_WORD1(v34); /*0x588138*/
        v7 = a3[1] / 256; /*0x588141*/
        v39 = IDA_SWORD1(v34) >= (unsigned __int16)v7 ? -1 : 1;
        while ( (unsigned short)v34 != IDA_WORD2(v34) || v6 != (unsigned short)v7 ) /*0x58815d*/
        {
          v8 = (__int16)v34 + (v6 << 9); /*0x58816c*/
          if ( v8 < 0x40000 && (v9 = *(unsigned int **)(dword_87F924 + 4 * v8)) != 0 ) /*0x588182*/
          {
            v10 = v9; /*0x588184*/
          }
          else
          {
            v10 = unk_ABDC50; /*0x58818c*/
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
                if ( v12 != a4 ) /*0x5881c2*/
                {
                  v13 = (__int16)v34; /*0x5881d0*/
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
        v14 = a2[1]; /*0x5881d8*/
        v15 = a3[1]; /*0x5881ec*/
        v16 = v15 / 256; /*0x588202*/
        v41 = v15 / 256; /*0x588208*/
        if ( (unsigned __int16)(v14 / 256) == (unsigned __int16)(v15 / 256) )
        {
          IDA_WORD1(v34) = v14 / 256; /*0x588223*/
          v6 = IDA_WORD1(v34); /*0x588234*/
          v17 = (__int16)v34 >= IDA_SWORD2(v34) ? -1 : 1;
          for ( i = v34; IDA___PAIR32__(i, v16) != *(unsigned int *)((char *)&v34 + 2); IDA_LOWORD(v34) = i ) /*0x58823d*/
          {
            v19 = (__int16)i + (IDA_SWORD1(v34) << 9); /*0x588259*/
            if ( v19 < 0x40000 && (v20 = *(unsigned int **)(dword_87F924 + 4 * v19)) != 0 ) /*0x58826f*/
            {
              v21 = v20; /*0x588271*/
            }
            else
            {
              v21 = unk_ABDC50; /*0x588279*/
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
                  if ( v23 != a4 ) /*0x5882af*/
                  {
                    v13 = (__int16)i; /*0x5882bf*/
  LABEL_31:
                    *a1 = (v13 << 8) + 128; /*0x5882c2*/
                    a1[1] = (v6 << 8) + 128; /*0x5882e0*/
                    a1[2] = 0; /*0x5882e3*/
                    return a1; /*0x5882ec*/
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
              v31 = unk_ABDC50; /*0x588491*/
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
                  if ( v33 != a4 ) /*0x5884c7*/
                  {
                    *a1 = v27; /*0x588528*/
                    a1[1] = v35; /*0x58852a*/
                    a1[2] = 0; /*0x58852d*/
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
    *a1 = dword_ABDC10; /*0x588547*/
    a1[1] = dword_ABDC14; /*0x58854f*/
    a1[2] = dword_ABDC18; /*0x588558*/
    return a1; /*0x5882e6*/
}
// 0x5678e0
int MapClass::RevealArea1(CoordStruct* coords, int radius, HouseClass* owner, CellStruct arg4, uint8_t reveal_by_height, uint8_t arg6, uint8_t arg7, uint8_t arg8)
{
    (void)coords; (void)radius; (void)owner; (void)arg4; (void)reveal_by_height; (void)arg6; (void)arg7; (void)arg8;
}
// 0x567da0
int MapClass::RevealArea2(CoordStruct* coords, int radius, HouseClass* owner, uint32_t arg4, uint8_t reveal_by_height, uint8_t arg6, uint8_t arg7, uint8_t arg8)
{
    (void)coords; (void)radius; (void)owner; (void)arg4; (void)reveal_by_height; (void)arg6; (void)arg7; (void)arg8;
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
}
