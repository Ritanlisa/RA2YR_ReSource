// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VectorClass_BombClass_e4.hpp"
#include "e4/classes/VectorClass_BuildingType_e4.hpp"
#include "e4/classes/VectorClass_Building_e4.hpp"
#include "e4/classes/VectorClass_Cell_e4.hpp"
#include "e4/classes/VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass_e4.hpp"
#include "e4/classes/VectorClass_E_e4.hpp"
#include "e4/classes/VectorClass_InfantryPtr_e4.hpp"
#include "e4/classes/VectorClass_K_14_e4.hpp"
#include "e4/classes/VectorClass_K_20_e4.hpp"
#include "e4/classes/VectorClass_K_26_e4.hpp"
#include "e4/classes/VectorClass_K_32_e4.hpp"
#include "e4/classes/VectorClass_K_38_e4.hpp"
#include "e4/classes/VectorClass_K_44_e4.hpp"
#include "e4/classes/VectorClass_K_8_e4.hpp"
#include "e4/classes/VectorClass_K_e4.hpp"
#include "e4/classes/VectorClass_N_e4.hpp"
#include "e4/classes/VectorClass_PAE_e4.hpp"
#include "e4/classes/VectorClass_PAG_e4.hpp"
#include "e4/classes/VectorClass_PBG_e4.hpp"
#include "e4/classes/VectorClass_Point2D_e4.hpp"
#include "e4/classes/VectorClass_Ptr_e4.hpp"
#include "e4/classes/VectorClass_ReestablishPtr_e4.hpp"
#include "e4/classes/VectorClass_Scenario2_e4.hpp"
#include "e4/classes/VectorClass_Scenario3_e4.hpp"
#include "e4/classes/VectorClass_Scenario_e4.hpp"
#include "e4/classes/VectorClass_SuperPtr_e4.hpp"
#include "e4/classes/VectorClass_TPoint3D_int_e4.hpp"
#include "e4/classes/VectorClass_Techno_e4.hpp"
#include "e4/classes/VectorClass_UAcceleratorTracker_e4.hpp"
#include "e4/classes/VectorClass_UAngerStruct___16_e4.hpp"
#include "e4/classes/VectorClass_UAngerStruct_e4.hpp"
#include "e4/classes/VectorClass_UDirtyAreaStruct___16_e4.hpp"
#include "e4/classes/VectorClass_UDirtyAreaStruct_e4.hpp"
#include "e4/classes/VectorClass_UHashObject_uint_SubzoneConn_e4.hpp"
#include "e4/classes/VectorClass_UHashObject_uint_uint_e4.hpp"
#include "e4/classes/VectorClass_UScoutStruct___33_e4.hpp"
#include "e4/classes/VectorClass_UScoutStruct_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/VectorClass_USubzoneTrackingStruct_e4.hpp"
#include "e4/classes/VectorClass_UUndoInfoStruct_e4.hpp"
#include "e4/classes/VectorClass_UtagCONNECTDATA_e4.hpp"
#include "e4/classes/VectorClass_W4PassabilityType_e4.hpp"
#include "e4/classes/VectorClass_Wstring_e4.hpp"
#include "e4/classes/VectorClass__N_18_e4.hpp"
#include "e4/classes/VectorClass__N_e4.hpp"
#include "e4/classes/VectorClass_cptr_CommandClass_e4.hpp"
#include "e4/classes/VectorClass_cptr_MultiMission_e4.hpp"
#include "e4/classes/VectorClass_ptr_AITriggerTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AbstractTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AircraftClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AircraftTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AirstrikeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AlphaShapeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AnimClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_AnimTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BombClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BuildChoiceClass_int_ouseClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BuildingLightClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BuildingTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BulletClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BulletTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_CCINIClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_CampaignClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_CaptureManagerClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ColorScheme_e4.hpp"
#include "e4/classes/VectorClass_ptr_ConvertClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_CrossDissolveEffect_e4.hpp"
#include "e4/classes/VectorClass_ptr_DamageGroup_e4.hpp"
#include "e4/classes/VectorClass_ptr_EBolt_e4.hpp"
#include "e4/classes/VectorClass_ptr_EMPulseClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_EgoClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_FactoryClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_FoggedObjectClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_GlobalPacketType_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_HouseClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_HouseTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_InfantryClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_InfantryTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_IonBlastClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_IsometricTileClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_IsometricTileTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_LaserDrawClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_LightConvertClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_LightSourceClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_LineTrail_e4.hpp"
#include "e4/classes/VectorClass_ptr_MSSfxEntry_e4.hpp"
#include "e4/classes/VectorClass_ptr_MSSfx_e4.hpp"
#include "e4/classes/VectorClass_ptr_MSTextEntry_e4.hpp"
#include "e4/classes/VectorClass_ptr_MapRegionClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_MapSelection_e4.hpp"
#include "e4/classes/VectorClass_ptr_MixFileClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_MovieHandle_e4.hpp"
#include "e4/classes/VectorClass_ptr_MultiMission_e4.hpp"
#include "e4/classes/VectorClass_ptr_MultiplayerTeam_e4.hpp"
#include "e4/classes/VectorClass_ptr_ObjectTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_OverlayClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_OverlayTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ParasiteClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ParticleSystemClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ParticleTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PendingCellClass_LightSourceClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PhoneEntryClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PlanningBranchClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PlanningMemberClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PlanningTokenClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_RadBeam_e4.hpp"
#include "e4/classes/VectorClass_ptr_RadSiteClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_RadarEventClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_Reestablish_e4.hpp"
#include "e4/classes/VectorClass_ptr_ScriptClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ScriptTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SideClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SlaveManagerClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SmudgeTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SpawnManagerClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SpotLightClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SubTitle_e4.hpp"
#include "e4/classes/VectorClass_ptr_SuperClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TEventClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TagTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TaskForceClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TeamClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TeamTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TemporalClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TerrainTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ThemeControl_e4.hpp"
#include "e4/classes/VectorClass_ptr_TiberiumClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TriggerClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TriggerTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_TubeClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_UnitClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_UnitTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_VocClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_VoxClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_VoxelAnimClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_WarheadTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_WaveClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_WaypointPathClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_WeaponTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass_e4.hpp"
#include "e4/classes/VectorClass_rc_ptr_WDTTerritory_e4.hpp"
#include "e4/classes/VectorClass_ushort_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/VectorClass_e_e4.hpp"
#include "e4/classes/EnumConnectionPointsClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/VeinholeMonsterClass_e4.hpp"
#include "e4/classes/VectorCursor_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"  // G42.36 C2027 supply

// 0x4137A0
namespace gamemd {
int VectorClass_flat::RemoveObjectById()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004137A0.json)
}
} // namespace gamemd
// 0x65A970
namespace gamemd {
int VectorClass_flat::RemoveElement()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A970.json)
}
} // namespace gamemd
// 0x763BA0
namespace gamemd {
int VectorClass_flat::GetAtChecked(IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00763BA0.json)
}
} // namespace gamemd
// 0x42F6F0
namespace gamemd {
AbstractClass * * VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042F6F0.json)
}
}
// 0x4E0840
namespace gamemd {
AbstractClass * * DynamicVector::Release(int a2, int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0840.json)
}
}
// 0x4E0B10
namespace gamemd {
AbstractClass * * DynamicVector::SetCapacity(int a2, int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0B10.json)
}
}
// 0x4A2820
namespace gamemd {
unsigned int * Constructor(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1)
{
    (void)a1_1; (void)a2_1; (void)a3_1; (void)a4_1; (void)a5_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A2820.json)
}
}
// 0x5AD010
namespace gamemd {
AbstractClass * * ResizeAndCopy(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD010.json)
}
}
// 0x4A0C20
namespace gamemd {
unsigned int * VectorClass_flat::Constructor(EnumConnectionPointsClass * aP1, void *a2_1, void *a3_1)
{
    (void)aP1; (void)a2_1; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A0C20.json)
}
}
// 0x4F6A20
namespace gamemd {
int VectorClass_flat::SetCapacity(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F6A20.json)
}
}
// 0x4F6A80
namespace gamemd {
int VectorClass_flat::SetCapacity_0(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F6A80.json)
}
}
// 0x4F6AE0
namespace gamemd {
int VectorClass_flat::SetCapacity_1(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F6AE0.json)
}
}
// 0x4F6B50
namespace gamemd {
int VectorClass_flat::SetCapacity_2(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F6B50.json)
}
}
// 0x4F6BC0
namespace gamemd {
unsigned int * VectorClass_flat::SetCapacity_3(int a1, unsigned int * a2)
{
    (void)a1; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F6BC0.json)
}
}
// 0x4F6D10
namespace gamemd {
unsigned int * VectorClass_flat::SetCapacity_4(int a1, unsigned int * a2)
{
    (void)a1; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F6D10.json)
}
}
// 0x501400
namespace gamemd {
int VectorClass_flat::SetCapacity_5(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00501400.json)
}
}
// 0x50F520
namespace gamemd {
AbstractClass * * VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F520.json)
}
}
// 0x50F660
namespace gamemd {
AbstractClass * * VectorClass_flat::SetCapacity_6(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F660.json)
}
}
// 0x6288F0
namespace gamemd {
AbstractClass * * VectorClass_flat::SetCapacity_0(CCINIClass * aP1, unsigned char * a2)
{
    (void)aP1; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006288F0.json)
}
}
// 0x491210
namespace gamemd {
void * DynamicVector::Constructor_ConvertClass(void ** Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491210.json)
}
}
// 0x4E1960
namespace gamemd {
void VectorClass_ptr_ConvertClass::MarkDirty()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E1960.json)
}
}
// 0x63E090
namespace gamemd {
AbstractClass * * VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E090.json)
}
}
// 0x76B8C0
namespace gamemd {
int VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076B8C0.json)
}
}
// 0x5D8470
namespace gamemd {
AbstractClass * * ResizeAndCopy(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8470.json)
}
}
// 0x5D8730
namespace gamemd {
AbstractClass * * ResizeAndCopy(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8730.json)
}
}
// 0x5D8590
namespace gamemd {
AbstractClass * * ResizeAndCopy(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8590.json)
}
}
// 0x4E9840
namespace gamemd {
AbstractClass * * ResizeAndCopy(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9840.json)
}
}
// 0x6DC850
namespace gamemd {
AbstractClass * * VectorClass_flat::SetCapacity(CCINIClass * aP1, char * a2)
{
    (void)aP1; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC850.json)
}
}
// 0x6B44A0
namespace gamemd {
AbstractClass * * DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B44A0.json)
}
}
// 0x6B4650
namespace gamemd {
AbstractClass * * DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B4650.json)
}
}
// 0x40B120
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::Clear(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B120.json)
}
}  // G42.18c ns repair
// 0x40B140
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::AddRef(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B140.json)
}
}  // G42.18c ns repair
// 0x40B180
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::Release(int a2, char * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B180.json)
}
}  // G42.18c ns repair
// 0x40B270
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::Cleanup5()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B270.json)
}
}  // G42.18c ns repair
// 0x40B2A0
namespace gamemd {  // G42.18c ns repair
int  VectorClass_flat::GetSize(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B2A0.json)
}
}  // G42.18c ns repair
// 0x40B2E0
namespace gamemd {  // G42.18c ns repair
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B2E0.json)
}
}  // G42.18c ns repair
// 0x40B300
namespace gamemd {  // G42.18c ns repair
VectorClass_flat *  VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B300.json)
}
}  // G42.18c ns repair
// 0x40B690
namespace gamemd {
int VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0040B690.json)
}
} // namespace gamemd

// 0x40B700
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B700.json)
}
} // namespace gamemd

// 0x40B7F0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B7F0.json)
}
} // namespace gamemd

// 0x40B820
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B820.json)
}
} // namespace gamemd

// 0x40B860
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B860.json)
}
} // namespace gamemd

// 0x40BA50
namespace gamemd {
wchar_t * ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040BA50.json)
}
} // namespace gamemd

// 0x40BA80
namespace gamemd {
int GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040BA80.json)
}
} // namespace gamemd

// 0x40BAC0
namespace gamemd {
unsigned int GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040BAC0.json)
}
} // namespace gamemd

// 0x40BBC0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040BBC0.json)
}
} // namespace gamemd

// 0x40BC60
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040BC60.json)
}
} // namespace gamemd

// 0x40BEA0
namespace gamemd {
int Capacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0040BEA0.json)
}
} // namespace gamemd

// 0x40BEB0
namespace gamemd {
char GetAt(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040BEB0.json)
}
} // namespace gamemd

// 0x40BEF0
namespace gamemd {
char Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040BEF0.json)
}
} // namespace gamemd

// 0x40BFA0
namespace gamemd {
void SetAt()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040BFA0.json)
}
} // namespace gamemd

// 0x40BFD0
namespace gamemd {
int GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040BFD0.json)
}
} // namespace gamemd

// 0x40C010
namespace gamemd {
unsigned int GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C010.json)
}
} // namespace gamemd

// 0x40C230
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C230.json)
}
} // namespace gamemd

// 0x40C280
namespace gamemd {
int VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0040C280.json)
}
} // namespace gamemd

// 0x40C290
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C290.json)
}
} // namespace gamemd

// 0x40C2D0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C2D0.json)
}
} // namespace gamemd

// 0x40C380
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C380.json)
}
} // namespace gamemd

// 0x40C3B0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C3B0.json)
}
} // namespace gamemd

// 0x40C3F0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C3F0.json)
}
} // namespace gamemd

// 0x40C4C0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C4C0.json)
}
} // namespace gamemd

// 0x40C4F0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C4F0.json)
}
} // namespace gamemd

// 0x40C540
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_LightConvertClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C540.json)
}
} // namespace gamemd

// 0x40C820
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C820.json)
}
} // namespace gamemd

// 0x40C850
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C850.json)
}
} // namespace gamemd

// 0x40C870
namespace gamemd {
int VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0040C870.json)
}
} // namespace gamemd

// 0x40C880
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C880.json)
}
} // namespace gamemd

// 0x40C8C0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C8C0.json)
}
} // namespace gamemd

// 0x40C970
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C970.json)
}
} // namespace gamemd

// 0x40C9A0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C9A0.json)
}
} // namespace gamemd

// 0x40C9E0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040C9E0.json)
}
} // namespace gamemd

// 0x40CA00
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CA00.json)
}
} // namespace gamemd

// 0x40CAB0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CAB0.json)
}
} // namespace gamemd

// 0x40CAE0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CAE0.json)
}
} // namespace gamemd

// 0x40CB30
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_IsometricTileClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CB30.json)
}
} // namespace gamemd

// 0x40CC00
namespace gamemd {
int VectorClass_flat::GetItem()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0040CC00.json)
}
} // namespace gamemd

// 0x40CC20
namespace gamemd {
LogicClass * VectorClass_flat::Constructor_VectorClass_ObjectClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CC20.json)
}
} // namespace gamemd

// 0x40CC70
namespace gamemd {
void VectorClass_flat::TryFreeAndClear()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CC70.json)
}
} // namespace gamemd

// 0x40CCA0
namespace gamemd {
unsigned int VectorClass_flat::GetPtrOffset(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CCA0.json)
}
} // namespace gamemd

// 0x40CCC0
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::GetAt(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x40CCC0)
}
}  // G42.18c ns repair
// 0x40CF00
namespace gamemd {
int VectorClass_flat::FindValue(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CF00.json)
}
} // namespace gamemd

// 0x40D590
namespace gamemd {
int VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0040D590.json)
}
} // namespace gamemd

// 0x40D5A0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040D5A0.json)
}
} // namespace gamemd

// 0x40D5E0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040D5E0.json)
}
} // namespace gamemd

// 0x40D690
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040D690.json)
}
} // namespace gamemd

// 0x40D6C0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040D6C0.json)
}
} // namespace gamemd

// 0x40D700
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040D700.json)
}
} // namespace gamemd

// 0x40D800
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040D800.json)
}
} // namespace gamemd

// 0x40E7F0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040E7F0.json)
}
} // namespace gamemd

// 0x40E820
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040E820.json)
}
} // namespace gamemd

// 0x40E840
namespace gamemd {
int DynamicVector::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0040E840.json)
}
} // namespace gamemd

// 0x40E850
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040E850.json)
}
} // namespace gamemd

// 0x40E890
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040E890.json)
}
} // namespace gamemd

// 0x40E940
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040E940.json)
}
} // namespace gamemd

// 0x40E970
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040E970.json)
}
} // namespace gamemd

// 0x40E9B0
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040E9B0.json)
}
} // namespace gamemd

// 0x40E9D0
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040E9D0.json)
}
} // namespace gamemd

// 0x40EA80
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040EA80.json)
}
} // namespace gamemd

// 0x40EAB0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040EAB0.json)
}
} // namespace gamemd

// 0x40EB00
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_ScriptClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040EB00.json)
}
} // namespace gamemd

// 0x40EEC0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040EEC0.json)
}
} // namespace gamemd

// 0x40EEF0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040EEF0.json)
}
} // namespace gamemd

// 0x40EF10
namespace gamemd {
int VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0040EF10.json)
}
} // namespace gamemd

// 0x40EF20
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040EF20.json)
}
} // namespace gamemd

// 0x40EF60
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040EF60.json)
}
} // namespace gamemd

// 0x40F010
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F010.json)
}
} // namespace gamemd

// 0x40F040
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F040.json)
}
} // namespace gamemd

// 0x40F080
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F080.json)
}
} // namespace gamemd

// 0x40F0A0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F0A0.json)
}
} // namespace gamemd

// 0x40F150
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F150.json)
}
} // namespace gamemd

// 0x40F180
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F180.json)
}
} // namespace gamemd

// 0x40F1D0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_VoxelAnimClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F1D0.json)
}
} // namespace gamemd

// 0x40F5E0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F5E0.json)
}
} // namespace gamemd

// 0x40F610
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F610.json)
}
} // namespace gamemd

// 0x40F630
namespace gamemd {
int VectorClass_ptr_WarheadTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x40f63a*/

}
} // namespace gamemd

// 0x40F640
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F640.json)
}
} // namespace gamemd

// 0x40F680
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F680.json)
}
} // namespace gamemd

// 0x40F730
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F730.json)
}
} // namespace gamemd

// 0x40F760
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F760.json)
}
} // namespace gamemd

// 0x40F7A0
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F7A0.json)
}
} // namespace gamemd

// 0x40F7C0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F7C0.json)
}
} // namespace gamemd

// 0x40F870
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F870.json)
}
} // namespace gamemd

// 0x40F8A0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F8A0.json)
}
} // namespace gamemd

// 0x40F8F0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_WarheadTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040F8F0.json)
}
} // namespace gamemd

// 0x40FBB0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040FBB0.json)
}
} // namespace gamemd

// 0x40FBE0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040FBE0.json)
}
} // namespace gamemd

// 0x40FC00
namespace gamemd {
int VectorClass_ptr_WeaponTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x40fc0a*/

}
} // namespace gamemd

// 0x40FC10
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040FC10.json)
}
} // namespace gamemd

// 0x40FC50
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040FC50.json)
}
} // namespace gamemd

// 0x40FD00
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040FD00.json)
}
} // namespace gamemd

// 0x40FD30
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040FD30.json)
}
} // namespace gamemd

// 0x40FD70
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040FD70.json)
}
} // namespace gamemd

// 0x40FD90
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040FD90.json)
}
} // namespace gamemd

// 0x40FE40
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040FE40.json)
}
} // namespace gamemd

// 0x40FE70
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040FE70.json)
}
} // namespace gamemd

// 0x40FEC0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_WeaponTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040FEC0.json)
}
} // namespace gamemd

// 0x41DDE0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041DDE0.json)
}
} // namespace gamemd

// 0x41DE10
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041DE10.json)
}
} // namespace gamemd

// 0x41DE30
namespace gamemd {
int VectorClass_ptr_AirstrikeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x41de3a*/

}
} // namespace gamemd

// 0x41DE40
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041DE40.json)
}
} // namespace gamemd

// 0x41DE80
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041DE80.json)
}
} // namespace gamemd

// 0x41DF30
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041DF30.json)
}
} // namespace gamemd

// 0x41DF60
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041DF60.json)
}
} // namespace gamemd

// 0x41DFA0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041DFA0.json)
}
} // namespace gamemd

// 0x41DFC0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041DFC0.json)
}
} // namespace gamemd

// 0x41E070
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041E070.json)
}
} // namespace gamemd

// 0x41E0A0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041E0A0.json)
}
} // namespace gamemd

// 0x41E0F0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_AirstrikeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041E0F0.json)
}
} // namespace gamemd

// 0x421800
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00421800.json)
}
} // namespace gamemd

// 0x421830
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00421830.json)
}
} // namespace gamemd

// 0x421850
namespace gamemd {
int VectorClass_ptr_AlphaShapeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x42185a*/

}
} // namespace gamemd

// 0x421860
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00421860.json)
}
} // namespace gamemd

// 0x4218A0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004218A0.json)
}
} // namespace gamemd

// 0x421950
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00421950.json)
}
} // namespace gamemd

// 0x421980
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00421980.json)
}
} // namespace gamemd

// 0x4219C0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004219C0.json)
}
} // namespace gamemd

// 0x4219E0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004219E0.json)
}
} // namespace gamemd

// 0x421A90
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00421A90.json)
}
} // namespace gamemd

// 0x421AC0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00421AC0.json)
}
} // namespace gamemd

// 0x421B10
namespace gamemd {
unsigned int * VectorClass_flat::loc_421B10(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00421B10.json)
}
} // namespace gamemd

// 0x42D5A0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042D5A0.json)
}
} // namespace gamemd

// 0x42D5D0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042D5D0.json)
}
} // namespace gamemd

// 0x42D5F0
namespace gamemd {
short VectorClass_ushort::Clear(int a2)
{

  return *(unsigned short *)(*(unsigned int *)&this->m_1[3] + 2 * a2); /*0x42d5fb*/

}
} // namespace gamemd

// 0x42D8B0
namespace gamemd {
char DynamicVector::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042D8B0.json)
}
} // namespace gamemd

// 0x42D8F0
namespace gamemd {
char DynamicVector::Remove(int a2, unsigned short * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042D8F0.json)
}
} // namespace gamemd

// 0x42D9A0
namespace gamemd {
wchar_t * DynamicVector::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042D9A0.json)
}
} // namespace gamemd

// 0x42D9D0
namespace gamemd {
int DynamicVector::GetSize(unsigned short * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042D9D0.json)
}
} // namespace gamemd

// 0x42DA10
namespace gamemd {
unsigned int DynamicVector::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042DA10.json)
}
} // namespace gamemd

// 0x42DA30
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned short * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042DA30.json)
}
} // namespace gamemd

// 0x42DAE0
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned short * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042DAE0.json)
}
} // namespace gamemd

// 0x42DBB0
namespace gamemd {
VectorClass_ushort * DynamicVector::Add(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042DBB0.json)
}
} // namespace gamemd

// 0x42DC00
namespace gamemd {
DynamicVector * DynamicVector::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042DC00.json)
}
} // namespace gamemd

// 0x42F7F0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned short * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042F7F0.json)
}
} // namespace gamemd

// 0x42F840
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042F840.json)
}
} // namespace gamemd

// 0x42F860
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::ResizeEx(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042F860.json)
}
}  // G42.18c ns repair
// 0x42FBA0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042FBA0.json)
}
} // namespace gamemd

// 0x42FCB0
namespace gamemd {  // G42.18c ns repair
unsigned int * _::CellConstructor(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042FCB0.json)
}
}  // G42.18c ns repair
// 0x45A070
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A070.json)
}
} // namespace gamemd

// 0x45A0A0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A0A0.json)
}
} // namespace gamemd

// 0x45A0C0
namespace gamemd {
int VectorClass_ptr_FoggedObjectClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x45a0ca*/

}
} // namespace gamemd

// 0x45A0D0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A0D0.json)
}
} // namespace gamemd

// 0x45A100
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A100.json)
}
} // namespace gamemd

// 0x45A120
namespace gamemd {
int VectorClass_ptr_Reestablish::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x45a12a*/

}
} // namespace gamemd

// 0x45A270
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::Cleanup(void *a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A270.json)
}
}  // G42.18c ns repair
// 0x45A4D0
namespace gamemd {
void Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A4D0.json)
}
} // namespace gamemd

// 0x45A640
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A640.json)
}
} // namespace gamemd

// 0x45A680
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A680.json)
}
} // namespace gamemd

// 0x45A730
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A730.json)
}
} // namespace gamemd

// 0x45A760
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A760.json)
}
} // namespace gamemd

// 0x45A7A0
namespace gamemd {
char VectorClass_flat::Remove(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A7A0.json)
}
} // namespace gamemd

// 0x45A850
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A850.json)
}
} // namespace gamemd

// 0x45A880
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A880.json)
}
} // namespace gamemd

// 0x45A8C0
namespace gamemd {
unsigned int VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A8C0.json)
}
} // namespace gamemd

// 0x45A8E0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A8E0.json)
}
} // namespace gamemd

// 0x45A990
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045A990.json)
}
} // namespace gamemd

// 0x45AA10
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045AA10.json)
}
} // namespace gamemd

// 0x45AAB0
namespace gamemd {
DynamicVector * DynamicVector::Destruct(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045AAB0.json)
}
} // namespace gamemd

// 0x45AB00
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_FoggedObjectClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045AB00.json)
}
} // namespace gamemd

// 0x45AB50
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045AB50.json)
}
} // namespace gamemd

// 0x45AC00
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045AC00.json)
}
} // namespace gamemd

// 0x45AC30
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045AC30.json)
}
} // namespace gamemd

// 0x45AC70
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045AC70.json)
}
} // namespace gamemd

// 0x45AC90
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045AC90.json)
}
} // namespace gamemd

// 0x45ACE0
namespace gamemd {
VectorClass_flat * VectorClass_flat::Add(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045ACE0.json)
}
} // namespace gamemd

// 0x45AD30
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_Reestablish___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045AD30.json)
}
} // namespace gamemd

// 0x45AD80
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::ConstructorWithVtable(TechnoTypeClass * aP1, TechnoTypeClass * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045AD80.json)
}
}  // G42.18c ns repair
// 0x45AE50
namespace gamemd {
unsigned int * BuildingClass::Construct(BuildingClass * aP1, BuildingClass * aP2, void *a3_1, void *a4_1, void *a5_1, void *a6_1)
{
    (void)aP1; (void)aP2; (void)a3_1; (void)a4_1; (void)a5_1; (void)a6_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045AE50.json)
}
} // namespace gamemd

// 0x465DE0
namespace gamemd {
unsigned int * VectorClass_flat::Clear(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00465DE0.json)
}
} // namespace gamemd

// 0x465E10
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00465E10.json)
}
} // namespace gamemd

// 0x465E70
namespace gamemd {
char VectorClass_flat::Release(int a2, char * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00465E70.json)
}
} // namespace gamemd

// 0x465F50
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00465F50.json)
}
} // namespace gamemd

// 0x465F80
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00465F80.json)
}
} // namespace gamemd

// 0x465FD0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00465FD0.json)
}
} // namespace gamemd

// 0x466080
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00466080.json)
}
} // namespace gamemd

// 0x46B5E0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B5E0.json)
}
} // namespace gamemd

// 0x46B610
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B610.json)
}
} // namespace gamemd

// 0x46B630
namespace gamemd {
int VectorClass_ptr_BulletClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x46b63a*/

}
} // namespace gamemd

// 0x46B660
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B660.json)
}
} // namespace gamemd

// 0x46B6A0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B6A0.json)
}
} // namespace gamemd

// 0x46B750
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B750.json)
}
} // namespace gamemd

// 0x46B780
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B780.json)
}
} // namespace gamemd

// 0x46B7C0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B7C0.json)
}
} // namespace gamemd

// 0x46B7E0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B7E0.json)
}
} // namespace gamemd

// 0x46B890
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B890.json)
}
} // namespace gamemd

// 0x46B8C0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B8C0.json)
}
} // namespace gamemd

// 0x46B910
namespace gamemd {
unsigned int * VectorClass_flat::loc_46B910(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B910.json)
}
} // namespace gamemd

// 0x46B990
namespace gamemd {
LONG VectorClass_ptr_BulletClass::GetItem(int a1)
{

  return BulletClass::CheckTargetValidity(a1 - 4);

}
} // namespace gamemd

// 0x46B9A0
namespace gamemd {
LONG VectorClass_ptr_BulletClass::GetItem_0(int a1)
{

  return BulletClass::ValidateTarget((volatile LONG *)(a1 - 4));

}
} // namespace gamemd

// 0x472AE0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00472AE0.json)
}
} // namespace gamemd

// 0x472B10
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00472B10.json)
}
} // namespace gamemd

// 0x472B30
namespace gamemd {
int VectorClass_ptr_CaptureManagerClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x472b3a*/

}
} // namespace gamemd

// 0x472DA0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00472DA0.json)
}
} // namespace gamemd

// 0x472DE0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00472DE0.json)
}
} // namespace gamemd

// 0x472E90
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00472E90.json)
}
} // namespace gamemd

// 0x472EC0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00472EC0.json)
}
} // namespace gamemd

// 0x472F00
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00472F00.json)
}
} // namespace gamemd

// 0x472F20
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00472F20.json)
}
} // namespace gamemd

// 0x472FD0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00472FD0.json)
}
} // namespace gamemd

// 0x4730A0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004730A0.json)
}
} // namespace gamemd

// 0x4730F0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_CaptureManagerClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004730F0.json)
}
} // namespace gamemd

// 0x477750
namespace gamemd {  // G42.18c ns repair
int * VectorClass_flat::ScalarDtor(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477750.json)
}
}  // G42.18c ns repair
// 0x4777B0
namespace gamemd {  // G42.18c ns repair
unsigned int * _::Copy(unsigned int *a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004777B0.json)
}
}  // G42.18c ns repair
// 0x477890
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::GetAt_Copy(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x47789a*/

}
}  // G42.18c ns repair
// 0x477BE0
namespace gamemd {  // G42.18c ns repair
unsigned int * _::Construct(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477BE0.json)
}
}  // G42.18c ns repair
// 0x477C70
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::vt02(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477C70.json)
}
}  // G42.18c ns repair
// 0x477D20
namespace gamemd {  // G42.18c ns repair
int _::Destroy()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477D20.json)
}
}  // G42.18c ns repair
// 0x477D50
namespace gamemd {  // G42.18c ns repair
int  VectorClass_flat::vt04(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477D50.json)
}
}  // G42.18c ns repair
// 0x477D90
namespace gamemd {  // G42.18c ns repair
unsigned int VectorClass_flat::vt05(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477D90.json)
}
}  // G42.18c ns repair
// 0x477E10
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::Resize(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477E10.json)
}
}  // G42.18c ns repair
// 0x478630
namespace gamemd {  // G42.18c ns repair
VectorClass_flat *  VectorClass_flat::vt00(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00478630.json)
}
}  // G42.18c ns repair
// 0x48AD10
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048AD10.json)
}
} // namespace gamemd

// 0x48AD40
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048AD40.json)
}
} // namespace gamemd

// 0x48AD60
namespace gamemd {
int VectorClass_ptr_DamageGroup::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x48ad6a*/

}
} // namespace gamemd

// 0x48AD70
namespace gamemd {
char DynamicVector::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048AD70.json)
}
} // namespace gamemd

// 0x48ADB0
namespace gamemd {
char DynamicVector::Remove(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048ADB0.json)
}
} // namespace gamemd

// 0x48AE60
namespace gamemd {
wchar_t * DynamicVector::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048AE60.json)
}
} // namespace gamemd

// 0x48AE90
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048AE90.json)
}
} // namespace gamemd

// 0x48AED0
namespace gamemd {
unsigned int DynamicVector::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048AED0.json)
}
} // namespace gamemd

// 0x48AEF0
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048AEF0.json)
}
} // namespace gamemd

// 0x48AFA0
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048AFA0.json)
}
} // namespace gamemd

// 0x48AFD0
namespace gamemd {
VectorClass_flat * DynamicVector::Add(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048AFD0.json)
}
} // namespace gamemd

// 0x48B020
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_DamageGroup___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048B020.json)
}
} // namespace gamemd

// 0x491390
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491390.json)
}
} // namespace gamemd

// 0x4913C0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004913C0.json)
}
} // namespace gamemd

// 0x4913E0
namespace gamemd {
int VectorClass_ptr_ConvertClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4913ea*/

}
} // namespace gamemd

// 0x49AE80
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049AE80.json)
}
} // namespace gamemd

// 0x49AEC0
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049AEC0.json)
}
} // namespace gamemd

// 0x49AF70
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049AF70.json)
}
} // namespace gamemd

// 0x49AFA0
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049AFA0.json)
}
} // namespace gamemd

// 0x49AFE0
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049AFE0.json)
}
} // namespace gamemd

// 0x49B000
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B000.json)
}
} // namespace gamemd

// 0x49B0B0
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B0B0.json)
}
} // namespace gamemd

// 0x49B0E0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B0E0.json)
}
} // namespace gamemd

// 0x49B130
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_ConvertClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B130.json)
}
} // namespace gamemd

// 0x49FB60
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::GetCount()
{

  return this->Count; /*0x49fb63*/

}
}  // G42.18c ns repair
// 0x4A0E10
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_tagCONNECTDATA_(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A0E10.json)
}
} // namespace gamemd

// 0x4A0EB0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A0EB0.json)
}
} // namespace gamemd

// 0x4A0EE0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A0EE0.json)
}
} // namespace gamemd

// 0x4A0F00
namespace gamemd {
unsigned int * VectorClass_flat::Clear(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A0F00.json)
}
} // namespace gamemd

// 0x4A0F80
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A0F80.json)
}
} // namespace gamemd

// 0x4A0FE0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A0FE0.json)
}
} // namespace gamemd

// 0x4A10A0
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::ClearAndFree2()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A10A0.json)
}
}  // G42.18c ns repair
// 0x4A10D0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A10D0.json)
}
} // namespace gamemd

// 0x4A1120
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A1120.json)
}
} // namespace gamemd

// 0x4A1140
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A1140.json)
}
} // namespace gamemd

// 0x4A1200
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A1200.json)
}
} // namespace gamemd

// 0x4A1330
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::CleanupTyped()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A1330.json)
}
}  // G42.18c ns repair
// 0x4A14A0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A14A0.json)
}
} // namespace gamemd

// 0x4A7FE0
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::AppendCopy(DynamicVector * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A7FE0.json)
}
}  // G42.18c ns repair
// 0x4B9C30
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::GetItem(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4b9c3a*/

}
} // namespace gamemd

// 0x4B9C90
namespace gamemd {
int VectorClass_ptr_CrossDissolveEffect::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4b9c9a*/

}
} // namespace gamemd

// 0x4B9CA0
namespace gamemd {
char VectorClass_flat::FindItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004B9CA0.json)
}
} // namespace gamemd

// 0x4B9CE0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004B9CE0.json)
}
} // namespace gamemd

// 0x4B9D90
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004B9D90.json)
}
} // namespace gamemd

// 0x4B9DC0
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004B9DC0.json)
}
} // namespace gamemd

// 0x4B9E00
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004B9E00.json)
}
} // namespace gamemd

// 0x4B9F00
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004B9F00.json)
}
} // namespace gamemd

// 0x4B9F40
namespace gamemd {
char VectorClass_flat::Remove(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004B9F40.json)
}
} // namespace gamemd

// 0x4B9FF0
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004B9FF0.json)
}
} // namespace gamemd

// 0x4BA020
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BA020.json)
}
} // namespace gamemd

// 0x4BA060
namespace gamemd {
unsigned int VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BA060.json)
}
} // namespace gamemd

// 0x4BA1B0
namespace gamemd {
unsigned int * VectorClass_flat::loc_4BA1B0(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BA1B0.json)
}
} // namespace gamemd

// 0x4BA250
namespace gamemd {
VectorClass_flat * VectorClass_flat::Add(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BA250.json)
}
} // namespace gamemd

// 0x4C2C40
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2C40.json)
}
} // namespace gamemd

// 0x4C2C70
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2C70.json)
}
} // namespace gamemd

// 0x4C2C90
namespace gamemd {
int VectorClass_ptr_EBolt::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4c2c9a*/

}
} // namespace gamemd

// 0x4C2CA0
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2CA0.json)
}
} // namespace gamemd

// 0x4C2CE0
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2CE0.json)
}
} // namespace gamemd

// 0x4C2D90
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2D90.json)
}
} // namespace gamemd

// 0x4C2DC0
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2DC0.json)
}
} // namespace gamemd

// 0x4C2E00
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2E00.json)
}
} // namespace gamemd

// 0x4C2E20
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2E20.json)
}
} // namespace gamemd

// 0x4C2ED0
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2ED0.json)
}
} // namespace gamemd

// 0x4C2F00
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2F00.json)
}
} // namespace gamemd

// 0x4C2F50
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_EBolt___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2F50.json)
}
} // namespace gamemd

// 0x4C49A0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C49A0.json)
}
} // namespace gamemd

// 0x4C49D0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C49D0.json)
}
} // namespace gamemd

// 0x4C49F0
namespace gamemd {
int VectorClass_ptr_EgoClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4c49fa*/

}
} // namespace gamemd

// 0x4C4A00
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C4A00.json)
}
} // namespace gamemd

// 0x4C4A40
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C4A40.json)
}
} // namespace gamemd

// 0x4C4AF0
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C4AF0.json)
}
} // namespace gamemd

// 0x4C4B20
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C4B20.json)
}
} // namespace gamemd

// 0x4C4B60
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C4B60.json)
}
} // namespace gamemd

// 0x4C4B80
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C4B80.json)
}
} // namespace gamemd

// 0x4C4C30
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C4C30.json)
}
} // namespace gamemd

// 0x4C4C60
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C4C60.json)
}
} // namespace gamemd

// 0x4C4CB0
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_EgoClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C4CB0.json)
}
} // namespace gamemd

// 0x4C5B60
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C5B60.json)
}
} // namespace gamemd

// 0x4C5B90
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C5B90.json)
}
} // namespace gamemd

// 0x4C5BB0
namespace gamemd {
int VectorClass_ptr_EMPulseClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4c5bba*/

}
} // namespace gamemd

// 0x4C5BC0
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C5BC0.json)
}
} // namespace gamemd

// 0x4C5C00
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C5C00.json)
}
} // namespace gamemd

// 0x4C5CB0
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C5CB0.json)
}
} // namespace gamemd

// 0x4C5CE0
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C5CE0.json)
}
} // namespace gamemd

// 0x4C5D20
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C5D20.json)
}
} // namespace gamemd

// 0x4C5D40
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C5D40.json)
}
} // namespace gamemd

// 0x4C5DF0
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C5DF0.json)
}
} // namespace gamemd

// 0x4C5E20
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C5E20.json)
}
} // namespace gamemd

// 0x4C5E70
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_EMPulseClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C5E70.json)
}
} // namespace gamemd

// 0x4E0250
namespace gamemd {
unsigned int * DynamicVector::Clear(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0250.json)
}
} // namespace gamemd

// 0x4E07E0
namespace gamemd {
char DynamicVector::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E07E0.json)
}
} // namespace gamemd

// 0x4E0950
namespace gamemd {
wchar_t * DynamicVector::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0950.json)
}
} // namespace gamemd

// 0x4E0990
namespace gamemd {
void _VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass::VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass_GetSize( unsigned int * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0990.json)
}
}
// 0x4E09E0
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E09E0.json)
}
} // namespace gamemd

// 0x4E0AB0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0AB0.json)
}
} // namespace gamemd

// 0x4E0AF0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0AF0.json)
}
} // namespace gamemd

// 0x4E0CA0
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0CA0.json)
}
}
// 0x4E0D80
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0D80.json)
}
} // namespace gamemd

// 0x4E0E20
namespace gamemd {
DynamicVector * DynamicVector::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0E20.json)
}
} // namespace gamemd

// 0x4E8340
namespace gamemd {
int VectorClass_Building::Count(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e834a*/

}
} // namespace gamemd

// 0x4E8350
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8350.json)
}
} // namespace gamemd

// 0x4E8380
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8380.json)
}
} // namespace gamemd

// 0x4E83A0
namespace gamemd {
int VectorClass_ptr_SuperClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e83aa*/

}
} // namespace gamemd

// 0x4E83B0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E83B0.json)
}
} // namespace gamemd

// 0x4E83E0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E83E0.json)
}
} // namespace gamemd

// 0x4E8400
namespace gamemd {
int VectorClass_ptr_AITriggerTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e840a*/

}
} // namespace gamemd

// 0x4E8410
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8410.json)
}
} // namespace gamemd

// 0x4E8440
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8440.json)
}
} // namespace gamemd

// 0x4E8460
namespace gamemd {
int VectorClass_ptr_BuildingLightClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e846a*/

}
} // namespace gamemd

// 0x4E84D0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E84D0.json)
}
} // namespace gamemd

// 0x4E8500
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8500.json)
}
} // namespace gamemd

// 0x4E8520
namespace gamemd {
int VectorClass_ptr_TeamClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e852a*/

}
} // namespace gamemd

// 0x4E8530
namespace gamemd {
int VectorClass_ptr_ThemeControl::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e853a*/

}
} // namespace gamemd

// 0x4E8540
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8540.json)
}
} // namespace gamemd

// 0x4E8570
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8570.json)
}
} // namespace gamemd

// 0x4E8590
namespace gamemd {
int VectorClass_ptr_TriggerClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e859a*/

}
} // namespace gamemd

// 0x4E85A0
namespace gamemd {
void VectorClass_flat::Destroy_1()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E85A0.json)
}
} // namespace gamemd

// 0x4E85D0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_1(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E85D0.json)
}
} // namespace gamemd

// 0x4E85F0
namespace gamemd {
int VectorClass_ptr_TriggerTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e85fa*/

}
} // namespace gamemd

// 0x4E8600
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8600.json)
}
} // namespace gamemd

// 0x4E8630
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8630.json)
}
} // namespace gamemd

// 0x4E8650
namespace gamemd {
int VectorClass_ptr_TubeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e865a*/

}
} // namespace gamemd

// 0x4E8660
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8660.json)
}
} // namespace gamemd

// 0x4E8690
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8690.json)
}
} // namespace gamemd

// 0x4E86B0
namespace gamemd {
int VectorClass_ptr_ParticleSystemClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e86ba*/

}
} // namespace gamemd

// 0x4E86C0
namespace gamemd {
void DynamicVector::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E86C0.json)
}
} // namespace gamemd

// 0x4E86F0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E86F0.json)
}
} // namespace gamemd

// 0x4E8710
namespace gamemd {
int VectorClass_ptr_WaveClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e871a*/

}
} // namespace gamemd

// 0x4E8720
namespace gamemd {
void DynamicVector::Destroy_1()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8720.json)
}
} // namespace gamemd

// 0x4E8750
namespace gamemd {
unsigned int DynamicVector::GetItemIndex_1(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8750.json)
}
} // namespace gamemd

// 0x4E8770
namespace gamemd {
int VectorClass_ptr_OverlayClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e877a*/

}
} // namespace gamemd

// 0x4E8890
namespace gamemd {
int VectorClass_ptr_AircraftClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e889a*/

}
} // namespace gamemd

// 0x4E88A0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E88A0.json)
}
} // namespace gamemd

// 0x4E88D0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E88D0.json)
}
} // namespace gamemd

// 0x4E88F0
namespace gamemd {
int VectorClass_ptr_UnitClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e88fa*/

}
} // namespace gamemd

// 0x4E8900
namespace gamemd {
void DynamicVector::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8900.json)
}
} // namespace gamemd

// 0x4E8930
namespace gamemd {
unsigned int DynamicVector::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8930.json)
}
} // namespace gamemd

// 0x4E8950
namespace gamemd {
int VectorClass_ptr_HouseClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e895a*/

}
} // namespace gamemd

// 0x4E8960
namespace gamemd {
void DynamicVector::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8960.json)
}
} // namespace gamemd

// 0x4E8990
namespace gamemd {
unsigned int DynamicVector::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8990.json)
}
} // namespace gamemd

// 0x4E89B0
namespace gamemd {
int VectorClass_ptr_AnimClass::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e89ba*/

}
} // namespace gamemd

// 0x4E89C0
namespace gamemd {
void DynamicVector::Destroy_1()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E89C0.json)
}
} // namespace gamemd

// 0x4E89F0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex_1(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E89F0.json)
}
} // namespace gamemd

// 0x4E8A10
namespace gamemd {
int VectorClass_ptr_FactoryClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8a1a*/

}
} // namespace gamemd

// 0x4E8A20
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8A20.json)
}
} // namespace gamemd

// 0x4E8A50
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8A50.json)
}
} // namespace gamemd

// 0x4E8A70
namespace gamemd {
int VectorClass_ptr_CampaignClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8a7a*/

}
} // namespace gamemd

// 0x4E8A80
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8A80.json)
}
} // namespace gamemd

// 0x4E8AB0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8AB0.json)
}
} // namespace gamemd

// 0x4E8AD0
namespace gamemd {
int VectorClass_ptr_SideClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8ada*/

}
} // namespace gamemd

// 0x4E8AE0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8AE0.json)
}
} // namespace gamemd

// 0x4E8B10
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8B10.json)
}
} // namespace gamemd

// 0x4E8B30
namespace gamemd {
int VectorClass_ptr_HouseTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8b3a*/

}
} // namespace gamemd

// 0x4E8B40
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8B40.json)
}
} // namespace gamemd

// 0x4E8B70
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8B70.json)
}
} // namespace gamemd

// 0x4E8B90
namespace gamemd {
int VectorClass_ptr_TaskForceClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8b9a*/

}
} // namespace gamemd

// 0x4E8BA0
namespace gamemd {
void VectorClass_flat::Destroy_1()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8BA0.json)
}
} // namespace gamemd

// 0x4E8BD0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_1(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8BD0.json)
}
} // namespace gamemd

// 0x4E8BF0
namespace gamemd {
int VectorClass_ptr_TeamTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8bfa*/

}
} // namespace gamemd

// 0x4E8C00
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8C00.json)
}
} // namespace gamemd

// 0x4E8C30
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8C30.json)
}
} // namespace gamemd

// 0x4E8C50
namespace gamemd {
int VectorClass_ptr_ScriptTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8c5a*/

}
} // namespace gamemd

// 0x4E8C60
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8C60.json)
}
} // namespace gamemd

// 0x4E8C90
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8C90.json)
}
} // namespace gamemd

// 0x4E8CB0
namespace gamemd {
int VectorClass_ptr_OverlayTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8cba*/

}
} // namespace gamemd

// 0x4E8CC0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8CC0.json)
}
} // namespace gamemd

// 0x4E8CF0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8CF0.json)
}
} // namespace gamemd

// 0x4E8D10
namespace gamemd {
int VectorClass_ptr_SmudgeTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8d1a*/

}
} // namespace gamemd

// 0x4E8D20
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8D20.json)
}
} // namespace gamemd

// 0x4E8D50
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8D50.json)
}
} // namespace gamemd

// 0x4E8D70
namespace gamemd {
int VectorClass_ptr_TerrainTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8d7a*/

}
} // namespace gamemd

// 0x4E8D80
namespace gamemd {
void VectorClass_flat::Destroy_1()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8D80.json)
}
} // namespace gamemd

// 0x4E8DB0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_1(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8DB0.json)
}
} // namespace gamemd

// 0x4E8DD0
namespace gamemd {
int VectorClass_ptr_BuildingTypeClass::SaveToINI(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8dda*/

}
} // namespace gamemd

// 0x4E8DE0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8DE0.json)
}
} // namespace gamemd

// 0x4E8E10
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8E10.json)
}
} // namespace gamemd

// 0x4E8E30
namespace gamemd {
int VectorClass_ptr_AircraftTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8e3a*/

}
} // namespace gamemd

// 0x4E8E40
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8E40.json)
}
} // namespace gamemd

// 0x4E8E70
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8E70.json)
}
} // namespace gamemd

// 0x4E8E90
namespace gamemd {
int VectorClass_ptr_UnitTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8e9a*/

}
} // namespace gamemd

// 0x4E8EA0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8EA0.json)
}
} // namespace gamemd

// 0x4E8ED0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8ED0.json)
}
} // namespace gamemd

// 0x4E8EF0
namespace gamemd {
int VectorClass_ptr_AnimTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8efa*/

}
} // namespace gamemd

// 0x4E8F00
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8F00.json)
}
} // namespace gamemd

// 0x4E8F30
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8F30.json)
}
} // namespace gamemd

// 0x4E8F50
namespace gamemd {
int VectorClass_ptr_InfantryTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8f5a*/

}
} // namespace gamemd

// 0x4E8F60
namespace gamemd {
void VectorClass_flat::Destroy_1()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8F60.json)
}
} // namespace gamemd

// 0x4E8F90
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_1(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8F90.json)
}
} // namespace gamemd

// 0x4E8FB0
namespace gamemd {
int VectorClass_ptr_BulletTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e8fba*/

}
} // namespace gamemd

// 0x4E8FC0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8FC0.json)
}
} // namespace gamemd

// 0x4E8FF0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8FF0.json)
}
} // namespace gamemd

// 0x4E9010
namespace gamemd {
int VectorClass_ptr_VoxelAnimTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e901a*/

}
} // namespace gamemd

// 0x4E9020
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9020.json)
}
} // namespace gamemd

// 0x4E9050
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9050.json)
}
} // namespace gamemd

// 0x4E9070
namespace gamemd {
int VectorClass_ptr_IsometricTileTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e907a*/

}
} // namespace gamemd

// 0x4E9080
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9080.json)
}
} // namespace gamemd

// 0x4E90B0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E90B0.json)
}
} // namespace gamemd

// 0x4E90D0
namespace gamemd {
int VectorClass_ptr_ParticleTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e90da*/

}
} // namespace gamemd

// 0x4E90E0
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E90E0.json)
}
} // namespace gamemd

// 0x4E9110
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9110.json)
}
} // namespace gamemd

// 0x4E9130
namespace gamemd {
int VectorClass_ptr_ParticleSystemTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e913a*/

}
} // namespace gamemd

// 0x4E9140
namespace gamemd {
void VectorClass_flat::Destroy_1()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9140.json)
}
} // namespace gamemd

// 0x4E9170
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_1(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9170.json)
}
} // namespace gamemd

// 0x4E9190
namespace gamemd {
int VectorClass_ptr_SuperWeaponTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e919a*/

}
} // namespace gamemd

// 0x4E91A0
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E91A0.json)
}
} // namespace gamemd

// 0x4E91D0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E91D0.json)
}
} // namespace gamemd

// 0x4E91F0
namespace gamemd {
int VectorClass_ptr_AbstractTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e91fa*/

}
} // namespace gamemd

// 0x4E9460
namespace gamemd {
char VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9460.json)
}
} // namespace gamemd

// 0x4E94A0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E94A0.json)
}
} // namespace gamemd

// 0x4E9550
namespace gamemd {
void VectorClass_flat::Set(void *a1_1, void *a2_1, void *a3_1)
{
    (void)a1_1; (void)a2_1; (void)a3_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9550.json)
}
} // namespace gamemd

// 0x4E9580
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9580.json)
}
} // namespace gamemd

// 0x4E95C0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E95C0.json)
}
} // namespace gamemd

// 0x4E96C0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E96C0.json)
}
} // namespace gamemd

// 0x4E9700
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9700.json)
}
} // namespace gamemd

// 0x4E97B0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E97B0.json)
}
} // namespace gamemd

// 0x4E97E0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E97E0.json)
}
} // namespace gamemd

// 0x4E9820
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9820.json)
}
} // namespace gamemd

// 0x4E98F0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E98F0.json)
}
} // namespace gamemd

// 0x4E9920
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9920.json)
}
} // namespace gamemd

// 0x4E9960
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9960.json)
}
} // namespace gamemd

// 0x4E9A10
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9A10.json)
}
} // namespace gamemd

// 0x4E9A40
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9A40.json)
}
} // namespace gamemd

// 0x4E9A80
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9A80.json)
}
} // namespace gamemd

// 0x4E9AA0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9AA0.json)
}
} // namespace gamemd

// 0x4E9B50
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9B50.json)
}
} // namespace gamemd

// 0x4E9B80
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9B80.json)
}
} // namespace gamemd

// 0x4E9BC0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9BC0.json)
}
} // namespace gamemd

// 0x4E9C70
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9C70.json)
}
} // namespace gamemd

// 0x4E9CA0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9CA0.json)
}
} // namespace gamemd

// 0x4E9CE0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9CE0.json)
}
} // namespace gamemd

// 0x4E9D00
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9D00.json)
}
} // namespace gamemd

// 0x4E9DB0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9DB0.json)
}
} // namespace gamemd

// 0x4EA040
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA040.json)
}
} // namespace gamemd

// 0x4EA080
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA080.json)
}
} // namespace gamemd

// 0x4EA130
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA130.json)
}
} // namespace gamemd

// 0x4EA160
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA160.json)
}
} // namespace gamemd

// 0x4EA1A0
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA1A0.json)
}
} // namespace gamemd

// 0x4EA1C0
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA1C0.json)
}
} // namespace gamemd

// 0x4EA270
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA270.json)
}
} // namespace gamemd

// 0x4EA2A0
namespace gamemd {
char DynamicVector::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA2A0.json)
}
} // namespace gamemd

// 0x4EA2E0
namespace gamemd {
char DynamicVector::Remove(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA2E0.json)
}
} // namespace gamemd

// 0x4EA390
namespace gamemd {
wchar_t * DynamicVector::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA390.json)
}
} // namespace gamemd

// 0x4EA3C0
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA3C0.json)
}
} // namespace gamemd

// 0x4EA400
namespace gamemd {
unsigned int DynamicVector::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA400.json)
}
} // namespace gamemd

// 0x4EA420
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA420.json)
}
} // namespace gamemd

// 0x4EA460
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA460.json)
}
} // namespace gamemd

// 0x4EA510
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA510.json)
}
} // namespace gamemd

// 0x4EA540
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA540.json)
}
} // namespace gamemd

// 0x4EA580
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA580.json)
}
} // namespace gamemd

// 0x4EA5A0
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA5A0.json)
}
} // namespace gamemd

// 0x4EA650
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA650.json)
}
} // namespace gamemd

// 0x4EA680
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA680.json)
}
} // namespace gamemd

// 0x4EA6C0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA6C0.json)
}
} // namespace gamemd

// 0x4EA770
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA770.json)
}
} // namespace gamemd

// 0x4EA7A0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA7A0.json)
}
} // namespace gamemd

// 0x4EA7E0
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA7E0.json)
}
} // namespace gamemd

// 0x4EA800
namespace gamemd {
char VectorClass_flat::SetCapacity_1(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA800.json)
}
} // namespace gamemd

// 0x4EA8B0
namespace gamemd {
int VectorClass_flat::FindItemIndex_1(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA8B0.json)
}
} // namespace gamemd

// 0x4EA8E0
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA8E0.json)
}
} // namespace gamemd

// 0x4EA920
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA920.json)
}
} // namespace gamemd

// 0x4EA9D0
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EA9D0.json)
}
} // namespace gamemd

// 0x4EAA00
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAA00.json)
}
} // namespace gamemd

// 0x4EAA40
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAA40.json)
}
} // namespace gamemd

// 0x4EAA60
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAA60.json)
}
} // namespace gamemd

// 0x4EAB10
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAB10.json)
}
} // namespace gamemd

// 0x4EAB40
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAB40.json)
}
} // namespace gamemd

// 0x4EAB80
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAB80.json)
}
} // namespace gamemd

// 0x4EAC30
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAC30.json)
}
} // namespace gamemd

// 0x4EAC60
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAC60.json)
}
} // namespace gamemd

// 0x4EACA0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EACA0.json)
}
} // namespace gamemd

// 0x4EACC0
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EACC0.json)
}
} // namespace gamemd

// 0x4EAD70
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAD70.json)
}
} // namespace gamemd

// 0x4EADA0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EADA0.json)
}
} // namespace gamemd

// 0x4EADE0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EADE0.json)
}
} // namespace gamemd

// 0x4EAE90
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAE90.json)
}
} // namespace gamemd

// 0x4EAEC0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAEC0.json)
}
} // namespace gamemd

// 0x4EAF00
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAF00.json)
}
} // namespace gamemd

// 0x4EAF20
namespace gamemd {
char DynamicVector::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAF20.json)
}
} // namespace gamemd

// 0x4EAFD0
namespace gamemd {
int DynamicVector::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EAFD0.json)
}
} // namespace gamemd

// 0x4EB000
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB000.json)
}
} // namespace gamemd

// 0x4EB040
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB040.json)
}
} // namespace gamemd

// 0x4EB0F0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB0F0.json)
}
} // namespace gamemd

// 0x4EB120
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB120.json)
}
} // namespace gamemd

// 0x4EB160
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB160.json)
}
} // namespace gamemd

// 0x4EB180
namespace gamemd {
char DynamicVector::SetCapacity_1(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB180.json)
}
} // namespace gamemd

// 0x4EB230
namespace gamemd {
int DynamicVector::FindItemIndex_1(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB230.json)
}
} // namespace gamemd

// 0x4EB720
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB720.json)
}
} // namespace gamemd

// 0x4EB760
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB760.json)
}
} // namespace gamemd

// 0x4EB810
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB810.json)
}
} // namespace gamemd

// 0x4EB840
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB840.json)
}
} // namespace gamemd

// 0x4EB880
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB880.json)
}
} // namespace gamemd

// 0x4EB980
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB980.json)
}
} // namespace gamemd

// 0x4EB9C0
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EB9C0.json)
}
} // namespace gamemd

// 0x4EBA70
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBA70.json)
}
} // namespace gamemd

// 0x4EBAA0
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBAA0.json)
}
} // namespace gamemd

// 0x4EBAE0
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBAE0.json)
}
} // namespace gamemd

// 0x4EBB00
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBB00.json)
}
} // namespace gamemd

// 0x4EBBB0
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBBB0.json)
}
} // namespace gamemd

// 0x4EBBE0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBBE0.json)
}
} // namespace gamemd

// 0x4EBC20
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBC20.json)
}
} // namespace gamemd

// 0x4EBCD0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBCD0.json)
}
} // namespace gamemd

// 0x4EBD00
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBD00.json)
}
} // namespace gamemd

// 0x4EBD40
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBD40.json)
}
} // namespace gamemd

// 0x4EBD60
namespace gamemd {
char DynamicVector::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBD60.json)
}
} // namespace gamemd

// 0x4EBE10
namespace gamemd {
int DynamicVector::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBE10.json)
}
} // namespace gamemd

// 0x4EBE40
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBE40.json)
}
} // namespace gamemd

// 0x4EBE80
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBE80.json)
}
} // namespace gamemd

// 0x4EBF30
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBF30.json)
}
} // namespace gamemd

// 0x4EBF60
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBF60.json)
}
} // namespace gamemd

// 0x4EBFA0
namespace gamemd {  // G42.18c ns repair
unsigned int VectorClass_flat::GetIndex(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBFA0.json)
}
}  // G42.18c ns repair
// 0x4EBFC0
namespace gamemd {
char DynamicVector::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EBFC0.json)
}
} // namespace gamemd

// 0x4EC070
namespace gamemd {
int DynamicVector::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC070.json)
}
} // namespace gamemd

// 0x4EC0A0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC0A0.json)
}
} // namespace gamemd

// 0x4EC0E0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC0E0.json)
}
} // namespace gamemd

// 0x4EC190
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC190.json)
}
} // namespace gamemd

// 0x4EC1C0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC1C0.json)
}
} // namespace gamemd

// 0x4EC200
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC200.json)
}
} // namespace gamemd

// 0x4EC220
namespace gamemd {
char DynamicVector::SetCapacity_1(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC220.json)
}
} // namespace gamemd

// 0x4EC2D0
namespace gamemd {
int DynamicVector::FindItemIndex_1(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC2D0.json)
}
} // namespace gamemd

// 0x4EC300
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC300.json)
}
} // namespace gamemd

// 0x4EC340
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC340.json)
}
} // namespace gamemd

// 0x4EC3F0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC3F0.json)
}
} // namespace gamemd

// 0x4EC420
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC420.json)
}
} // namespace gamemd

// 0x4EC460
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC460.json)
}
} // namespace gamemd

// 0x4EC480
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC480.json)
}
} // namespace gamemd

// 0x4EC530
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC530.json)
}
} // namespace gamemd

// 0x4EC560
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC560.json)
}
} // namespace gamemd

// 0x4EC5A0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC5A0.json)
}
} // namespace gamemd

// 0x4EC650
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC650.json)
}
} // namespace gamemd

// 0x4EC680
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC680.json)
}
} // namespace gamemd

// 0x4EC6C0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC6C0.json)
}
} // namespace gamemd

// 0x4EC6E0
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC6E0.json)
}
} // namespace gamemd

// 0x4EC790
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC790.json)
}
} // namespace gamemd

// 0x4EC7C0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC7C0.json)
}
} // namespace gamemd

// 0x4EC800
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC800.json)
}
} // namespace gamemd

// 0x4EC8B0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC8B0.json)
}
} // namespace gamemd

// 0x4EC8E0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC8E0.json)
}
} // namespace gamemd

// 0x4EC920
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC920.json)
}
} // namespace gamemd

// 0x4EC940
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC940.json)
}
} // namespace gamemd

// 0x4EC9F0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EC9F0.json)
}
} // namespace gamemd

// 0x4ECA20
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECA20.json)
}
} // namespace gamemd

// 0x4ECA60
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECA60.json)
}
} // namespace gamemd

// 0x4ECB10
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECB10.json)
}
} // namespace gamemd

// 0x4ECB40
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECB40.json)
}
} // namespace gamemd

// 0x4ECB80
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECB80.json)
}
} // namespace gamemd

// 0x4ECBA0
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECBA0.json)
}
} // namespace gamemd

// 0x4ECC50
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECC50.json)
}
} // namespace gamemd

// 0x4ECC80
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECC80.json)
}
} // namespace gamemd

// 0x4ECCC0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECCC0.json)
}
} // namespace gamemd

// 0x4ECD70
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECD70.json)
}
} // namespace gamemd

// 0x4ECDA0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECDA0.json)
}
} // namespace gamemd

// 0x4ECDE0
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECDE0.json)
}
} // namespace gamemd

// 0x4ECE00
namespace gamemd {
char VectorClass_flat::SetCapacity_1(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECE00.json)
}
} // namespace gamemd

// 0x4ECEB0
namespace gamemd {
int VectorClass_flat::FindItemIndex_1(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECEB0.json)
}
} // namespace gamemd

// 0x4ECEE0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECEE0.json)
}
} // namespace gamemd

// 0x4ECF20
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECF20.json)
}
} // namespace gamemd

// 0x4ECFD0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ECFD0.json)
}
} // namespace gamemd

// 0x4ED000
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED000.json)
}
} // namespace gamemd

// 0x4ED040
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED040.json)
}
} // namespace gamemd

// 0x4ED060
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED060.json)
}
} // namespace gamemd

// 0x4ED110
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED110.json)
}
} // namespace gamemd

// 0x4ED140
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED140.json)
}
} // namespace gamemd

// 0x4ED180
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED180.json)
}
} // namespace gamemd

// 0x4ED230
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED230.json)
}
} // namespace gamemd

// 0x4ED260
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED260.json)
}
} // namespace gamemd

// 0x4ED2A0
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED2A0.json)
}
} // namespace gamemd

// 0x4ED2C0
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED2C0.json)
}
} // namespace gamemd

// 0x4ED370
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED370.json)
}
} // namespace gamemd

// 0x4ED3A0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED3A0.json)
}
} // namespace gamemd

// 0x4ED3E0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED3E0.json)
}
} // namespace gamemd

// 0x4ED490
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED490.json)
}
} // namespace gamemd

// 0x4ED4C0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED4C0.json)
}
} // namespace gamemd

// 0x4ED500
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED500.json)
}
} // namespace gamemd

// 0x4ED520
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED520.json)
}
} // namespace gamemd

// 0x4ED5D0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED5D0.json)
}
} // namespace gamemd

// 0x4ED600
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED600.json)
}
} // namespace gamemd

// 0x4ED640
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED640.json)
}
} // namespace gamemd

// 0x4ED6F0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED6F0.json)
}
} // namespace gamemd

// 0x4ED720
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED720.json)
}
} // namespace gamemd

// 0x4ED760
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED760.json)
}
} // namespace gamemd

// 0x4ED780
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED780.json)
}
} // namespace gamemd

// 0x4ED830
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED830.json)
}
} // namespace gamemd

// 0x4ED860
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED860.json)
}
} // namespace gamemd

// 0x4ED8A0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED8A0.json)
}
} // namespace gamemd

// 0x4ED950
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::Cleanup4()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED950.json)
}
}  // G42.18c ns repair
// 0x4ED980
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED980.json)
}
} // namespace gamemd

// 0x4ED9C0
namespace gamemd {
unsigned int VectorClass_flat::Remove(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED9C0.json)
}
} // namespace gamemd

// 0x4ED9E0
namespace gamemd {
char VectorClass_flat::SetCapacity_1(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ED9E0.json)
}
} // namespace gamemd

// 0x4EDA90
namespace gamemd {
int VectorClass_flat::FindItemIndex_1(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDA90.json)
}
} // namespace gamemd

// 0x4EDAC0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDAC0.json)
}
} // namespace gamemd

// 0x4EDB00
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDB00.json)
}
} // namespace gamemd

// 0x4EDBB0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDBB0.json)
}
} // namespace gamemd

// 0x4EDBE0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDBE0.json)
}
} // namespace gamemd

// 0x4EDC20
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDC20.json)
}
} // namespace gamemd

// 0x4EDC40
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDC40.json)
}
} // namespace gamemd

// 0x4EDCF0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDCF0.json)
}
} // namespace gamemd

// 0x4EDD20
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDD20.json)
}
} // namespace gamemd

// 0x4EDD60
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDD60.json)
}
} // namespace gamemd

// 0x4EDE10
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDE10.json)
}
} // namespace gamemd

// 0x4EDE40
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDE40.json)
}
} // namespace gamemd

// 0x4EDE80
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDE80.json)
}
} // namespace gamemd

// 0x4EDEA0
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDEA0.json)
}
} // namespace gamemd

// 0x4EDF50
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDF50.json)
}
} // namespace gamemd

// 0x4EDF80
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDF80.json)
}
} // namespace gamemd

// 0x4EDFC0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EDFC0.json)
}
} // namespace gamemd

// 0x4EE070
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE070.json)
}
} // namespace gamemd

// 0x4EE0A0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE0A0.json)
}
} // namespace gamemd

// 0x4EE0E0
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE0E0.json)
}
} // namespace gamemd

// 0x4EE100
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE100.json)
}
} // namespace gamemd

// 0x4EE1B0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE1B0.json)
}
} // namespace gamemd

// 0x4EE1E0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE1E0.json)
}
} // namespace gamemd

// 0x4EE220
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE220.json)
}
} // namespace gamemd

// 0x4EE2D0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE2D0.json)
}
} // namespace gamemd

// 0x4EE300
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE300.json)
}
} // namespace gamemd

// 0x4EE340
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE340.json)
}
} // namespace gamemd

// 0x4EE360
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE360.json)
}
} // namespace gamemd

// 0x4EE410
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE410.json)
}
} // namespace gamemd

// 0x4EE440
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE440.json)
}
} // namespace gamemd

// 0x4EE480
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE480.json)
}
} // namespace gamemd

// 0x4EE530
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE530.json)
}
} // namespace gamemd

// 0x4EE560
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE560.json)
}
} // namespace gamemd

// 0x4EE5A0
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE5A0.json)
}
} // namespace gamemd

// 0x4EE5C0
namespace gamemd {
char VectorClass_flat::SetCapacity_1(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE5C0.json)
}
} // namespace gamemd

// 0x4EE670
namespace gamemd {
int VectorClass_flat::FindItemIndex_1(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE670.json)
}
} // namespace gamemd

// 0x4EE6A0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE6A0.json)
}
} // namespace gamemd

// 0x4EE6E0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE6E0.json)
}
} // namespace gamemd

// 0x4EE790
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE790.json)
}
} // namespace gamemd

// 0x4EE7C0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE7C0.json)
}
} // namespace gamemd

// 0x4EE800
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE800.json)
}
} // namespace gamemd

// 0x4EE820
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE820.json)
}
} // namespace gamemd

// 0x4EE8D0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE8D0.json)
}
} // namespace gamemd

// 0x4EE900
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE900.json)
}
} // namespace gamemd

// 0x4EE940
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE940.json)
}
} // namespace gamemd

// 0x4EE9F0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EE9F0.json)
}
} // namespace gamemd

// 0x4EEA20
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEA20.json)
}
} // namespace gamemd

// 0x4EEA60
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEA60.json)
}
} // namespace gamemd

// 0x4EEA80
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEA80.json)
}
} // namespace gamemd

// 0x4EEB30
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEB30.json)
}
} // namespace gamemd

// 0x4EEB60
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEB60.json)
}
} // namespace gamemd

// 0x4EEBA0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEBA0.json)
}
} // namespace gamemd

// 0x4EEC50
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEC50.json)
}
} // namespace gamemd

// 0x4EEC80
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEC80.json)
}
} // namespace gamemd

// 0x4EECC0
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EECC0.json)
}
} // namespace gamemd

// 0x4EECE0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EECE0.json)
}
} // namespace gamemd

// 0x4EED90
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EED90.json)
}
} // namespace gamemd

// 0x4EEDC0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEDC0.json)
}
} // namespace gamemd

// 0x4EEE00
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEE00.json)
}
} // namespace gamemd

// 0x4EEEB0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEEB0.json)
}
} // namespace gamemd

// 0x4EEEE0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEEE0.json)
}
} // namespace gamemd

// 0x4EEF20
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEF20.json)
}
} // namespace gamemd

// 0x4EEF40
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEF40.json)
}
} // namespace gamemd

// 0x4EEFF0
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EEFF0.json)
}
} // namespace gamemd

// 0x4EF020
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF020.json)
}
} // namespace gamemd

// 0x4EF060
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF060.json)
}
} // namespace gamemd

// 0x4EF110
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF110.json)
}
} // namespace gamemd

// 0x4EF140
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF140.json)
}
} // namespace gamemd

// 0x4EF180
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF180.json)
}
} // namespace gamemd

// 0x4EF1A0
namespace gamemd {
char VectorClass_flat::SetCapacity_1(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF1A0.json)
}
} // namespace gamemd

// 0x4EF250
namespace gamemd {
int VectorClass_flat::FindItemIndex_1(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF250.json)
}
} // namespace gamemd

// 0x4EF280
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF280.json)
}
} // namespace gamemd

// 0x4EF2C0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF2C0.json)
}
} // namespace gamemd

// 0x4EF370
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF370.json)
}
} // namespace gamemd

// 0x4EF3A0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF3A0.json)
}
} // namespace gamemd

// 0x4EF3E0
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF3E0.json)
}
} // namespace gamemd

// 0x4EF400
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF400.json)
}
} // namespace gamemd

// 0x4EF4B0
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF4B0.json)
}
} // namespace gamemd

// 0x4EF580
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF580.json)
}
} // namespace gamemd

// 0x4EF620
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF620.json)
}
} // namespace gamemd

// 0x4EF670
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_SuperClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF670.json)
}
} // namespace gamemd

// 0x4EF6C0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF6C0.json)
}
} // namespace gamemd

// 0x4EF710
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_AITriggerTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF710.json)
}
} // namespace gamemd

// 0x4EF760
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF760.json)
}
} // namespace gamemd

// 0x4EF7B0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_BuildingLightClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF7B0.json)
}
} // namespace gamemd

// 0x4EF8A0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF8A0.json)
}
} // namespace gamemd

// 0x4EF8F0
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_TeamClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF8F0.json)
}
} // namespace gamemd

// 0x4EF940
namespace gamemd {
VectorClass_flat * DynamicVector::Add(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF940.json)
}
} // namespace gamemd

// 0x4EF990
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF990.json)
}
} // namespace gamemd

// 0x4EF9E0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_TriggerClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF9E0.json)
}
} // namespace gamemd

// 0x4EFA30
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFA30.json)
}
} // namespace gamemd

// 0x4EFA80
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_TriggerTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFA80.json)
}
} // namespace gamemd

// 0x4EFAD0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFAD0.json)
}
} // namespace gamemd

// 0x4EFB20
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_TubeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFB20.json)
}
} // namespace gamemd

// 0x4EFB70
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFB70.json)
}
} // namespace gamemd

// 0x4EFBC0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_ParticleSystemClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFBC0.json)
}
} // namespace gamemd

// 0x4EFC10
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFC10.json)
}
} // namespace gamemd

// 0x4EFC60
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_WaveClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFC60.json)
}
} // namespace gamemd

// 0x4EFCB0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFCB0.json)
}
} // namespace gamemd

// 0x4EFD00
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_OverlayClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFD00.json)
}
} // namespace gamemd

// 0x4EFE90
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFE90.json)
}
} // namespace gamemd

// 0x4EFF30
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFF30.json)
}
} // namespace gamemd

// 0x4EFF80
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_UnitClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFF80.json)
}
} // namespace gamemd

// 0x4EFFD0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EFFD0.json)
}
} // namespace gamemd

// 0x4F0020
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_HouseClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0020.json)
}
} // namespace gamemd

// 0x4F0070
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0070.json)
}
} // namespace gamemd

// 0x4F00C0
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_AnimClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F00C0.json)
}
} // namespace gamemd

// 0x4F0110
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0110.json)
}
} // namespace gamemd

// 0x4F0160
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_FactoryClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0160.json)
}
} // namespace gamemd

// 0x4F01B0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F01B0.json)
}
} // namespace gamemd

// 0x4F0200
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_CampaignClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0200.json)
}
} // namespace gamemd

// 0x4F0250
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0250.json)
}
} // namespace gamemd

// 0x4F02A0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_SideClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F02A0.json)
}
} // namespace gamemd

// 0x4F02F0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F02F0.json)
}
} // namespace gamemd

// 0x4F0340
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_HouseTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0340.json)
}
} // namespace gamemd

// 0x4F0390
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0390.json)
}
} // namespace gamemd

// 0x4F03E0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_TaskForceClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F03E0.json)
}
} // namespace gamemd

// 0x4F0430
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0430.json)
}
} // namespace gamemd

// 0x4F0480
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_TeamTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0480.json)
}
} // namespace gamemd

// 0x4F04D0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F04D0.json)
}
} // namespace gamemd

// 0x4F0520
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_ScriptTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0520.json)
}
} // namespace gamemd

// 0x4F0570
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0570.json)
}
} // namespace gamemd

// 0x4F05C0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_OverlayTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F05C0.json)
}
} // namespace gamemd

// 0x4F0610
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0610.json)
}
} // namespace gamemd

// 0x4F0660
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_SmudgeTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0660.json)
}
} // namespace gamemd

// 0x4F06B0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F06B0.json)
}
} // namespace gamemd

// 0x4F0700
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_TerrainTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0700.json)
}
} // namespace gamemd

// 0x4F0750
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0750.json)
}
} // namespace gamemd

// 0x4F07A0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_BuildingTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F07A0.json)
}
} // namespace gamemd

// 0x4F07F0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F07F0.json)
}
} // namespace gamemd

// 0x4F0840
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_AircraftTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0840.json)
}
} // namespace gamemd

// 0x4F0890
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0890.json)
}
} // namespace gamemd

// 0x4F08E0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_UnitTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F08E0.json)
}
} // namespace gamemd

// 0x4F0930
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0930.json)
}
} // namespace gamemd

// 0x4F0980
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_AnimTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0980.json)
}
} // namespace gamemd

// 0x4F09D0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F09D0.json)
}
} // namespace gamemd

// 0x4F0A20
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_InfantryTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0A20.json)
}
} // namespace gamemd

// 0x4F0A70
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0A70.json)
}
} // namespace gamemd

// 0x4F0AC0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_BulletTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0AC0.json)
}
} // namespace gamemd

// 0x4F0B10
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0B10.json)
}
} // namespace gamemd

// 0x4F0B60
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_VoxelAnimTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0B60.json)
}
} // namespace gamemd

// 0x4F0BB0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0BB0.json)
}
} // namespace gamemd

// 0x4F0C00
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_IsometricTileTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0C00.json)
}
} // namespace gamemd

// 0x4F0C50
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0C50.json)
}
} // namespace gamemd

// 0x4F0CA0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_ParticleTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0CA0.json)
}
} // namespace gamemd

// 0x4F0CF0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0CF0.json)
}
} // namespace gamemd

// 0x4F0D40
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_ParticleSystemTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0D40.json)
}
} // namespace gamemd

// 0x4F0D90
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0D90.json)
}
} // namespace gamemd

// 0x4F0DE0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_SuperWeaponTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0DE0.json)
}
} // namespace gamemd

// 0x4F0E30
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0E30.json)
}
} // namespace gamemd

// 0x4F0E80
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_AbstractTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F0E80.json)
}
} // namespace gamemd

// 0x4F6910
namespace gamemd {
bool VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex(int a1)
{

  int v2; // [esp+8h] [ebp+4h]

  return *(unsigned int *)(v2 + 21372) >= *(unsigned int *)(v2 + 21376); /*0x4f6925*/

}
} // namespace gamemd

// 0x4F6930
namespace gamemd {
void * VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F6930.json)
}
} // namespace gamemd

// 0x4F6950
namespace gamemd {
BSTR VectorClass_flat::FindItemIndex(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F6950.json)
}
} // namespace gamemd

// 0x4F6990
namespace gamemd {
long long VectorClass_flat::FindItemIndex_0(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F6990.json)
}
} // namespace gamemd

// 0x4F69D0
namespace gamemd {
int VectorClass_flat::Destroy(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F69D0.json)
}
} // namespace gamemd

// 0x4F6A00
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem(int a1)
{

  return a1->numWarFactories; /*0x4f6a0a*/

}
} // namespace gamemd

// 0x4F6A10
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_0(int a1)
{

  return a1->numConYards; /*0x4f6a1a*/

}
} // namespace gamemd

// 0x4F6E60
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(int a1)
{

  int v2; // [esp+4h] [ebp+4h]

  return *(unsigned int *)(v2 + 12); /*0x4f6e67*/

}
} // namespace gamemd

// 0x5013A0
namespace gamemd {
int VectorClass_flat::ScalarDeletingDestructor(unsigned int * a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005013A0.json)
}
} // namespace gamemd

// 0x5024F0
namespace gamemd {
int VectorClass_flat::StubReturnNullPointer(int a1, unsigned int * a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005024F0.json)
}
} // namespace gamemd

// 0x502550
namespace gamemd {
int VectorClass_flat::StubReturnNullPointer_0(int a1, const void * a2, unsigned int * a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00502550.json)
}
} // namespace gamemd

// 0x50E4A0
namespace gamemd {
wchar_t * DynamicVector::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E4A0.json)
}
} // namespace gamemd

// 0x50E4D0
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E4D0.json)
}
} // namespace gamemd

// 0x50E4F0
namespace gamemd {
int VectorClass_BuildingType::Count(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x50e4fa*/

}
} // namespace gamemd

// 0x50E500
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E500.json)
}
} // namespace gamemd

// 0x50E530
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E530.json)
}
} // namespace gamemd

// 0x50E550
namespace gamemd {
int VectorClass_UAngerStruct___16::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x50e55a*/

}
} // namespace gamemd

// 0x50E560
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E560.json)
}
} // namespace gamemd

// 0x50E590
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E590.json)
}
} // namespace gamemd

// 0x50E5B0
namespace gamemd {
unsigned int * VectorClass_flat::Clear(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E5B0.json)
}
} // namespace gamemd

// 0x50E620
namespace gamemd {
int VectorClass_flat::Clear(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E620.json)
}
} // namespace gamemd

// 0x50E640
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E640.json)
}
} // namespace gamemd

// 0x50E670
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_1(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E670.json)
}
} // namespace gamemd

// 0x50E690
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x50e69a*/

}
} // namespace gamemd

// 0x50E6A0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E6A0.json)
}
} // namespace gamemd

// 0x50E6D0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E6D0.json)
}
} // namespace gamemd

// 0x50E6F0
namespace gamemd {
int VectorClass_BuildingType::GetElement(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x50e6fa*/

}
} // namespace gamemd

// 0x50E700
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E700.json)
}
} // namespace gamemd

// 0x50E730
namespace gamemd {
int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E730.json)
}
} // namespace gamemd

// 0x50E750
namespace gamemd {
char VectorClass__N::Clear(int a2)
{

  return *(unsigned char *)(*(unsigned int *)&this->m_1[3] + a2); /*0x50e75a*/

}
} // namespace gamemd

// 0x50E760
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E760.json)
}
} // namespace gamemd

// 0x50E7A0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E7A0.json)
}
} // namespace gamemd

// 0x50E7C0
namespace gamemd {
unsigned int * VectorClass_flat::Clear(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E7C0.json)
}
} // namespace gamemd

// 0x50E7E0
namespace gamemd {
TypeList_flat * VectorClass_flat::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E7E0.json)
}
} // namespace gamemd

// 0x50E8C0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E8C0.json)
}
} // namespace gamemd

// 0x50E910
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E910.json)
}
} // namespace gamemd

// 0x50E950
namespace gamemd {
char VectorClass_flat::Set(int a2, unsigned int * a3, void *a3_2)
{
    (void)a2; (void)a3; (void)a3_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E950.json)
}
} // namespace gamemd

// 0x50EA30
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050EA30.json)
}
} // namespace gamemd

// 0x50EA70
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050EA70.json)
}
} // namespace gamemd

// 0x50EB40
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050EB40.json)
}
} // namespace gamemd

// 0x50EB70
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::InsertAt(IUnknown * aP1, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050EB70.json)
}
}  // G42.18c ns repair
// 0x50EC20
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050EC20.json)
}
} // namespace gamemd

// 0x50EC60
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050EC60.json)
}
} // namespace gamemd

// 0x50ED10
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050ED10.json)
}
} // namespace gamemd

// 0x50ED40
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050ED40.json)
}
} // namespace gamemd

// 0x50ED80
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050ED80.json)
}
} // namespace gamemd

// 0x50EDA0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050EDA0.json)
}
} // namespace gamemd

// 0x50EE50
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050EE50.json)
}
} // namespace gamemd

// 0x50EE80
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050EE80.json)
}
} // namespace gamemd

// 0x50EEE0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050EEE0.json)
}
} // namespace gamemd

// 0x50EFD0
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050EFD0.json)
}
} // namespace gamemd

// 0x50F000
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F000.json)
}
} // namespace gamemd

// 0x50F050
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F050.json)
}
} // namespace gamemd

// 0x50F070
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F070.json)
}
} // namespace gamemd

// 0x50F170
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F170.json)
}
} // namespace gamemd

// 0x50F1B0
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F1B0.json)
}
} // namespace gamemd

// 0x50F210
namespace gamemd {
char VectorClass_flat::Release(int a2, char * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F210.json)
}
} // namespace gamemd

// 0x50F300
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F300.json)
}
} // namespace gamemd

// 0x50F330
namespace gamemd {
int VectorClass_flat::GetSize(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F330.json)
}
} // namespace gamemd

// 0x50F380
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F380.json)
}
} // namespace gamemd

// 0x50F4E0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F4E0.json)
}
} // namespace gamemd

// 0x50F5D0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F5D0.json)
}
} // namespace gamemd

// 0x50F600
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F600.json)
}
} // namespace gamemd

// 0x50F640
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F640.json)
}
} // namespace gamemd

// 0x50F710
namespace gamemd {
int VectorClass_flat::FindItemIndex_1(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F710.json)
}
} // namespace gamemd

// 0x50F740
namespace gamemd {
char VectorClass_flat::CompareVectors(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F740.json)
}
} // namespace gamemd

// 0x50F780
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F780.json)
}
} // namespace gamemd

// 0x50F830
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::ClearAndFree3()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F830.json)
}
}  // G42.18c ns repair
// 0x50F860
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F860.json)
}
} // namespace gamemd

// 0x50F8A0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F8A0.json)
}
} // namespace gamemd

// 0x50F8C0
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F8C0.json)
}
} // namespace gamemd

// 0x50F970
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F970.json)
}
} // namespace gamemd

// 0x50F9A0
namespace gamemd {
char DynamicVector::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F9A0.json)
}
} // namespace gamemd

// 0x50F9E0
namespace gamemd {
char DynamicVector::Remove(signed int Size, char * a3)
{
    (void)Size; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F9E0.json)
}
} // namespace gamemd

// 0x50FA90
namespace gamemd {
wchar_t * DynamicVector::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FA90.json)
}
} // namespace gamemd

// 0x50FAC0
namespace gamemd {
int DynamicVector::GetSize(unsigned char * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FAC0.json)
}
} // namespace gamemd

// 0x50FB00
namespace gamemd {
int DynamicVector::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FB00.json)
}
} // namespace gamemd

// 0x50FB20
namespace gamemd {
char DynamicVector::SetCapacity(signed int Size, char * a3)
{
    (void)Size; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FB20.json)
}
} // namespace gamemd

// 0x50FBD0
namespace gamemd {
int DynamicVector::Destroy_0(unsigned char * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FBD0.json)
}
} // namespace gamemd

// 0x50FC00
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FC00.json)
}
} // namespace gamemd

// 0x50FC60
namespace gamemd {
char VectorClass_flat::Remove(int a2, int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FC60.json)
}
} // namespace gamemd

// 0x50FD70
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FD70.json)
}
} // namespace gamemd

// 0x50FDB0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FDB0.json)
}
} // namespace gamemd

// 0x50FE00
namespace gamemd {
unsigned int VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FE00.json)
}
} // namespace gamemd

// 0x50FE20
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FE20.json)
}
} // namespace gamemd

// 0x50FFB0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FFB0.json)
}
} // namespace gamemd

// 0x50FFF0
namespace gamemd {
VectorClass_flat * VectorClass_flat::Get(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050FFF0.json)
}
} // namespace gamemd

// 0x510040
namespace gamemd {
DynamicVector * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00510040.json)
}
} // namespace gamemd

// 0x510090
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00510090.json)
}
} // namespace gamemd

// 0x5100E0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005100E0.json)
}
} // namespace gamemd

// 0x510130
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00510130.json)
}
} // namespace gamemd

// 0x510180
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_AngerStruct_(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00510180.json)
}
} // namespace gamemd

// 0x5101D0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005101D0.json)
}
} // namespace gamemd

// 0x510270
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00510270.json)
}
} // namespace gamemd

// 0x5102C0
namespace gamemd {
unsigned int * VectorClass_flat::loc_5102C0(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005102C0.json)
}
} // namespace gamemd

// 0x510310
namespace gamemd {
VectorClass_flat * VectorClass_flat::Constructor_0(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00510310.json)
}
} // namespace gamemd

// 0x510360
namespace gamemd {
VectorClass_flat * DynamicVector::Add(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00510360.json)
}
} // namespace gamemd

// 0x5103B0
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_bool_(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005103B0.json)
}
} // namespace gamemd

// 0x510400
namespace gamemd {
VectorClass_flat * VectorClass_flat::Add(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00510400.json)
}
} // namespace gamemd

// 0x5104A0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_0(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005104A0.json)
}
} // namespace gamemd

// 0x510550
namespace gamemd {  // G42.18c ns repair
unsigned int * _::BuildingConstructor(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00510550.json)
}
}  // G42.18c ns repair
// 0x5105A0
namespace gamemd {  // G42.18c ns repair
unsigned int * _::BuildingTypeConstructor(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005105A0.json)
}
}  // G42.18c ns repair
// 0x510A50
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_2(int a1, const void * a2, unsigned int * a3)
{

  return HouseClass::QueryInterface(a1 - 36, a2, a3);

}
} // namespace gamemd

// 0x510A60
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_3(int a1)
{

  return HouseClass::COMStub_Ret1_1(a1 - 36);

}
} // namespace gamemd

// 0x510A70
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_4(int a1)
{

  return HouseClass::COMStub_Ret1_2(a1 - 36);

}
} // namespace gamemd

// 0x510A80
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_5(int a1, const void * a2, unsigned int * a3)
{

  return HouseClass::QueryInterface(a1 - 40, a2, a3);

}
} // namespace gamemd

// 0x510A90
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_6(int a1)
{

  return HouseClass::COMStub_Ret1_1(a1 - 40);

}
} // namespace gamemd

// 0x510AA0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_7(int a1)
{

  return HouseClass::COMStub_Ret1_2(a1 - 40);

}
} // namespace gamemd

// 0x510AB0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_8(int a1)
{

  return VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(a1 - 4);

}
} // namespace gamemd

// 0x510AC0
namespace gamemd {
BSTR VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_9(int a1)
{

  return VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex(a1 - 4);

}
} // namespace gamemd

// 0x510AD0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_10(int a1, const void * a2, unsigned int * a3)
{

  return HouseClass::QueryInterface(a1 - 44, a2, a3);

}
} // namespace gamemd

// 0x510AE0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_11(int a1)
{

  return HouseClass::COMStub_Ret1_1(a1 - 44);

}
} // namespace gamemd

// 0x510AF0
namespace gamemd {
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_12(int a1)
{

  return HouseClass::COMStub_Ret1_2(a1 - 44);

}
} // namespace gamemd

// 0x512FA0
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::CopyConstructor(InfantryTypeClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00512FA0.json)
}
}  // G42.18c ns repair
// 0x5132F0
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::PushBack(VectorClass_flat * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005132F0.json)
}
}  // G42.18c ns repair
// 0x5134D0
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::ClearAndFree4()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005134D0.json)
}
}  // G42.18c ns repair
// 0x525060
namespace gamemd {  // G42.18c ns repair
unsigned int * _::CopyDefault(unsigned int *a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00525060.json)
}
}  // G42.18c ns repair
// 0x538510
namespace gamemd {
int VectorClass_ptr_CCINIClass::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x53851a*/

}
} // namespace gamemd

// 0x538520
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538520.json)
}
} // namespace gamemd

// 0x538560
namespace gamemd {
char VectorClass_flat::Remove(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538560.json)
}
} // namespace gamemd

// 0x538610
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538610.json)
}
} // namespace gamemd

// 0x538640
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538640.json)
}
} // namespace gamemd

// 0x538680
namespace gamemd {
unsigned int VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538680.json)
}
} // namespace gamemd

// 0x538A90
namespace gamemd {
VectorClass_flat * VectorClass_flat::Add(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00538A90.json)
}
} // namespace gamemd

// 0x53DA40
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DA40.json)
}
} // namespace gamemd

// 0x53DA70
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DA70.json)
}
} // namespace gamemd

// 0x53DA90
namespace gamemd {
int VectorClass_ptr_IonBlastClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x53da9a*/

}
} // namespace gamemd

// 0x53DAA0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DAA0.json)
}
} // namespace gamemd

// 0x53DAE0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DAE0.json)
}
} // namespace gamemd

// 0x53DB90
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DB90.json)
}
} // namespace gamemd

// 0x53DBC0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DBC0.json)
}
} // namespace gamemd

// 0x53DC00
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DC00.json)
}
} // namespace gamemd

// 0x53DC20
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DC20.json)
}
} // namespace gamemd

// 0x53DCD0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DCD0.json)
}
} // namespace gamemd

// 0x53DD00
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DD00.json)
}
} // namespace gamemd

// 0x53DD50
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_IonBlastClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053DD50.json)
}
} // namespace gamemd

// 0x54A1E0
namespace gamemd {
int VectorClass_PAG::Count(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x54a1ea*/

}
} // namespace gamemd

// 0x54A1F0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A1F0.json)
}
} // namespace gamemd

// 0x54A220
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A220.json)
}
} // namespace gamemd

// 0x54A240
namespace gamemd {
int VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x54a24a*/

}
} // namespace gamemd

// 0x54A250
namespace gamemd {
char VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A250.json)
}
} // namespace gamemd

// 0x54A290
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A290.json)
}
} // namespace gamemd

// 0x54A340
namespace gamemd {
void VectorClass_flat::Set(void *a1_1, void *a2_1, void *a3_1)
{
    (void)a1_1; (void)a2_1; (void)a3_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A340.json)
}
} // namespace gamemd

// 0x54A370
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A370.json)
}
} // namespace gamemd

// 0x54A3B0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A3B0.json)
}
} // namespace gamemd

// 0x54A4B0
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A4B0.json)
}
} // namespace gamemd

// 0x54A4F0
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A4F0.json)
}
} // namespace gamemd

// 0x54A5A0
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A5A0.json)
}
} // namespace gamemd

// 0x54A5D0
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A5D0.json)
}
} // namespace gamemd

// 0x54A610
namespace gamemd {
unsigned int DynamicVector::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A610.json)
}
} // namespace gamemd

// 0x54A630
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A630.json)
}
} // namespace gamemd

// 0x54A6E0
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A6E0.json)
}
} // namespace gamemd

// 0x54A710
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A710.json)
}
} // namespace gamemd

// 0x54A7B0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A7B0.json)
}
} // namespace gamemd

// 0x54A800
namespace gamemd {
DynamicVector * DynamicVector::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054A800.json)
}
} // namespace gamemd

// 0x5512D0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005512D0.json)
}
} // namespace gamemd

// 0x551300
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551300.json)
}
} // namespace gamemd

// 0x551320
namespace gamemd {
int VectorClass_ptr_LaserDrawClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x55132a*/

}
} // namespace gamemd

// 0x551330
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551330.json)
}
} // namespace gamemd

// 0x551370
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551370.json)
}
} // namespace gamemd

// 0x551420
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551420.json)
}
} // namespace gamemd

// 0x551450
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551450.json)
}
} // namespace gamemd

// 0x551490
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551490.json)
}
} // namespace gamemd

// 0x5514B0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005514B0.json)
}
} // namespace gamemd

// 0x551560
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551560.json)
}
} // namespace gamemd

// 0x551590
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551590.json)
}
} // namespace gamemd

// 0x5515E0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_LaserDrawClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005515E0.json)
}
} // namespace gamemd

// 0x555200
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555200.json)
}
} // namespace gamemd

// 0x555230
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555230.json)
}
} // namespace gamemd

// 0x555250
namespace gamemd {
int VectorClass_ptr_LightSourceClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x55525a*/

}
} // namespace gamemd

// 0x555260
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555260.json)
}
} // namespace gamemd

// 0x555290
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555290.json)
}
} // namespace gamemd

// 0x5552B0
namespace gamemd {
int VectorClass_ptr_PendingCellClass_LightSourceClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5552ba*/

}
} // namespace gamemd

// 0x5552C0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005552C0.json)
}
} // namespace gamemd

// 0x555300
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555300.json)
}
} // namespace gamemd

// 0x5553B0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005553B0.json)
}
} // namespace gamemd

// 0x5553E0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005553E0.json)
}
} // namespace gamemd

// 0x555420
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555420.json)
}
} // namespace gamemd

// 0x555440
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555440.json)
}
} // namespace gamemd

// 0x5554F0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005554F0.json)
}
} // namespace gamemd

// 0x555520
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555520.json)
}
} // namespace gamemd

// 0x555560
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555560.json)
}
} // namespace gamemd

// 0x555610
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555610.json)
}
} // namespace gamemd

// 0x555640
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555640.json)
}
} // namespace gamemd

// 0x555680
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555680.json)
}
} // namespace gamemd

// 0x5556A0
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005556A0.json)
}
} // namespace gamemd

// 0x555750
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555750.json)
}
} // namespace gamemd

// 0x555780
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555780.json)
}
} // namespace gamemd

// 0x5557D0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_LightSourceClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005557D0.json)
}
} // namespace gamemd

// 0x555820
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555820.json)
}
} // namespace gamemd

// 0x555870
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555870.json)
}
} // namespace gamemd

// 0x556F00
namespace gamemd {
int VectorClass_ptr_LineTrail::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x556f0a*/

}
} // namespace gamemd

// 0x556F10
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556F10.json)
}
} // namespace gamemd

// 0x556F50
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556F50.json)
}
} // namespace gamemd

// 0x557000
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00557000.json)
}
} // namespace gamemd

// 0x557030
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00557030.json)
}
} // namespace gamemd

// 0x557070
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00557070.json)
}
} // namespace gamemd

// 0x557170
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00557170.json)
}
} // namespace gamemd

// 0x558230
namespace gamemd {
int VectorClass_PBG::Count(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x55823a*/

}
} // namespace gamemd

// 0x558240
namespace gamemd {
char VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558240.json)
}
} // namespace gamemd

// 0x558280
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558280.json)
}
} // namespace gamemd

// 0x558330
namespace gamemd {
void VectorClass_flat::Set(void *a1_1, void *a2_1, void *a3_1)
{
    (void)a1_1; (void)a2_1; (void)a3_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558330.json)
}
} // namespace gamemd

// 0x558360
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558360.json)
}
} // namespace gamemd

// 0x5583A0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005583A0.json)
}
} // namespace gamemd

// 0x5584A0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005584A0.json)
}
} // namespace gamemd

// 0x55BAE0
namespace gamemd {  // G42.18c ns repair
int _::RemoveItem(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055BAE0.json)
}
}  // G42.18c ns repair
// 0x588C90
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::CleanupSubzone()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00588C90.json)
}
}  // G42.18c ns repair
// 0x588E10
namespace gamemd {
int VectorClass_flat::Clear(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00588E10.json)
}
} // namespace gamemd

// 0x588F00
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00588F00.json)
}
} // namespace gamemd

// 0x588F30
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00588F30.json)
}
} // namespace gamemd

// 0x588F50
namespace gamemd {
int VectorClass_W4PassabilityType::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x588f5a*/

}
} // namespace gamemd

// 0x588F60
namespace gamemd {
void DynamicVector::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00588F60.json)
}
} // namespace gamemd

// 0x588F90
namespace gamemd {
unsigned int DynamicVector::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00588F90.json)
}
} // namespace gamemd

// 0x588FB0
namespace gamemd {
unsigned int * VectorClass_flat::Clear(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00588FB0.json)
}
} // namespace gamemd

// 0x588FD0
namespace gamemd {
void DynamicVector::Destroy_1()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00588FD0.json)
}
} // namespace gamemd

// 0x589000
namespace gamemd {
unsigned int DynamicVector::GetItemIndex_1(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589000.json)
}
} // namespace gamemd

// 0x589030
namespace gamemd {
int VectorClass_flat::Clear(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589030.json)
}
} // namespace gamemd

// 0x5896F0
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005896F0.json)
}
} // namespace gamemd

// 0x589740
namespace gamemd {
char VectorClass_flat::Release(int a2, int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589740.json)
}
} // namespace gamemd

// 0x589960
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589960.json)
}
} // namespace gamemd

// 0x5899E0
namespace gamemd {
int VectorClass_flat::GetSize(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005899E0.json)
}
} // namespace gamemd

// 0x589A30
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589A30.json)
}
} // namespace gamemd

// 0x589EB0
namespace gamemd {
char DynamicVector::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589EB0.json)
}
} // namespace gamemd

// 0x589EF0
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589EF0.json)
}
} // namespace gamemd

// 0x589FA0
namespace gamemd {
wchar_t * DynamicVector::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589FA0.json)
}
} // namespace gamemd

// 0x589FD0
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589FD0.json)
}
} // namespace gamemd

// 0x58A010
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A010.json)
}
} // namespace gamemd

// 0x58A030
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A030.json)
}
} // namespace gamemd

// 0x58A0E0
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A0E0.json)
}
} // namespace gamemd

// 0x58A110
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A110.json)
}
} // namespace gamemd

// 0x58A150
namespace gamemd {
char DynamicVector::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A150.json)
}
} // namespace gamemd

// 0x58A230
namespace gamemd {
int DynamicVector::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A230.json)
}
} // namespace gamemd

// 0x58A260
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A260.json)
}
} // namespace gamemd

// 0x58A2A0
namespace gamemd {
char DynamicVector::SetCapacity_1(int a2, char * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A2A0.json)
}
} // namespace gamemd

// 0x58A3A0
namespace gamemd {
int DynamicVector::FindItemIndex_1(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A3A0.json)
}
} // namespace gamemd

// 0x58A470
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A470.json)
}
} // namespace gamemd

// 0x58A630
namespace gamemd {
char * DynamicVector::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A630.json)
}
} // namespace gamemd

// 0x58A6E0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A6E0.json)
}
} // namespace gamemd

// 0x58A7B0
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A7B0.json)
}
} // namespace gamemd

// 0x58A7E0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A7E0.json)
}
} // namespace gamemd

// 0x58A820
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A820.json)
}
} // namespace gamemd

// 0x58A840
namespace gamemd {
char * DynamicVector::Constructor_0(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A840.json)
}
} // namespace gamemd

// 0x58A8F0
namespace gamemd {
char VectorClass_flat::Release(int a2, char * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A8F0.json)
}
} // namespace gamemd

// 0x58A9F0
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058A9F0.json)
}
} // namespace gamemd

// 0x58AA20
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058AA20.json)
}
} // namespace gamemd

// 0x58AA60
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058AA60.json)
}
} // namespace gamemd

// 0x58AA90
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058AA90.json)
}
} // namespace gamemd

// 0x58AAE0
namespace gamemd {
DynamicVector * DynamicVector::Constructor_1(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058AAE0.json)
}
} // namespace gamemd

// 0x58AB30
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058AB30.json)
}
} // namespace gamemd

// 0x58AB80
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058AB80.json)
}
} // namespace gamemd

// 0x58AC70
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::ConstructSubzone(int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058AC70.json)
}
}  // G42.18c ns repair
// 0x58AD10
namespace gamemd {
unsigned int * VectorClass_flat::SetCapacity(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058AD10.json)
}
} // namespace gamemd

// 0x5AC3A0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC3A0.json)
}
} // namespace gamemd

// 0x5AC3D0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC3D0.json)
}
} // namespace gamemd

// 0x5AC3F0
namespace gamemd {
int VectorClass_ptr_MapRegionClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5ac3fa*/

}
} // namespace gamemd

// 0x5AC5F0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC5F0.json)
}
} // namespace gamemd

// 0x5AC620
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC620.json)
}
} // namespace gamemd

// 0x5AC640
namespace gamemd {
double VectorClass_N::Clear(int a2)
{

  return *(double *)(*(unsigned int *)&this->m_1[3] + 8 * a2); /*0x5ac64a*/

}
} // namespace gamemd

// 0x5AC6A0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC6A0.json)
}
} // namespace gamemd

// 0x5AC6E0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC6E0.json)
}
} // namespace gamemd

// 0x5AC790
namespace gamemd {
void VectorClass_flat::Remove()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC790.json)
}
} // namespace gamemd

// 0x5AC7C0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC7C0.json)
}
} // namespace gamemd

// 0x5AC800
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC800.json)
}
} // namespace gamemd

// 0x5AC820
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC820.json)
}
} // namespace gamemd

// 0x5AC8D0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC8D0.json)
}
} // namespace gamemd

// 0x5AD0F0
namespace gamemd {
char DynamicVector::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD0F0.json)
}
} // namespace gamemd

// 0x5AD130
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD130.json)
}
} // namespace gamemd

// 0x5AD1F0
namespace gamemd {
wchar_t * DynamicVector::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD1F0.json)
}
} // namespace gamemd

// 0x5AD220
namespace gamemd {
int DynamicVector::GetSize(double * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD220.json)
}
} // namespace gamemd

// 0x5AD270
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD270.json)
}
} // namespace gamemd

// 0x5AD290
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD290.json)
}
} // namespace gamemd

// 0x5AD350
namespace gamemd {
int DynamicVector::FindItemIndex(double * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD350.json)
}
} // namespace gamemd

// 0x5AD390
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD390.json)
}
} // namespace gamemd

// 0x5AD3E0
namespace gamemd {
unsigned int * VectorClass_flat::loc_5AD3E0(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD3E0.json)
}
} // namespace gamemd

// 0x5AD5C0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD5C0.json)
}
} // namespace gamemd

// 0x5AD610
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_double_(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD610.json)
}
} // namespace gamemd

// 0x5D05F0
namespace gamemd {
unsigned int * DynamicVector::Count(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D05F0.json)
}
} // namespace gamemd

// 0x5D0660
namespace gamemd {
int VectorClass_ptr_MSTextEntry::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5d066a*/

}
} // namespace gamemd

// 0x5D06C0
namespace gamemd {
int VectorClass_ptr_MapSelection::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5d06ca*/

}
} // namespace gamemd

// 0x5D07E0
namespace gamemd {
int VectorClass_ptr_MSSfxEntry::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5d07ea*/

}
} // namespace gamemd

// 0x5D07F0
namespace gamemd {
char DynamicVector::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D07F0.json)
}
} // namespace gamemd

// 0x5D0850
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0850.json)
}
} // namespace gamemd

// 0x5D0920
namespace gamemd {
void DynamicVector::Set(void *a1_1, void *a2_1, void *a3_1)
{
    (void)a1_1; (void)a2_1; (void)a3_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0920.json)
}
} // namespace gamemd

// 0x5D0950
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0950.json)
}
} // namespace gamemd

// 0x5D09A0
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D09A0.json)
}
} // namespace gamemd

// 0x5D0AE0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0AE0.json)
}
} // namespace gamemd

// 0x5D0B20
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0B20.json)
}
} // namespace gamemd

// 0x5D0BD0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0BD0.json)
}
} // namespace gamemd

// 0x5D0C00
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0C00.json)
}
} // namespace gamemd

// 0x5D0C40
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0C40.json)
}
} // namespace gamemd

// 0x5D0D40
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0D40.json)
}
} // namespace gamemd

// 0x5D0D80
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0D80.json)
}
} // namespace gamemd

// 0x5D0E30
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0E30.json)
}
} // namespace gamemd

// 0x5D0E60
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0E60.json)
}
} // namespace gamemd

// 0x5D0EA0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0EA0.json)
}
} // namespace gamemd

// 0x5D1460
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D1460.json)
}
} // namespace gamemd

// 0x5D14A0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D14A0.json)
}
} // namespace gamemd

// 0x5D1550
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D1550.json)
}
} // namespace gamemd

// 0x5D1580
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D1580.json)
}
} // namespace gamemd

// 0x5D15C0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D15C0.json)
}
} // namespace gamemd

// 0x5D16C0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D16C0.json)
}
} // namespace gamemd

// 0x5D1760
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D1760.json)
}
} // namespace gamemd

// 0x5D1800
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D1800.json)
}
} // namespace gamemd

// 0x5D19E0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D19E0.json)
}
} // namespace gamemd

// 0x5D2720
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2720.json)
}
} // namespace gamemd

// 0x5D2750
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2750.json)
}
} // namespace gamemd

// 0x5D2780
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2780.json)
}
} // namespace gamemd

// 0x5D27B0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D27B0.json)
}
} // namespace gamemd

// 0x5D27D0
namespace gamemd {
int VectorClass_ptr_MSSfx::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5d27da*/

}
} // namespace gamemd

// 0x5D27E0
namespace gamemd {
char VectorClass_flat::FindItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D27E0.json)
}
} // namespace gamemd

// 0x5D2820
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2820.json)
}
} // namespace gamemd

// 0x5D28D0
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D28D0.json)
}
} // namespace gamemd

// 0x5D2960
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2960.json)
}
} // namespace gamemd

// 0x5D2A10
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2A10.json)
}
} // namespace gamemd

// 0x5D2A40
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2A40.json)
}
} // namespace gamemd

// 0x5D2A80
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2A80.json)
}
} // namespace gamemd

// 0x5D2B30
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2B30.json)
}
} // namespace gamemd

// 0x5D2B60
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2B60.json)
}
} // namespace gamemd

// 0x5D2BA0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2BA0.json)
}
} // namespace gamemd

// 0x5D2BC0
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2BC0.json)
}
} // namespace gamemd

// 0x5D2C70
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2C70.json)
}
} // namespace gamemd

// 0x5D2CF0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_MSAnim___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2CF0.json)
}
} // namespace gamemd

// 0x5D2D40
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2D40.json)
}
} // namespace gamemd

// 0x5D2D90
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_MSSfx___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D2D90.json)
}
} // namespace gamemd

// 0x5D5130
namespace gamemd {
unsigned int * VectorClass_flat::Clear(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D5130.json)
}
} // namespace gamemd

// 0x5D53B0
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D53B0.json)
}
} // namespace gamemd

// 0x5D5410
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D5410.json)
}
} // namespace gamemd

// 0x5D5500
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D5500.json)
}
} // namespace gamemd

// 0x5D5530
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D5530.json)
}
} // namespace gamemd

// 0x5D5580
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D5580.json)
}
} // namespace gamemd

// 0x5D5780
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D5780.json)
}
} // namespace gamemd

// 0x5D8100
namespace gamemd {
int VectorClass_ptr_MultiplayerTeam::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5d810a*/

}
} // namespace gamemd

// 0x5D82F0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D82F0.json)
}
} // namespace gamemd

// 0x5D8330
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8330.json)
}
} // namespace gamemd

// 0x5D83E0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D83E0.json)
}
} // namespace gamemd

// 0x5D8410
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8410.json)
}
} // namespace gamemd

// 0x5D8450
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8450.json)
}
} // namespace gamemd

// 0x5D8640
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::ddtor()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8640.json)
}
}  // G42.18c ns repair
// 0x5D8810
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8810.json)
}
} // namespace gamemd

// 0x5EEBB0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EEBB0.json)
}
} // namespace gamemd

// 0x5EEBE0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EEBE0.json)
}
} // namespace gamemd

// 0x5EEC00
namespace gamemd {
int VectorClass_cptr_MultiMission::Capacity(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5eec0a*/

}
} // namespace gamemd

// 0x5EEC10
namespace gamemd {
char DynamicVector::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EEC10.json)
}
} // namespace gamemd

// 0x5EEC50
namespace gamemd {
char DynamicVector::SetAt(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EEC50.json)
}
} // namespace gamemd

// 0x5EED00
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::Cleanup3()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EED00.json)
}
}  // G42.18c ns repair
// 0x5EED30
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EED30.json)
}
} // namespace gamemd

// 0x5EED70
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EED70.json)
}
} // namespace gamemd

// 0x5EED90
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EED90.json)
}
} // namespace gamemd

// 0x5EEE90
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EEE90.json)
}
} // namespace gamemd

// 0x5EEEC0
namespace gamemd {
VectorClass_flat * DynamicVector::GetAt(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EEEC0.json)
}
} // namespace gamemd

// 0x5EEF10
namespace gamemd {
DynamicVector * DynamicVector::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EEF10.json)
}
} // namespace gamemd

// 0x5EF190
namespace gamemd {
int DynamicVector::j_vt09(unsigned char * a1, signed int a3, int a4, int a5, int a6, int a7)
{
    (void)a1; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EF190.json)
}
} // namespace gamemd

// 0x5EF290
namespace gamemd {
unsigned int * DynamicVector::j_vt00(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EF290.json)
}
} // namespace gamemd

// 0x5F9B00
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9B00.json)
}
} // namespace gamemd

// 0x5F9B30
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9B30.json)
}
} // namespace gamemd

// 0x5F9B50
namespace gamemd {
int VectorClass_ptr_ObjectTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5f9b5a*/

}
} // namespace gamemd

// 0x5F9B80
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9B80.json)
}
} // namespace gamemd

// 0x5F9BC0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9BC0.json)
}
} // namespace gamemd

// 0x5F9C70
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9C70.json)
}
} // namespace gamemd

// 0x5F9CA0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9CA0.json)
}
} // namespace gamemd

// 0x5F9CE0
namespace gamemd {
unsigned int VectorClass_flat::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9CE0.json)
}
} // namespace gamemd

// 0x5F9D00
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9D00.json)
}
} // namespace gamemd

// 0x5F9DB0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9DB0.json)
}
} // namespace gamemd

// 0x5F9DE0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9DE0.json)
}
} // namespace gamemd

// 0x5F9E30
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_ObjectTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9E30.json)
}
} // namespace gamemd

// 0x5FFFC0
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::Destructor()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FFFC0.json)
}
}  // G42.18c ns repair
// 0x5FFFF0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FFFF0.json)
}
} // namespace gamemd

// 0x600010
namespace gamemd {
int VectorClass_ptr_SpotLightClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x60001a*/

}
} // namespace gamemd

// 0x600020
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00600020.json)
}
} // namespace gamemd

// 0x600060
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00600060.json)
}
} // namespace gamemd

// 0x600110
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00600110.json)
}
} // namespace gamemd

// 0x600140
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00600140.json)
}
} // namespace gamemd

// 0x600180
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00600180.json)
}
} // namespace gamemd

// 0x6001A0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006001A0.json)
}
} // namespace gamemd

// 0x600250
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00600250.json)
}
} // namespace gamemd

// 0x600280
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00600280.json)
}
} // namespace gamemd

// 0x6002D0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_SpotLightClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006002D0.json)
}
} // namespace gamemd

// 0x627D70
namespace gamemd {
int VectorClass_ptr_ColorScheme::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x627d7a*/

}
} // namespace gamemd

// 0x627E10
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00627E10.json)
}
} // namespace gamemd

// 0x627E50
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00627E50.json)
}
} // namespace gamemd

// 0x627F00
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00627F00.json)
}
} // namespace gamemd

// 0x627F30
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00627F30.json)
}
} // namespace gamemd

// 0x627F70
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00627F70.json)
}
} // namespace gamemd

// 0x6282E0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, char * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006282E0.json)
}
} // namespace gamemd

// 0x6283E0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006283E0.json)
}
} // namespace gamemd

// 0x628410
namespace gamemd {
int VectorClass_flat::ScalarDeletingDestructor(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00628410.json)
}
} // namespace gamemd

// 0x628470
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00628470.json)
}
} // namespace gamemd

// 0x6285F0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006285F0.json)
}
} // namespace gamemd

// 0x628760
namespace gamemd {
VectorClass_flat * VectorClass_flat::Constructor_VectorClass_HSVClass_(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00628760.json)
}
} // namespace gamemd

// 0x628A40
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00628A40.json)
}
} // namespace gamemd

// 0x628A70
namespace gamemd {
int VectorClass_flat::SetCapacity_1(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00628A70.json)
}
} // namespace gamemd

// 0x628AD0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00628AD0.json)
}
} // namespace gamemd

// 0x628DF0
namespace gamemd {  // G42.18c ns repair
unsigned int * _::ConstructHSV(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00628DF0.json)
}
}  // G42.18c ns repair
// 0x628E80
namespace gamemd {
VectorClass_flat * VectorClass_flat::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00628E80.json)
}
} // namespace gamemd

// 0x62B070
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062B070.json)
}
} // namespace gamemd

// 0x62B0A0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062B0A0.json)
}
} // namespace gamemd

// 0x62B0C0
namespace gamemd {
int VectorClass_ptr_ParasiteClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x62b0ca*/

}
} // namespace gamemd

// 0x62B0D0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062B0D0.json)
}
} // namespace gamemd

// 0x62B110
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062B110.json)
}
} // namespace gamemd

// 0x62B1C0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062B1C0.json)
}
} // namespace gamemd

// 0x62B1F0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062B1F0.json)
}
} // namespace gamemd

// 0x62B230
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062B230.json)
}
} // namespace gamemd

// 0x62B250
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062B250.json)
}
} // namespace gamemd

// 0x62B300
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062B300.json)
}
} // namespace gamemd

// 0x62B330
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062B330.json)
}
} // namespace gamemd

// 0x62B380
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_ParasiteClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062B380.json)
}
} // namespace gamemd

// 0x630250
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::PushBackCopy(AbstractClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00630250.json)
}
}  // G42.18c ns repair
// 0x63DB60
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063DB60.json)
}
} // namespace gamemd

// 0x63DB90
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063DB90.json)
}
} // namespace gamemd

// 0x63DBB0
namespace gamemd {
int VectorClass_ptr_PlanningMemberClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x63dbba*/

}
} // namespace gamemd

// 0x63DBC0
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063DBC0.json)
}
} // namespace gamemd

// 0x63DBF0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063DBF0.json)
}
} // namespace gamemd

// 0x63DC10
namespace gamemd {
int VectorClass_ptr_PlanningBranchClass::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x63dc1a*/

}
} // namespace gamemd

// 0x63DD30
namespace gamemd {
int VectorClass_ptr_PlanningTokenClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x63dd3a*/

}
} // namespace gamemd

// 0x63DD40
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063DD40.json)
}
} // namespace gamemd

// 0x63DD80
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063DD80.json)
}
} // namespace gamemd

// 0x63DE30
namespace gamemd {
void VectorClass_flat::Remove()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063DE30.json)
}
} // namespace gamemd

// 0x63DE60
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063DE60.json)
}
} // namespace gamemd

// 0x63DEA0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063DEA0.json)
}
} // namespace gamemd

// 0x63DF20
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063DF20.json)
}
} // namespace gamemd

// 0x63E020
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E020.json)
}
} // namespace gamemd

// 0x63E050
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E050.json)
}
} // namespace gamemd

// 0x63E140
namespace gamemd {  // G42.18c ns repair
int _::Cleanup2()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E140.json)
}
}  // G42.18c ns repair
// 0x63E170
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E170.json)
}
} // namespace gamemd

// 0x63E1B0
namespace gamemd {
unsigned int VectorClass_flat::Remove(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E1B0.json)
}
} // namespace gamemd

// 0x63E230
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E230.json)
}
} // namespace gamemd

// 0x63E2E0
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E2E0.json)
}
} // namespace gamemd

// 0x63E540
namespace gamemd {  // G42.18c ns repair
int _::Append(unsigned int *a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E540.json)
}
}  // G42.18c ns repair
// 0x63E900
namespace gamemd {  // G42.18c ns repair
int _::EraseAt(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E900.json)
}
}  // G42.18c ns repair
// 0x63E950
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E950.json)
}
} // namespace gamemd

// 0x63E990
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063E990.json)
}
} // namespace gamemd

// 0x63EA40
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063EA40.json)
}
} // namespace gamemd

// 0x63EA70
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063EA70.json)
}
} // namespace gamemd

// 0x63EAB0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063EAB0.json)
}
} // namespace gamemd

// 0x63EC50
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063EC50.json)
}
} // namespace gamemd

// 0x63ECA0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_PlanningMemberClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063ECA0.json)
}
} // namespace gamemd

// 0x63ECF0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063ECF0.json)
}
} // namespace gamemd

// 0x63ED40
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_PlanningBranchClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063ED40.json)
}
} // namespace gamemd

// 0x63EED0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063EED0.json)
}
} // namespace gamemd

// 0x658D60
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::PointConstructor(MapClass * aP1, MapClass * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00658D60.json)
}
}  // G42.18c ns repair
// 0x65A1E0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A1E0.json)
}
} // namespace gamemd

// 0x65A210
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A210.json)
}
} // namespace gamemd

// 0x65A230
namespace gamemd {
int VectorClass_ptr_RadBeam::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x65a23a*/

}
} // namespace gamemd

// 0x65A240
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A240.json)
}
} // namespace gamemd

// 0x65A280
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A280.json)
}
} // namespace gamemd

// 0x65A330
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A330.json)
}
} // namespace gamemd

// 0x65A360
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A360.json)
}
} // namespace gamemd

// 0x65A3A0
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A3A0.json)
}
} // namespace gamemd

// 0x65A3C0
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A3C0.json)
}
} // namespace gamemd

// 0x65A470
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A470.json)
}
} // namespace gamemd

// 0x65A4A0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A4A0.json)
}
} // namespace gamemd

// 0x65A4F0
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_RadBeam___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065A4F0.json)
}
} // namespace gamemd

// 0x65BEF0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065BEF0.json)
}
} // namespace gamemd

// 0x65BF20
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065BF20.json)
}
} // namespace gamemd

// 0x65BF40
namespace gamemd {
int VectorClass_ptr_RadSiteClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x65bf4a*/

}
} // namespace gamemd

// 0x65BF50
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065BF50.json)
}
} // namespace gamemd

// 0x65BF90
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065BF90.json)
}
} // namespace gamemd

// 0x65C040
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065C040.json)
}
} // namespace gamemd

// 0x65C070
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065C070.json)
}
} // namespace gamemd

// 0x65C0B0
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065C0B0.json)
}
} // namespace gamemd

// 0x65C0D0
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065C0D0.json)
}
} // namespace gamemd

// 0x65C180
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065C180.json)
}
} // namespace gamemd

// 0x65C1B0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065C1B0.json)
}
} // namespace gamemd

// 0x65C200
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_RadSiteClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065C200.json)
}
} // namespace gamemd

// 0x660C80
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660C80.json)
}
} // namespace gamemd

// 0x660CB0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660CB0.json)
}
} // namespace gamemd

// 0x660CD0
namespace gamemd {
int VectorClass_ptr_RadarEventClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x660cda*/

}
} // namespace gamemd

// 0x660CE0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660CE0.json)
}
} // namespace gamemd

// 0x660D20
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660D20.json)
}
} // namespace gamemd

// 0x660DD0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660DD0.json)
}
} // namespace gamemd

// 0x660E00
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660E00.json)
}
} // namespace gamemd

// 0x660E40
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660E40.json)
}
} // namespace gamemd

// 0x660E60
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660E60.json)
}
} // namespace gamemd

// 0x660F50
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660F50.json)
}
} // namespace gamemd

// 0x660F80
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660F80.json)
}
} // namespace gamemd

// 0x660FD0
namespace gamemd {
unsigned int * VectorClass_flat::loc_660FD0(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660FD0.json)
}
} // namespace gamemd

// 0x679F70
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::Dtor()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00679F70.json)
}
}  // G42.18c ns repair
// 0x67A630
namespace gamemd {  // G42.18c ns repair
int  VectorClass_flat::LoadStream(TechnoTypeClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0067A630.json)
}
}  // G42.18c ns repair
// 0x67A850
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::SaveLoad(TechnoTypeClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0067A850.json)
}
}  // G42.18c ns repair
// 0x67AA80
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::CopyAssign(VectorClass_flat * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0067AA80.json)
}
}  // G42.18c ns repair
// 0x67AE00
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::CopySmudge(CCINIClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0067AE00.json)
}
}  // G42.18c ns repair
// 0x67AF60
namespace gamemd {  // G42.18c ns repair
void VectorClass_flat::ClearAndFree()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0067AF60.json)
}
}  // G42.18c ns repair
// 0x67B180
namespace gamemd {  // G42.18c ns repair
unsigned int * _::CopyBuilding(unsigned int *a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0067B180.json)
}
}  // G42.18c ns repair
// 0x691160
namespace gamemd {  // G42.18c ns repair
char VectorClass_flat::PushBack2(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00691160.json)
}
}  // G42.18c ns repair
// 0x69C580
namespace gamemd {
char ** VectorClass_flat::Clear(char ** a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069C580.json)
}
} // namespace gamemd

// 0x69C5A0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069C5A0.json)
}
} // namespace gamemd

// 0x69C5D0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069C5D0.json)
}
} // namespace gamemd

// 0x69C5F0
namespace gamemd {
int VectorClass_ptr_MultiMission::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x69c5fa*/

}
} // namespace gamemd

// 0x69C600
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069C600.json)
}
} // namespace gamemd

// 0x69C630
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069C630.json)
}
} // namespace gamemd

// 0x69C650
namespace gamemd {
int VectorClass_ptr_GlobalPacketType::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x69c65a*/

}
} // namespace gamemd

// 0x69C660
namespace gamemd {
void VectorClass_flat::Destroy_1()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069C660.json)
}
} // namespace gamemd

// 0x69C690
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_1(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069C690.json)
}
} // namespace gamemd

// 0x69C6B0
namespace gamemd {
int VectorClass_ptr_PhoneEntryClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x69c6ba*/

}
} // namespace gamemd

// 0x69C970
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069C970.json)
}
} // namespace gamemd

// 0x69C9C0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069C9C0.json)
}
} // namespace gamemd

// 0x69CB00
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CB00.json)
}
} // namespace gamemd

// 0x69CB50
namespace gamemd {
int VectorClass_flat::GetSize(const char ** a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CB50.json)
}
} // namespace gamemd

// 0x69CBA0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CBA0.json)
}
} // namespace gamemd

// 0x69CD40
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CD40.json)
}
} // namespace gamemd

// 0x69CD80
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CD80.json)
}
} // namespace gamemd

// 0x69CE30
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CE30.json)
}
} // namespace gamemd

// 0x69CE60
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CE60.json)
}
} // namespace gamemd

// 0x69CEA0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CEA0.json)
}
} // namespace gamemd

// 0x69CEC0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CEC0.json)
}
} // namespace gamemd

// 0x69CF70
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CF70.json)
}
} // namespace gamemd

// 0x69CFA0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CFA0.json)
}
} // namespace gamemd

// 0x69CFE0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069CFE0.json)
}
} // namespace gamemd

// 0x69D090
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D090.json)
}
} // namespace gamemd

// 0x69D0C0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D0C0.json)
}
} // namespace gamemd

// 0x69D100
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D100.json)
}
} // namespace gamemd

// 0x69D120
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D120.json)
}
} // namespace gamemd

// 0x69D1D0
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D1D0.json)
}
} // namespace gamemd

// 0x69D200
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D200.json)
}
} // namespace gamemd

// 0x69D240
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D240.json)
}
} // namespace gamemd

// 0x69D2F0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D2F0.json)
}
} // namespace gamemd

// 0x69D320
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D320.json)
}
} // namespace gamemd

// 0x69D360
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D360.json)
}
} // namespace gamemd

// 0x69D380
namespace gamemd {
char VectorClass_flat::SetCapacity_1(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D380.json)
}
} // namespace gamemd

// 0x69D430
namespace gamemd {
int VectorClass_flat::FindItemIndex_1(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D430.json)
}
} // namespace gamemd

// 0x69D4B0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D4B0.json)
}
} // namespace gamemd

// 0x69D590
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D590.json)
}
} // namespace gamemd

// 0x69D5E0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_MultiMission___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D5E0.json)
}
} // namespace gamemd

// 0x69D630
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D630.json)
}
} // namespace gamemd

// 0x69D680
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_GlobalPacketType___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D680.json)
}
} // namespace gamemd

// 0x69D6D0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D6D0.json)
}
} // namespace gamemd

// 0x69D720
namespace gamemd {
unsigned int * VectorClass_flat::loc_69D720(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D720.json)
}
} // namespace gamemd

// 0x69D7C0
namespace gamemd {  // G42.18c ns repair
unsigned int * _::WstringConstructor(int a2, unsigned int *a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D7C0.json)
}
}  // G42.18c ns repair
// 0x69E9B0
namespace gamemd {  // G42.18c ns repair
int VectorClass_flat::Check(Pipe * aP1, int aP2, void *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069E9B0.json)
}
}  // G42.18c ns repair
// 0x6B1410
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B1410.json)
}
} // namespace gamemd

// 0x6B1440
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B1440.json)
}
} // namespace gamemd

// 0x6B1460
namespace gamemd {
int VectorClass_ptr_SlaveManagerClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x6b146a*/

}
} // namespace gamemd

// 0x6B16D0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B16D0.json)
}
} // namespace gamemd

// 0x6B1710
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B1710.json)
}
} // namespace gamemd

// 0x6B17C0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B17C0.json)
}
} // namespace gamemd

// 0x6B17F0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B17F0.json)
}
} // namespace gamemd

// 0x6B1830
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B1830.json)
}
} // namespace gamemd

// 0x6B1850
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B1850.json)
}
} // namespace gamemd

// 0x6B1900
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B1900.json)
}
} // namespace gamemd

// 0x6B19D0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B19D0.json)
}
} // namespace gamemd

// 0x6B1A20
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_SlaveManagerClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B1A20.json)
}
} // namespace gamemd

// 0x6B43B0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B43B0.json)
}
} // namespace gamemd

// 0x6B43E0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B43E0.json)
}
} // namespace gamemd

// 0x6B4410
namespace gamemd {
unsigned int * DynamicVector::Clear(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B4410.json)
}
} // namespace gamemd

// 0x6B4440
namespace gamemd {
char DynamicVector::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B4440.json)
}
} // namespace gamemd

// 0x6B45A0
namespace gamemd {
wchar_t * DynamicVector::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B45A0.json)
}
} // namespace gamemd

// 0x6B45D0
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B45D0.json)
}
} // namespace gamemd

// 0x6B4620
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B4620.json)
}
} // namespace gamemd

// 0x6B4760
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B4760.json)
}
} // namespace gamemd

// 0x6B47A0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B47A0.json)
}
} // namespace gamemd

// 0x6B47F0
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_UndoInfoStruct_(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B47F0.json)
}
} // namespace gamemd

// 0x6B81C0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B81C0.json)
}
} // namespace gamemd

// 0x6B81F0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B81F0.json)
}
} // namespace gamemd

// 0x6B8210
namespace gamemd {
int VectorClass_ptr_SpawnManagerClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x6b821a*/

}
} // namespace gamemd

// 0x6B84E0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B84E0.json)
}
} // namespace gamemd

// 0x6B8520
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B8520.json)
}
} // namespace gamemd

// 0x6B85D0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B85D0.json)
}
} // namespace gamemd

// 0x6B8600
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B8600.json)
}
} // namespace gamemd

// 0x6B8640
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B8640.json)
}
} // namespace gamemd

// 0x6B8660
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B8660.json)
}
} // namespace gamemd

// 0x6B8710
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B8710.json)
}
} // namespace gamemd

// 0x6B87E0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B87E0.json)
}
} // namespace gamemd

// 0x6B8830
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_SpawnManagerClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B8830.json)
}
} // namespace gamemd

// 0x6BED50
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BED50.json)
}
} // namespace gamemd

// 0x6BED80
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BED80.json)
}
} // namespace gamemd

// 0x6BEDA0
namespace gamemd {
int VectorClass_K::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x6bedaa*/

}
} // namespace gamemd

// 0x6BEE50
namespace gamemd {
int QueryInterface(int a1, const void * a2, unsigned int * a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BEE50.json)
}
} // namespace gamemd

// 0x6BEEC0
namespace gamemd {
LONG VectorClass_K_8::AddRef(int a1)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6beece*/

}
} // namespace gamemd

// 0x6BEEE0
namespace gamemd {
LONG Release(volatile LONG * Block)
{
    (void)Block; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BEEE0.json)
}
} // namespace gamemd

// 0x6BEF10
namespace gamemd {
int ddtor(int a1, int a2, int a3, unsigned int * a4)
{
    (void)a1; (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BEF10.json)
}
} // namespace gamemd

// 0x6BEF90
namespace gamemd {
int GetSize(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BEF90.json)
}
} // namespace gamemd

// 0x6BEFD0
namespace gamemd {
int QueryInterface(int a1, const void * a2, unsigned int * a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BEFD0.json)
}
} // namespace gamemd

// 0x6BF040
namespace gamemd {
LONG VectorClass_K_14::AddRef(int a1)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf04e*/

}
} // namespace gamemd

// 0x6BF060
namespace gamemd {
LONG Release(volatile LONG * Block)
{
    (void)Block; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF060.json)
}
} // namespace gamemd

// 0x6BF090
namespace gamemd {
int ddtor(int a1, int a2, int a3, unsigned int * a4)
{
    (void)a1; (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF090.json)
}
} // namespace gamemd

// 0x6BF110
namespace gamemd {
int GetSize(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF110.json)
}
} // namespace gamemd

// 0x6BF150
namespace gamemd {
int QueryInterface(int a1, const void * a2, unsigned int * a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF150.json)
}
} // namespace gamemd

// 0x6BF1C0
namespace gamemd {
LONG VectorClass_K_20::AddRef(int a1)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf1ce*/

}
} // namespace gamemd

// 0x6BF1E0
namespace gamemd {
LONG Release(volatile LONG * Block)
{
    (void)Block; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF1E0.json)
}
} // namespace gamemd

// 0x6BF210
namespace gamemd {
int ddtor(int a1, int a2, int a3, unsigned int * a4)
{
    (void)a1; (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF210.json)
}
} // namespace gamemd

// 0x6BF290
namespace gamemd {
int GetSize(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF290.json)
}
} // namespace gamemd

// 0x6BF2D0
namespace gamemd {
int QueryInterface(int a1, const void * a2, unsigned int * a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF2D0.json)
}
} // namespace gamemd

// 0x6BF340
namespace gamemd {
LONG VectorClass_K_26::AddRef(int a1)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf34e*/

}
} // namespace gamemd

// 0x6BF360
namespace gamemd {
LONG Release(volatile LONG * Block)
{
    (void)Block; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF360.json)
}
} // namespace gamemd

// 0x6BF390
namespace gamemd {
int ddtor(int a1, int a2, int a3, unsigned int * a4)
{
    (void)a1; (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF390.json)
}
} // namespace gamemd

// 0x6BF410
namespace gamemd {
int GetSize(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF410.json)
}
} // namespace gamemd

// 0x6BF450
namespace gamemd {
int QueryInterface(int a1, const void * a2, unsigned int * a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF450.json)
}
} // namespace gamemd

// 0x6BF4C0
namespace gamemd {
LONG VectorClass_K_32::AddRef(int a1)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf4ce*/

}
} // namespace gamemd

// 0x6BF4E0
namespace gamemd {
LONG Release(volatile LONG * Block)
{
    (void)Block; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF4E0.json)
}
} // namespace gamemd

// 0x6BF510
namespace gamemd {
int ddtor(int a1, int a2, int a3, unsigned int * a4)
{
    (void)a1; (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF510.json)
}
} // namespace gamemd

// 0x6BF590
namespace gamemd {
int GetSize(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF590.json)
}
} // namespace gamemd

// 0x6BF5D0
namespace gamemd {
int QueryInterface(int a1, const void * a2, unsigned int * a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF5D0.json)
}
} // namespace gamemd

// 0x6BF640
namespace gamemd {
LONG VectorClass_K_38::AddRef(int a1)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf64e*/

}
} // namespace gamemd

// 0x6BF660
namespace gamemd {
LONG Release(volatile LONG * Block)
{
    (void)Block; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF660.json)
}
} // namespace gamemd

// 0x6BF690
namespace gamemd {
int ddtor(int a1, int a2, int a3, unsigned int * a4)
{
    (void)a1; (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF690.json)
}
} // namespace gamemd

// 0x6BF710
namespace gamemd {
int GetSize(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF710.json)
}
} // namespace gamemd

// 0x6BF750
namespace gamemd {
int QueryInterface(int a1, const void * a2, unsigned int * a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF750.json)
}
} // namespace gamemd

// 0x6BF7C0
namespace gamemd {
LONG VectorClass_K_44::AddRef(int a1)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf7ce*/

}
} // namespace gamemd

// 0x6BF7E0
namespace gamemd {
LONG Release(volatile LONG * Block)
{
    (void)Block; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF7E0.json)
}
} // namespace gamemd

// 0x6BF810
namespace gamemd {
int ddtor(int a1, int a2, int a3, unsigned int * a4)
{
    (void)a1; (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF810.json)
}
} // namespace gamemd

// 0x6BF890
namespace gamemd {
int GetSize(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BF890.json)
}
} // namespace gamemd

// 0x6C61D0
namespace gamemd {
char DynamicVector::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C61D0.json)
}
} // namespace gamemd

// 0x6C6210
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C6210.json)
}
} // namespace gamemd

// 0x6C62C0
namespace gamemd {
wchar_t * DynamicVector::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C62C0.json)
}
} // namespace gamemd

// 0x6C62F0
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C62F0.json)
}
} // namespace gamemd

// 0x6C6330
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C6330.json)
}
} // namespace gamemd

// 0x6C6350
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C6350.json)
}
} // namespace gamemd

// 0x6C6450
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C6450.json)
}
} // namespace gamemd

// 0x6C6480
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C6480.json)
}
} // namespace gamemd

// 0x6C64D0
namespace gamemd {
DynamicVector * DynamicVector::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C64D0.json)
}
} // namespace gamemd

// 0x6CA7C0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CA7C0.json)
}
} // namespace gamemd

// 0x6CA7F0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CA7F0.json)
}
} // namespace gamemd

// 0x6CA810
namespace gamemd {
int VectorClass_ptr_SubTitle::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x6ca81a*/

}
} // namespace gamemd

// 0x6CA820
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CA820.json)
}
} // namespace gamemd

// 0x6CA860
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CA860.json)
}
} // namespace gamemd

// 0x6CA910
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CA910.json)
}
} // namespace gamemd

// 0x6CA9C0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_SubTitle___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CA9C0.json)
}
} // namespace gamemd

// 0x6CAA10
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CAA10.json)
}
} // namespace gamemd

// 0x6CAAC0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CAAC0.json)
}
} // namespace gamemd

// 0x6CAAF0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CAAF0.json)
}
} // namespace gamemd

// 0x6CAB30
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CAB30.json)
}
} // namespace gamemd

// 0x6CAB50
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CAB50.json)
}
} // namespace gamemd

// 0x6CE2D0
namespace gamemd {  // G42.18c ns repair
int _::RemoveAt(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CE2D0.json)
}
}  // G42.18c ns repair
// 0x6DC4E0
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC4E0.json)
}
} // namespace gamemd

// 0x6DC510
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC510.json)
}
} // namespace gamemd

// 0x6DC540
namespace gamemd {
int VectorClass_flat::Clear(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC540.json)
}
} // namespace gamemd

// 0x6DC580
namespace gamemd {
void VectorClass_flat::Destroy_0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC580.json)
}
} // namespace gamemd

// 0x6DC5B0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex_0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC5B0.json)
}
} // namespace gamemd

// 0x6DC5D0
namespace gamemd {
int VectorClass_UDirtyAreaStruct___16::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x6dc5da*/

}
} // namespace gamemd

// 0x6DC5E0
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC5E0.json)
}
} // namespace gamemd

// 0x6DC660
namespace gamemd {
char VectorClass_flat::Release(int a2, char * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC660.json)
}
} // namespace gamemd

// 0x6DC780
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC780.json)
}
} // namespace gamemd

// 0x6DC7B0
namespace gamemd {
int VectorClass_flat::GetSize(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC7B0.json)
}
} // namespace gamemd

// 0x6DC820
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC820.json)
}
} // namespace gamemd

// 0x6DC970
namespace gamemd {
int VectorClass_flat::FindItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC970.json)
}
} // namespace gamemd

// 0x6DC9D0
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC9D0.json)
}
} // namespace gamemd

// 0x6DCA10
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DCA10.json)
}
} // namespace gamemd

// 0x6DCAC0
namespace gamemd {
wchar_t * VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DCAC0.json)
}
} // namespace gamemd

// 0x6DCAF0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DCAF0.json)
}
} // namespace gamemd

// 0x6DCB30
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DCB30.json)
}
} // namespace gamemd

// 0x6DCB50
namespace gamemd {
char VectorClass_flat::SetCapacity_0(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DCB50.json)
}
} // namespace gamemd

// 0x6DCC00
namespace gamemd {
int VectorClass_flat::FindItemIndex_0(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DCC00.json)
}
} // namespace gamemd

// 0x6DCC30
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DCC30.json)
}
} // namespace gamemd

// 0x6DCC80
namespace gamemd {
unsigned int * VectorClass_flat::loc_6DCC80(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DCC80.json)
}
} // namespace gamemd

// 0x6DCCD0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DCCD0.json)
}
} // namespace gamemd

// 0x6DCD20
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_ShadowControlClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DCD20.json)
}
} // namespace gamemd

// 0x6E64E0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E64E0.json)
}
} // namespace gamemd

// 0x6E6510
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E6510.json)
}
} // namespace gamemd

// 0x6E6530
namespace gamemd {
int VectorClass_ptr_TagTypeClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x6e653a*/

}
} // namespace gamemd

// 0x6E6540
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E6540.json)
}
} // namespace gamemd

// 0x6E6580
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E6580.json)
}
} // namespace gamemd

// 0x6E6630
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E6630.json)
}
} // namespace gamemd

// 0x6E6660
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E6660.json)
}
} // namespace gamemd

// 0x6E66A0
namespace gamemd {
unsigned int DynamicVector::LoadTypeData(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E66A0.json)
}
} // namespace gamemd

// 0x6E66C0
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E66C0.json)
}
} // namespace gamemd

// 0x6E6770
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E6770.json)
}
} // namespace gamemd

// 0x6E67A0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E67A0.json)
}
} // namespace gamemd

// 0x6E67F0
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_TagTypeClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E67F0.json)
}
} // namespace gamemd

// 0x717D20
namespace gamemd {  // G42.18c ns repair
unsigned int * VectorClass_flat::CopyParticle(DynamicVector * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717D20.json)
}
}  // G42.18c ns repair
// 0x71B240
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071B240.json)
}
} // namespace gamemd

// 0x71B270
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071B270.json)
}
} // namespace gamemd

// 0x71B290
namespace gamemd {
int VectorClass_ptr_TemporalClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x71b29a*/

}
} // namespace gamemd

// 0x71B2A0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071B2A0.json)
}
} // namespace gamemd

// 0x71B2E0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071B2E0.json)
}
} // namespace gamemd

// 0x71B390
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071B390.json)
}
} // namespace gamemd

// 0x71B3C0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071B3C0.json)
}
} // namespace gamemd

// 0x71B400
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071B400.json)
}
} // namespace gamemd

// 0x71B420
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071B420.json)
}
} // namespace gamemd

// 0x71B4D0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071B4D0.json)
}
} // namespace gamemd

// 0x71B500
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071B500.json)
}
} // namespace gamemd

// 0x71B550
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_TemporalClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071B550.json)
}
} // namespace gamemd

// 0x71FBA0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071FBA0.json)
}
} // namespace gamemd

// 0x71FBD0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071FBD0.json)
}
} // namespace gamemd

// 0x71FBF0
namespace gamemd {
int VectorClass_ptr_TEventClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x71fbfa*/

}
} // namespace gamemd

// 0x71FC00
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071FC00.json)
}
} // namespace gamemd

// 0x71FC40
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071FC40.json)
}
} // namespace gamemd

// 0x71FCF0
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071FCF0.json)
}
} // namespace gamemd

// 0x71FD20
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071FD20.json)
}
} // namespace gamemd

// 0x71FD60
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071FD60.json)
}
} // namespace gamemd

// 0x71FD80
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071FD80.json)
}
} // namespace gamemd

// 0x71FE30
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071FE30.json)
}
} // namespace gamemd

// 0x71FE60
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071FE60.json)
}
} // namespace gamemd

// 0x71FEB0
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_TEventClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071FEB0.json)
}
} // namespace gamemd

// 0x7212B0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007212B0.json)
}
} // namespace gamemd

// 0x7212E0
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007212E0.json)
}
} // namespace gamemd

// 0x721300
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00721300.json)
}
} // namespace gamemd

// 0x7213B0
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007213B0.json)
}
} // namespace gamemd

// 0x7213E0
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_ThemeControl___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007213E0.json)
}
} // namespace gamemd

// 0x723730
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00723730.json)
}
} // namespace gamemd

// 0x723760
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00723760.json)
}
} // namespace gamemd

// 0x723780
namespace gamemd {
int VectorClass_ptr_TiberiumClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x72378a*/

}
} // namespace gamemd

// 0x723790
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00723790.json)
}
} // namespace gamemd

// 0x7237D0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007237D0.json)
}
} // namespace gamemd

// 0x723880
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00723880.json)
}
} // namespace gamemd

// 0x7238B0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007238B0.json)
}
} // namespace gamemd

// 0x7238F0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007238F0.json)
}
} // namespace gamemd

// 0x723910
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00723910.json)
}
} // namespace gamemd

// 0x7239C0
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007239C0.json)
}
} // namespace gamemd

// 0x7239F0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007239F0.json)
}
} // namespace gamemd

// 0x723A40
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_TiberiumClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00723A40.json)
}
} // namespace gamemd

// 0x74BF90
namespace gamemd {
char VectorClass_E::Clear(int a2)
{

  return *(unsigned char *)(*(unsigned int *)&this->m_1[3] + a2); /*0x74bf9a*/

}
} // namespace gamemd

// 0x74BFA0
namespace gamemd {
VectorClass_flat * VectorClass_E::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074BFA0.json)
}
} // namespace gamemd

// 0x74BFF0
namespace gamemd {
char VectorClass_E::AddRef(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074BFF0.json)
}
} // namespace gamemd

// 0x74C030
namespace gamemd {
char VectorClass_E::Release(signed int Size, char * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074C030.json)
}
} // namespace gamemd

// 0x74C0E0
namespace gamemd {
void VectorClass_E::ddtor(void *a1_1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074C0E0.json)
}
} // namespace gamemd

// 0x74C110
namespace gamemd {
int VectorClass_E::GetSize(unsigned char * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074C110.json)
}
} // namespace gamemd

// 0x74C150
namespace gamemd {
int VectorClass_E::GetCapacity(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074C150.json)
}
} // namespace gamemd

// 0x7518D0
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007518D0.json)
}
} // namespace gamemd

// 0x751900
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00751900.json)
}
} // namespace gamemd

// 0x751920
namespace gamemd {
int VectorClass_ptr_VocClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x75192a*/

}
} // namespace gamemd

// 0x751930
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00751930.json)
}
} // namespace gamemd

// 0x751970
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00751970.json)
}
} // namespace gamemd

// 0x751A20
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00751A20.json)
}
} // namespace gamemd

// 0x751A50
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00751A50.json)
}
} // namespace gamemd

// 0x751A90
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00751A90.json)
}
} // namespace gamemd

// 0x751AB0
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00751AB0.json)
}
} // namespace gamemd

// 0x751B60
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00751B60.json)
}
} // namespace gamemd

// 0x751B90
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00751B90.json)
}
} // namespace gamemd

// 0x751BE0
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_VocClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00751BE0.json)
}
} // namespace gamemd

// 0x7536A0
namespace gamemd {
int VectorClass_ptr_VoxClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x7536aa*/

}
} // namespace gamemd

// 0x7536B0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007536B0.json)
}
} // namespace gamemd

// 0x7536F0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007536F0.json)
}
} // namespace gamemd

// 0x7537A0
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007537A0.json)
}
} // namespace gamemd

// 0x7537D0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007537D0.json)
}
} // namespace gamemd

// 0x753810
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00753810.json)
}
} // namespace gamemd

// 0x753910
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00753910.json)
}
} // namespace gamemd

// 0x75A430
namespace gamemd {
int DynamicVector::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075A430.json)
}
} // namespace gamemd

// 0x75A460
namespace gamemd {
unsigned int DynamicVector::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075A460.json)
}
} // namespace gamemd

// 0x75A480
namespace gamemd {
int VectorClass_ptr_MovieHandle::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x75a48a*/

}
} // namespace gamemd

// 0x75A490
namespace gamemd {
char DynamicVector::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075A490.json)
}
} // namespace gamemd

// 0x75A4D0
namespace gamemd {
char DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075A4D0.json)
}
} // namespace gamemd

// 0x75A580
namespace gamemd {
void DynamicVector::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075A580.json)
}
} // namespace gamemd

// 0x75A5B0
namespace gamemd {
int DynamicVector::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075A5B0.json)
}
} // namespace gamemd

// 0x75A5F0
namespace gamemd {
unsigned int DynamicVector::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075A5F0.json)
}
} // namespace gamemd

// 0x75A610
namespace gamemd {
char DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075A610.json)
}
} // namespace gamemd

// 0x75A6C0
namespace gamemd {
int DynamicVector::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075A6C0.json)
}
} // namespace gamemd

// 0x75A6F0
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075A6F0.json)
}
} // namespace gamemd

// 0x75A740
namespace gamemd {
DynamicVector * DynamicVector::Constructor_VectorClass_MovieHandle___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0075A740.json)
}
} // namespace gamemd

// 0x763F90
namespace gamemd {
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00763F90.json)
}
} // namespace gamemd

// 0x763FC0
namespace gamemd {
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00763FC0.json)
}
} // namespace gamemd

// 0x763FE0
namespace gamemd {
int VectorClass_ptr_WaypointPathClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x763fea*/

}
} // namespace gamemd

// 0x764460
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00764460.json)
}
} // namespace gamemd

// 0x7644A0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007644A0.json)
}
} // namespace gamemd

// 0x764550
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00764550.json)
}
} // namespace gamemd

// 0x764580
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00764580.json)
}
} // namespace gamemd

// 0x7645C0
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007645C0.json)
}
} // namespace gamemd

// 0x7645E0
namespace gamemd {
char VectorClass_flat::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007645E0.json)
}
} // namespace gamemd

// 0x764690
namespace gamemd {
int VectorClass_flat::FindItemIndex(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00764690.json)
}
} // namespace gamemd

// 0x7646C0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007646C0.json)
}
} // namespace gamemd

// 0x764710
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_WaypointPathClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00764710.json)
}
} // namespace gamemd

// 0x76B6C0
namespace gamemd {
unsigned int * VectorClass_flat::loc_76B6C0(WDTState * aP1, int a3)
{
    (void)aP1; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076B6C0.json)
}
} // namespace gamemd

// 0x76B760
namespace gamemd {
unsigned int * VectorClass_flat::Clear(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076B760.json)
}
} // namespace gamemd

// 0x76B870
namespace gamemd {
char VectorClass_flat::AddRef(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076B870.json)
}
} // namespace gamemd

// 0x76B9E0
namespace gamemd {
int VectorClass_flat::ddtor(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076B9E0.json)
}
} // namespace gamemd

// 0x76BA10
namespace gamemd {
int VectorClass_flat::GetSize(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076BA10.json)
}
} // namespace gamemd

// 0x76BA50
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076BA50.json)
}
} // namespace gamemd

// 0x76BBC0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076BBC0.json)
}
} // namespace gamemd

// 0x7AE730
namespace gamemd {  // G42.18c ns repair
int _::Shrink()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007AE730.json)
}
}  // G42.18c ns repair
// 0x7B2890
namespace gamemd {
int VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Get(int a2, void *a2_2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x7b289a*/

}
} // namespace gamemd

// 0x7B28A0
namespace gamemd {
char VectorClass_flat::Add(int a2, void *a2_2, void *a3_1)
{
    (void)a2; (void)a2_2; (void)a3_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B28A0.json)
}
} // namespace gamemd

// 0x7B28E0
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B28E0.json)
}
} // namespace gamemd

// 0x7B2990
namespace gamemd {
void VectorClass_flat::Remove(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B2990.json)
}
} // namespace gamemd

// 0x7B29C0
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B29C0.json)
}
} // namespace gamemd

// 0x7B2A00
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B2A00.json)
}
} // namespace gamemd

// 0x7B2B00
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B2B00.json)
}
} // namespace gamemd

// 0x7B4310
namespace gamemd {
int VectorClass_PAE::Count(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x7b431a*/

}
} // namespace gamemd

// 0x7B4320
namespace gamemd {
char VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B4320.json)
}
} // namespace gamemd

// 0x7B4360
namespace gamemd {
char VectorClass_flat::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B4360.json)
}
} // namespace gamemd

// 0x7B4410
namespace gamemd {
void VectorClass_flat::Set(void *a1_1, void *a2_1, void *a3_1)
{
    (void)a1_1; (void)a2_1; (void)a3_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B4410.json)
}
} // namespace gamemd

// 0x7B4440
namespace gamemd {
int VectorClass_flat::GetSize(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B4440.json)
}
} // namespace gamemd

// 0x7B4480
namespace gamemd {
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B4480.json)
}
} // namespace gamemd

// 0x7B4580
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B4580.json)
}
} // namespace gamemd

// 0x7B4860
namespace gamemd {
bool VectorClass_flat::SetCapacity(const char ** a2)
{
    (void)a2; return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B4860.json)
}
} // namespace gamemd
