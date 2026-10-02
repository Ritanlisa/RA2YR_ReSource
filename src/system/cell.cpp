#include "system/cell.hpp"
#include "e4/classes/House_e4.hpp"
#include "object/object.hpp"
#include "object/techno.hpp"

#include "structure/globals_structure.hpp"  // g_Tubes_Count (global Tubes vector Count @ 0x8B4148)

#include "structure/building.hpp"
#include "structure/unit.hpp"
#include "structure/infantry.hpp"
#include "structure/aircraft.hpp"
#include "entity/terrain.hpp"

#include <algorithm>
#include <cmath>
#include <cstring>
#include <limits>
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/COMObject_e4.hpp"
#include "e4/classes/Isometric_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Random_e4.hpp"

namespace gamemd
{

CellClass::CellClass()
    : mapCoords{}
    , foggedObjects(nullptr)
    , bridgeOwnerCell(nullptr)
    , unknown30(0)
    , lightConvert(nullptr)
    , isoTileTypeIndex(-1)
    , attachedTag(nullptr)
    , rubble(nullptr)
    , overlayTypeIndex(-1)
    , smudgeTypeIndex(-1)
    , CellClass_field_4C(0)
    , wallOwnerIndex(-1)
    , infantryOwnerIndex(-1)
    , altInfantryOwnerIndex(-1)
    , CellClass_field_5C(0)
    , unknown60(0)
    , unknown64(0)
    , unknown68(0)
    , CellClass_field_6C(0)
    , unknown70(0)
    , unknown74(0)
    , cloakedByHouses(0)
    , baseSpacerOfHouses(0)
    , jumpjet(nullptr)
    , firstObject(nullptr)
    , altObject(nullptr)
    , landType((int)(LandType::Clear))
    , radLevel(0.0)
    , radSite(nullptr)
    , CellClass_field_FC(0)
    , occupyHeightsCoveringMe(0)
    , unknown104(0)
    , unknown108(0)
    , CellClass_field_10A(0)
    , CellClass_field_10C(0)
    , CellClass_field_10E(0)
    , unknown110(0)
    , unknown112(0)
    , unknown114(0)
    , tubeIndex(-1)
    , unknown118(0)
    , unknown119(0)
    , height(0)
    , level(0)
    , slopeIndex(0)
    , CellClass_field_11D(0)
    , powerup(0)
    , CellClass_field_11F(0)
    , shroudedness(0)
    , foggedness(0)
    , blockedNeighbours(0)
    , align123(0)
    , occupationFlags(0)
    , altOccupationFlags(0)
    , copyFlags(0)
    , shroudCounter(0)
    , gapsCoveringThisCell(0)
    , visibilityChanged(false)
    , CellClass_field_13C(0)
    , flags(CellFlags::None)
{
    std::memset(sensorsOfHouses, 0, sizeof(sensorsOfHouses));
    std::memset(disguiseAsType_sensors_of_houses, 0, sizeof(disguiseAsType_sensors_of_houses));
    std::memset(padding144, 0, sizeof(padding144));
}

namespace {

template <AbstractType TargetType>
ObjectClass* FindFromList(ObjectClass* head)
{
    while (head)
    {
        if (head->whatAmI() == TargetType)
            return head;
        head = head->nextObject;
    }
    return nullptr;
}

template <typename T>
T* CastTo(ObjectClass* obj)
{
    return (T*)(obj);
}

} // anonymous namespace

BuildingClass* CellClass::GetBuilding() const
{
    auto* obj = FindFromList<AbstractType::Building>(
        firstObject ? firstObject : altObject);
    return CastTo<BuildingClass>(obj);
}

UnitClass* CellClass::GetUnit(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Unit>(
        alt ? altObject : firstObject);
    return CastTo<UnitClass>(obj);
}

InfantryClass* CellClass::GetInfantry(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Infantry>(
        alt ? altObject : firstObject);
    return CastTo<InfantryClass>(obj);
}

AircraftClass* CellClass::GetAircraft(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Aircraft>(
        alt ? altObject : firstObject);
    return CastTo<AircraftClass>(obj);
}

TerrainClass* CellClass::GetTerrain(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Terrain>(
        alt ? altObject : firstObject);
    return CastTo<TerrainClass>(obj);
}

TechnoClass* CellClass::FindTechnoNearestTo(
    const Point2D& offset, bool alt, const TechnoClass* exclude) const
{
    auto* content = alt ? altObject : firstObject;

    TechnoClass* best  = nullptr;
    double       best_dist = std::numeric_limits<double>::max();

    while (content)
    {
        auto* as_techno = CastTo<TechnoClass>(content);
        if (as_techno && as_techno != exclude)
        {
            CoordStruct crd;
            as_techno->fetchCoordinatesHere(&crd);
            double dx = (double)(crd.X) - (double)(offset.X);
            double dy = (double)(crd.Y) - (double)(offset.Y);
            double dist = dx * dx + dy * dy;
            if (dist < best_dist)
            {
                best_dist = dist;
                best = as_techno;
            }
        }
        content = content->nextObject;
    }
    return best;
}

ObjectClass* CellClass::FindObjectOfType(AbstractType type, bool alt) const
{
    auto* content = alt ? altObject : firstObject;

    while (content)
    {
        if (content->whatAmI(unsigned int a2, unsigned int a3) == type)
            return content;
        content = content->nextObject;
    }
    return nullptr;
}

// ============================================================
// Cell rendering functions
// ============================================================

// IDA: 0x48E5A0 -- CellClass::Draw
// Draws the cell at a given screen position.
// 55 bytes: thin wrapper around DrawDispatch.
// 0x48e5a0
int CellClass::Draw(int a1, int a2, void * a3) const
{
  int v5; // eax
  int v6; // ecx

  if ( a2 ) /*0x48e5af*/
  {
    v5 = this->smudgeTypeIndex; /*0x48e5b1*/
    if ( v5 ) /*0x48e5b6*/
    {
      IDA_BYTE1(v5) |= 0x80u; /*0x48e5b8*/
      *(unsigned int *)(a3) = v5; /*0x48e5be*/
      if ( ((unsigned int)(a2)& 0x40) != 0 && (this->vtable3 & 0x10) != 0 ) /*0x48e5c6*/
      {
        IDA_BYTE1(v5) |= 0x40u; /*0x48e5c8*/
        *(unsigned int *)(a3) = v5; /*0x48e5cb*/
      }
    }
    else
    {
      *(unsigned int *)(a3) = 0; /*0x48e5cf*/
    }
  }
  v6 = this->attached1; /*0x48e5d5*/
  if ( v6 ) /*0x48e5da*/
    (*(void (**)(int, int, unsigned int *, ControlClass *))(*(unsigned int *)v6 + 76))(v6, a2, a3, this); /*0x48e5e1*/
// 0x4e1530
  return COMObject::ActivateThunk((GadgetClass *)this, a2, (int)a3, 0); /*0x48e5ef*/
}
// 0x7235a0
int CellClass::RegisterForRedraw(__int16 *a2, int a1, int a5, int a6)
{
  unsigned char *result; // eax
  int v4; // eax
  unsigned int *v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // ebx
  int v10; // ebp
  unsigned int v11; // eax
  int v13; // [esp+Ch] [ebp-4h]
  float v14; // [esp+14h] [ebp+4h]

  v13 = ((Cell*)(Cell *)a2)->PosToIndex(); /*0x7235b8*/
  result = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x7235bc*/
  if ( result[286] < 0xBu ) /*0x7235c8*/
  {
    if ( *(unsigned int *)a1->CellClass_field_10C > Object::ComputeAllocationSize() - 10 ) /*0x7235de*/
      BuildingClass::RebuildOccupancy2((BuildingClass *)a1); /*0x7235e2*/
    *(unsigned int *)(*(unsigned int *)&a1->unknown118 + 8 * *(unsigned int *)a1->CellClass_field_10C) = *(unsigned int *)a2; /*0x7235f6*/
    *(float *)(*(unsigned int *)&a1->unknown118 + 8 * *(unsigned int *)a1->CellClass_field_10C + 4) = (float)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] + (int)abs32(Random::State((Random *)&(&dword_A8B230)[14].NeedsSaveOrLink)) % 50); /*0x723632*/
    v4 = *(unsigned int *)a1->CellClass_field_10C; /*0x723636*/
    v5 = *(unsigned int **)a1->unknown110; /*0x723642*/
    v6 = *(unsigned int *)&a1->unknown118 + 8 * v4; /*0x723648*/
    *(unsigned int *)a1->CellClass_field_10C = v4 + 1; /*0x72364c*/
    v7 = *v5 + 1; /*0x723657*/
    v14 = v6->q004; /*0x72365a*/
    v6 = v6; /*0x723661*/
    v8 = v7 >> 1; /*0x723665*/
    if ( v7 < v5[1] ) /*0x723669*/
    {
      if ( v7 > 1 ) /*0x72366e*/
      {
        do /*0x72368f*/
        {
          v9 = v5[2]; /*0x723671*/
          v10 = *(unsigned int *)(v9 + 4 * v8); /*0x723674*/
          if ( *(float *)(v10 + 4) <= (double)v14 ) /*0x723683*/
            break; /*0x723683*/
          *(unsigned int *)(v9 + 4 * v7) = v10; /*0x723685*/
          v7 = v8; /*0x723688*/
          v8 >>= 1; /*0x72368a*/
        }
        while ( v7 > 1 ); /*0x72368f*/
        v6 = v6; /*0x723691*/
      }
      *(unsigned int *)(v5[2] + 4 * v7) = v6; /*0x723699*/
      v11 = v5[3]; /*0x72369e*/
      ++*v5; /*0x7236a4*/
      if ( v6 > v11 ) /*0x7236a6*/
        v5[3] = v6; /*0x7236a8*/
      if ( v6 < v5[4] ) /*0x7236ae*/
        v5[4] = v6; /*0x7236b0*/
    }
    result = *(unsigned char **)a1->unknown114; /*0x7236b3*/
    result[v13] = 1; /*0x7236be*/
  }
  return result; /*0x7236c2*/
}
// 0x47e8a0
char CellClass::AddContent(ObjectClass* content, bool on_bridge)
{
  int v3; // eax
  int v5; // esi
  int i; // eax
  int inited; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  int v18; // [esp+28h] [ebp+8h]
  int v19; // [esp+28h] [ebp+8h]

  IDA_LOBYTE(v3) = on_bridge; /*0x47e8a0*/
  if ( on_bridge ) /*0x47e8ae*/
    v5 = this->u32_E8; /*0x47e8b0*/
  else
    v5 = this->u32_E4; /*0x47e8b8*/
  if ( content ) /*0x47e8c4*/
  {
    if ( (*(int (**)(unsigned int *))(*content + 44))(content) == 6 && v5 ) /*0x47e8d9*/
    {
      for ( i = v5->Wobbles; i; i = *(unsigned int *)(i + 48) ) /*0x47e8e0*/
        v5 = i; /*0x47e8e2*/
      v5->Wobbles = content; /*0x47e8eb*/
      content[12] = 0; /*0x47e8ee*/
    }
    else if ( on_bridge ) /*0x47e8fd*/
    {
      if ( !v5 || v5->Wobbles != content ) /*0x47e906*/
      {
        content[12] = v5; /*0x47e908*/
        this->u32_E8 = content; /*0x47e90b*/
      }
    }
    else if ( !v5 || v5->Wobbles != content ) /*0x47e91a*/
    {
      content[12] = v5; /*0x47e91c*/
      this->u32_E4 = content; /*0x47e91f*/
    }
    v18 = this->smudgeTypeIndex; /*0x47e929*/
    v13 = 128; /*0x47e94b*/
    v14 = 128; /*0x47e94f*/
    inited = (int)(Isometric::InitTables((IUnknown *)(this), &v13)); /*0x47e953*/
    v15 = ((int16_t)v18 << 8) + 128; /*0x47e962*/
    v16 = (IDA_SHIWORD(v18) << 8) + 128; /*0x47e966*/
    v17 = inited; /*0x47e96a*/
    if ( !Cell::IsPassable((unsigned int *)((IUnknown *)(&v15))) /*0x47e9cf*/
      && (v19 = this->smudgeTypeIndex,
          v13 = 128,
          v14 = 128,
          v8 = Isometric::InitTables((IUnknown *)(this), &v13),
          v15 = ((int16_t)v19 << 8) + 128,
          v16 = (IDA_SHIWORD(v19) << 8) + 128,
          v17 = v8,
          !Game::Stub3((int)((IUnknown *)((int)&v15))))
      || ((unsigned int *)(dword_A8B238))[0] )
    {
      (*(void (**)(unsigned int *, void *))(*content + 408))(content, dword_A83D4C); /*0x47e9dc*/
    }
    v3 = (*(int (**)(unsigned int *))(*content + 44))(content); /*0x47e9e7*/
    if ( v3 != 15 ) /*0x47e9ee*/
    {
      IDA_LOBYTE(v3) = (*(int (**)(unsigned int *))(*content + 192))(content); /*0x47e9f9*/
      if ( (unsigned char)v3 ) /*0x47ea01*/
      {
        if ( (*(int (**)(unsigned int *))(*content + 44))(content) == 6 ) /*0x47ea0e*/
        {
          v9 = *(int16_t *)(&this->vtable46); /*0x47ea10*/
          v10 = (int)(*(int16_t *)(&this->vtable48)); /*0x47ea14*/
          v11 = (int)(*content); /*0x47ea18*/
          v17 = (int)(0); /*0x47ea1b*/
          v15 = (int)((v9 << 8) + 128); /*0x47ea2e*/
          v16 = (int)((v10 << 8) + 128); /*0x47ea3c*/
        }
        else
        {
          v15 = (int)(content[39]);
          v11 = (int)(*content);
          v16 = (int)(content[40]);
          v17 = (int)(content[41]);
        }
        IDA_LOBYTE(v3) = (*(int ((unsigned int *)(**))(unsigned int *, int *))(v11 + 240))(content, &v15); /*0x47ea43*/
      }
    }
  }
  return v3; /*0x47ea49*/
}
// 0x47ea90
void CellClass::RemoveContent(ObjectClass* content, bool on_bridge)
{
  unsigned int *v4; // eax
  unsigned int *v5; // ecx
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  if ( !content ) /*0x47ea9d*/
    return; /*0x47ea9d*/
  if ( on_bridge ) /*0x47eaa9*/
    v4 = (unsigned int *)((unsigned int)(*(unsigned int **)(this + 232))); /*0x47eaab*/
  else
    v4 = (unsigned int *)((unsigned int)(*(unsigned int **)(this + 228))); /*0x47eab3*/
  if ( v4 == (unsigned int *)(content) ) /*0x47eabb*/
  {
    if ( on_bridge ) /*0x47eabf*/
      *(unsigned int *)(this + 232) = (unsigned int)(content[12]); /*0x47eac4*/
    else
      *(unsigned int *)(this + 228) = (unsigned int)(content[12]); /*0x47eacf*/
  LABEL_14:
    content[12] = 0; /*0x47eaf0*/
    goto LABEL_15; /*0x47eaf0*/
  }
  if ( v4 ) /*0x47ead9*/
  {
    while ( 1 ) /*0x47eadb*/
    {
      v5 = (unsigned int *)v4[12]; /*0x47eadb*/
      if ( v5 == (unsigned int *)(content) ) /*0x47eae0*/
        break; /*0x47eae0*/
      v4 = (unsigned int *)v4[12]; /*0x47eae2*/
      if ( !v5 ) /*0x47eae6*/
        goto LABEL_15; /*0x47eae6*/
    }
    v4[12] = (unsigned int)(content[12]);
    goto LABEL_14; /*0x47eaed*/
  }
  LABEL_15:
  if ( (*(int (**)(unsigned int *))(*content + 44))(content) != 15 /*0x47eb0b*/
    && (*(uint8_t (**)(unsigned int *))(*content + 192))(content) )
  {
    if ( (*(int (**)(unsigned int *))(*content + 44))(content) == 6 ) /*0x47eb1f*/
    {
      v6 = *(int16_t *)(this + 36); /*0x47eb21*/
      v7 = (int)(*(int16_t *)(this + 38)); /*0x47eb25*/
      v8 = (int)(*content); /*0x47eb29*/
      v11 = (int)(0); /*0x47eb2b*/
      v9 = (int)((v6 << 8) + 128); /*0x47eb3c*/
      v10 = (int)((v7 << 8) + 128); /*0x47eb50*/
    }
    else
    {
      v9 = (int)(content[39]);
      v8 = (int)(*content);
      v10 = (int)(content[40]);
      v11 = (int)(content[41]);
    }
    (*(void ((unsigned int *)(**))(unsigned int *, int *))(v8 + 244))(content, &v9); /*0x47eb54*/
  }
}
ObjectClass* CellClass::GetSomeObject(const CoordStruct& coords, bool alt) const
{
    // Returns the first object on this cell (or alt list)
    return alt ? altObject : firstObject;
}

CoordStruct* CellClass::GetCenterCoords(CoordStruct* out) const
{
    if (!out)
        return out;
    // Center = cell top-left + half cell width in leptons
    out->X = (int)(mapCoords.X) * 256 + 128;
    out->Y = (int)(mapCoords.Y) * 256 + 128;
    out->Z = (int)(height);
    return out;
}

int CellClass::GetFloorHeight(const Point2D& subcoords) const
{
    // Get floor height at sub-cell position
    (void)subcoords;
    return (int)(height);
}

void CellClass::SetMapCoords(const CoordStruct& coords)
{
    mapCoords.X = (int16_t)(coords.X / 256);
    mapCoords.Y = (int16_t)(coords.Y / 256);
    height = (int8_t)(coords.Z);
}

CoordStruct* CellClass::FindInfantrySubposition(CoordStruct* out, const CoordStruct& coords,
    bool ignore_contents, bool alt, bool use_cell_coords)
{
    if (!out)
        return out;
    // Find a free sub-position for infantry placement within this cell
    // 5 sub-positions arranged in a cross pattern within a cell
    *out = coords;
    (void)ignore_contents;
    (void)alt;
    (void)use_cell_coords;
    return out;
}

bool CellClass::TryAssignJumpjet(FootClass* object)
{
    if (!object || jumpjet)
        return false;
    jumpjet = object;
    return true;
}

void CellClass::ReplaceTag(TagClass* tag)
{
    attachedTag = tag;
}

// 0x47d210
void CellClass::SetWallOwner(int a1, int a5, int a6)
{
  int result; // eax
  int v2; // ebp
  int v3; // ebx
  int i; // edi
  int v5; // esi
  int v6; // eax

  result = *(unsigned int *)((unsigned int)(a1)+ 68); /*0x47d211*/
  a1 = a1; /*0x47d214*/
  if ( result != -1 ) /*0x47d21b*/
  {
    result = *(unsigned int *)&g_BuildingTypeClass_Array->gap0[4 * result]; /*0x47d227*/
    if ( *(unsigned char *)(result + 680) ) /*0x47d22a*/
    {
      result = g_BuildingProductionState; /*0x47d234*/
      v2 = -1; /*0x47d23b*/
      v3 = 0; /*0x47d23e*/
      for ( i = 0x7FFFFFFF; v3 < g_BuildingProductionState; ++v3 ) /*0x47d248*/
      {
        v5 = *((unsigned int *)g_BuildingClass_InstanceCount + v3); /*0x47d251*/
        if ( v5->q090 && v5->q074 && *(unsigned char *)(v5->q21C->q034 + 423) ) /*0x47d26e*/
        {
          v6 = ObjectClass::DistanceTo((void *)v5, a1); /*0x47d27b*/
          if ( v6 < i ) /*0x47d282*/
          {
            i = v6; /*0x47d284*/
            v2 = (*(int (__thiscall **)(int))(v5->q038)(v5); /*0x47d28d*/
          }
        }
        result = g_BuildingProductionState; /*0x47d28f*/
        a1 = a1; /*0x47d294*/
      }
      *(unsigned int *)((unsigned int)(a1)+ 80) = v2; /*0x47d29e*/
    }
  }
  return result; /*0x47d2a5*/
}
bool CellClass::IsShrouded() const
{
    return shroudedness > 0;
}

// 0x4876f0
int CellClass::Unshroud()
{
  int copyFlags; // eax
  int result; // eax

  copyFlags = this->copyFlags; /*0x4876f0*/
  IDA_LOBYTE(copyFlags) = copyFlags | 0x18; /*0x4876f6*/
  this->copyFlags = copyFlags; /*0x4876f8*/
  result = this->shroudCounter; /*0x4876fe*/
  if ( result > 0 ) /*0x487706*/
  {
    result = this->flags[0]; /*0x487708*/
    IDA_LOBYTE(result) = result | 0x20; /*0x48770e*/
    this->flags[0] = result; /*0x487710*/
  }
  return result; /*0x487716*/
}
void CellClass::SetupLAT()
{
    // Setup Lighting and Tinting
}

void CellClass::Setup(uint32_t unk)
{
    (void)unk;
}

void CellClass::BlowUpBridge()
{
    if (ContainsBridge())
    {
        // Destroy bridge, scatter content
        flags = (CellFlags)((uint32_t)(flags) & ~0x8000u);
    }
}

bool CellClass::CanThisExistHere(SpeedType speed, BuildingTypeClass* object, HouseClass* owner) const
{
    (void)speed;
    (void)object;
    (void)owner;
    return true;
}

void CellClass::ScatterContent(const CoordStruct& crd, bool ignore_mission, bool ignore_dest, bool alt)
{
    ObjectClass* list = alt ? altObject : firstObject;
    while (list)
    {
        list->Scatter(crd, ignore_mission, ignore_dest);
        list = list->nextObject;
    }
}

CellClass* CellClass::GetNeighbourCell(unsigned int direction) const
{
    // Return adjacent cell in given direction (0-7)
    // Uses CellDirectionOffsets table
    (void)direction;
    return nullptr;
}

void CellClass::UpdateThreat(unsigned int source_house, int threat_level)
{
    (void)source_house;
    (void)threat_level;
}

void CellClass::CollectCrate(FootClass* collector)
{
    (void)collector;
    // Apply crate effect to collector
}

void CellClass::ProcessColourComponents(int* arg0, int* intensity, int* ambient,
    int* a5, int* a6, int* tint_r, int* tint_g, int* tint_b)
{
    (void)arg0;
    (void)intensity;
    (void)ambient;
    (void)a5;
    (void)a6;
    (void)tint_r;
    (void)tint_g;
    (void)tint_b;
}

TubeClass* CellClass::GetTunnel()
{
    if (tubeIndex >= 0)
    {
        // Return tunnel from tube array
    }
    return nullptr;
}

RectangleStruct* CellClass::GetContainingRect(RectangleStruct* dest) const
{
    return GetScreenRect(dest);
}

// 0x484ff0
const wchar_t* CellClass::GetUIName() const
{
  int BuildingByTiberiumType; // eax

  BuildingByTiberiumType = FindBuildingByTiberiumType(*(unsigned int *)&((unsigned char *)(this) + 0x28)[28]); /*0x484ff3*/
  if ( BuildingByTiberiumType == -1 ) /*0x484ffb*/
    return 0; /*0x48500a*/
  else
    return *(const wchar_t **)(*(unsigned int *)(((unsigned int *)&g_BuildingLoadQueue_Array)[2] + 4 * BuildingByTiberiumType) + 96); /*0x485006*/
}
int CellClass::GetContainedTiberiumIndex() const
{
    return overlayTypeIndex;
}

int CellClass::GetContainedTiberiumValue() const
{
    return 0;
}

bool CellClass::IncreaseTiberium(int idx_tiberium, int amount)
{
    (void)idx_tiberium;
    (void)amount;
    return false;
}

// 0x480a80
void CellClass::ReduceTiberium(int amount)
{
  int *PlacementRect; // edi
  int *StartCoords; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // edi
  int v12; // edx
  int v13; // ecx
  int v14; // ebx
  int BuildingByTiberiumType; // eax
  int v16; // ebx
  CellClass *v17; // ebp
  int *v18; // esi
  int i; // edi
  int v20; // eax
  int v22; // [esp+10h] [ebp-3Ch]
  int v23; // [esp+10h] [ebp-3Ch]
  int v25; // [esp+18h] [ebp-34h]
  int v27; // [esp+20h] [ebp-2Ch]
  int v28; // [esp+24h] [ebp-28h]
  char v31[16]; // [esp+2Ch] [ebp-20h] BYREF
  char v32[16]; // [esp+3Ch] [ebp-10h] BYREF

  PlacementRect = (int *)(BuildingClass::GetPlacementRect((BuildingClass *)this, (int *)v31));
  StartCoords = (int *)(House::GetStartCoords((House *)this, v32)); /*0x480a9c*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x480ab1*/
  {
    v12 = *PlacementRect; /*0x480b44*/
    v13 = PlacementRect[1]; /*0x480b46*/
    v14 = PlacementRect[2]; /*0x480b49*/
    v9 = PlacementRect[3]; /*0x480b4c*/
  }
  else
  {
    v22 = PlacementRect[2]; /*0x480abc*/
    if ( v22 <= 0 || (v25 = PlacementRect[3], v25 <= 0) ) /*0x480acb*/
    {
      v12 = *StartCoords; /*0x480b37*/
      v13 = StartCoords[1]; /*0x480b39*/
      v14 = StartCoords[2]; /*0x480b3c*/
      v9 = StartCoords[3]; /*0x480b3f*/
    }
    else
    {
      v5 = *StartCoords; /*0x480acd*/
      v6 = *PlacementRect; /*0x480acf*/
      v7 = StartCoords[2]; /*0x480ad1*/
      v8 = StartCoords[1]; /*0x480ad4*/
      v9 = StartCoords[3]; /*0x480ad7*/
      v28 = v7; /*0x480adc*/
      if ( v5 > *PlacementRect ) /*0x480ae0*/
      {
        v7 += v5 - v6; /*0x480ae4*/
        v5 = *PlacementRect; /*0x480ae6*/
        v28 = v7; /*0x480ae8*/
      }
      v10 = PlacementRect[1]; /*0x480aec*/
      v10 = v10; /*0x480af1*/
      if ( v8 > v10 ) /*0x480af5*/
      {
        v9 += v8 - v10; /*0x480af9*/
        v8 = v10; /*0x480afb*/
      }
      if ( v5 + v7 >= v6 + v22 ) /*0x480b07*/
        v11 = v28; /*0x480b15*/
      else
        v11 = v6 - v5 + v22 + 1; /*0x480b0f*/
      if ( v9 + v8 < v25 + v10 ) /*0x480b28*/
        v9 = v25 + v10 - v8 + 1; /*0x480b2d*/
      v12 = v5; /*0x480b2f*/
      v13 = v8; /*0x480b31*/
      v14 = v11; /*0x480b33*/
    }
  }
  v12 = v12; /*0x480b4f*/
  v27 = v13 - (unsigned int)DSurface_ViewBounds.field_4; /*0x480b5f*/
  v14 = v14; /*0x480b66*/
  v9 = v9; /*0x480b6a*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(&this->vtable27)); /*0x480b6e*/
  v16 = v23; /*0x480b73*/
  if ( v23 <= 0 || BuildingByTiberiumType == -1 ) /*0x480b82*/
    return 0; /*0x480ca3*/
  v17 = *(CellClass **)(((unsigned int *)&g_BuildingLoadQueue_Array)[2] + 4 * BuildingByTiberiumType); /*0x480b8e*/
  if ( this->powerup == 11 ) /*0x480b99*/
    CellClass::RegisterForRedraw(v17, (int16_t *)&this->vtable28); /*0x480ba1*/
  if ( *((uint8_t *)&this->estimatedHealth6) + 1 <= v16 ) /*0x480bb9*/
  {
    v16 = *((uint8_t *)&this->estimatedHealth6); /*0x480bc8*/
    *(&this->vtable27) = -1; /*0x480bce*/
    this->powerup = 0; /*0x480bd5*/
    House::AnnounceUpgrade((int)this, -1); /*0x480bdc*/
    v18 = &this->objectTypeFlags; /*0x480be1*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v18); /*0x480bea*/
    CellClass::ClearCrateStateForAll((CellClass *)v18); /*0x480bf1*/
    for ( i = 0; i < 8; ++i ) /*0x480bf6*/
    {
      v20 = i & 7; /*0x480bfa*/
      IDA_LOWORD(v23) = *(unsigned short *)v18 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v20 + 82]); /*0x480c1b*/
      IDA_HIWORD(v23) = *((unsigned short *)v18 + 1) + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v20 + 82]); /*0x480c24*/
      v23 = v23; /*0x480c33*/
      if ( (uint8_t)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&v23) ) /*0x480c37*/
      {
        if ( !*((unsigned char *)&v17->radSite->AbstractClass + Cell::PosToIndex((Cell *)&v23)) ) /*0x480c4f*/
          BuildingClass::AddOccupancy(v17->mapCoords, (int16_t *)&v23); /*0x480c5c*/
      }
    }
  }
  else
  {
    this->u32_11E -= v16; /*0x480bbd*/
  }
  Cell::CreateCrater(v12, v27, v14, v9, 0); /*0x480c8f*/
  return v16; /*0x480c96*/
}
void CellClass::ActivateVeins()
{
    // Activate vein growth from this cell
}

bool CellClass::IsRadiated() const
{
    return radSite != nullptr;
}

int CellClass::GetRadLevel() const
{
    return (int)(radLevel);
}

void CellClass::RadLevelIncrease(double v23)
{
    radLevel += v23;
}

void CellClass::RadLevelDecrease(double v23)
{
    radLevel -= v23;
    if (radLevel < 0.0)
        radLevel = 0.0;
}

bool CellClass::Tile_Is_Tunnel() const { return ((uint32_t)(flags) & 0x400000) != 0; }
bool CellClass::Tile_Is_Water() const { return ((uint32_t)(flags) & 0x800) != 0; }
bool CellClass::Tile_Is_Blank() const { return slopeIndex == 0; }
bool CellClass::Tile_Is_Ramp() const { return ((uint32_t)(flags) & 0x10000) != 0; }
bool CellClass::Tile_Is_Cliff() const { return ((uint32_t)(flags) & 0x2000) != 0; }
bool CellClass::Tile_Is_Shore() const { return ((uint32_t)(flags) & 0x40000000) != 0; }
bool CellClass::Tile_Is_Wet() const { return ((uint32_t)(flags) & 0x200) != 0; }
bool CellClass::Tile_Is_Pave() const { return false; }
bool CellClass::Tile_Is_DirtRoad() const { return false; }
bool CellClass::Tile_Is_PavedRoad() const { return false; }
bool CellClass::Tile_Is_PavedRoadEnd() const { return false; }
bool CellClass::Tile_Is_PavedRoadSlope() const { return false; }
bool CellClass::Tile_Is_Median() const { return false; }
bool CellClass::Tile_Is_Bridge() const { return ContainsBridge(); }
bool CellClass::Tile_Is_WoodBridge() const { return false; }
bool CellClass::Tile_Is_Green() const { return false; }
bool CellClass::Tile_Is_NotWater() const { return !Tile_Is_Water(); }
bool CellClass::Tile_Is_DestroyableCliff() const
{
    return ((uint32_t)(flags) & 0x08000000) != 0;
}

// 0x484AB0
int CellClass::IsTunnelEntrance()
{
  int16_t v1; // ax

  v1 = IDA_HIWORD(((unsigned int *)this)[0]); /*0x484ab0*/
  return v1 >= 0 && v1 < ((unsigned int *)&FootClass_Array)[0] && ((unsigned int *)this)[3] == 10; /*0x484ad7*/
}