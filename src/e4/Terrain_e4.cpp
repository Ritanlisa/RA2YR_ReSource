// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/Territory_WorldDominationTour_8_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/E4Recv_7714B0_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/TemporalClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"

// 0x48B720
namespace gamemd {
int Terrain::GetTileIndex(int a2)
{

  return (*((unsigned int *)this->Terrain_field_0x24 + 9 * *((unsigned int *)this->Terrain_field_0x30 + a2)) & 1) != 0
       ? (int)this->Terrain_field_0x24 + 36 * *((unsigned int *)this->Terrain_field_0x30 + a2)
       : 0;

}
}
// 0x48B9E0
namespace gamemd {
int Terrain::GetTileType(int aP1)
{

  return (*((unsigned int *)this->Terrain_field_0x34 + 6 * *((unsigned int *)this->Terrain_field_0x40 + aP1)) & 1) != 0
       ? (int)this->Terrain_field_0x34 + 24 * *((unsigned int *)this->Terrain_field_0x40 + aP1)
       : 0;

}
}
// 0x568E40
namespace gamemd {
AbstractClass * * VectorClass_flat::PlaceCliffs(int a2, int a3, IUnknown * aP3)
{
    (void)a2; (void)a3; (void)aP3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00568E40.json)
}
}
// 0x56C510
namespace gamemd {
AbstractClass * * VectorClass_flat::ConnectivityGraph(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056C510.json)
}
}
// 0x56CB90
namespace gamemd {
int VectorClass_flat::FloodFillConnectivity(unsigned __int8 *a1, int aP2, unsigned int *aP3)
{
    (void)a1; (void)aP2; (void)aP3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056CB90.json)
}
}
// 0x570050
namespace gamemd {
AbstractClass * * VectorClass_flat::ProcessCellModification(IUnknown * aP1)
{
    (void)aP1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00570050.json)
}
}
// 0x573540
namespace gamemd {
AbstractClass * * VectorClass_flat::RecursiveModify(IUnknown * aP1)
{
    (void)aP1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00573540.json)
}
}
// 0x576770
namespace gamemd {
int VectorClass_flat::CreateCrater(IUnknown * aP1, void *a2_1, void *a3_1, void *a4_1, void *a5_1)
{
    (void)aP1; (void)a2_1; (void)a3_1; (void)a4_1; (void)a5_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00576770.json)
}
}
// 0x579620
namespace gamemd {
VectorClass_flat * * VectorClass_flat::SelectTileType(Random * aP0, IUnknown * aP1)
{
    (void)aP0; (void)aP1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00579620.json)
}
}
// 0x5A28C0
namespace gamemd {
void VectorClass_flat::PlaceTiberiumTrees(ScenarioClass * aP0, int a2, int a3, char a4)
{
    (void)aP0; (void)a2; (void)a3; (void)a4;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005A28C0.json)
}
}
// 0x6D6410
namespace gamemd {
unsigned int * VectorClass_flat::ClimbCheck(AbstractClass * aP0, AbstractClass * aP1)
{
    (void)aP0; (void)aP1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D6410.json)
}
} // namespace gamemd

// 0x71DD80
namespace gamemd {
int VectorClass_flat::LookupByName()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071DD80.json)
}
} // namespace gamemd
