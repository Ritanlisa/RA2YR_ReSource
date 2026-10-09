// GENERATED template-collision flat carrier (mechanical).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class WDTState;  // G42.36 fwd supply
class Constructor_VectorClass_WaypointPathClass___;  // G42.36 fwd supply
class Constructor_VectorClass_TiberiumClass___;  // G42.36 fwd supply
class Constructor_VectorClass_TemporalClass___;  // G42.36 fwd supply
class CopyParticle;  // G42.36 fwd supply
class Constructor_VectorClass_ShadowControlClass___;  // G42.36 fwd supply

struct VectorClass_flat {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_D;  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_A0;  // 0xA0
    unsigned int u32_E4;  // 0xE4
    unsigned int u32_E8;  // 0xE8
    unsigned int u32_F0;  // 0xF0
    unsigned int u32_3C0;  // 0x3C0
    unsigned int u32_2580;  // 0x2580
    unsigned int u32_2584;  // 0x2584
    unsigned int u32_2590;  // 0x2590
// --- flat members (END) ---
VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);
VectorClass_flat *  vt00(unsigned int * Block, char a2);
char AddRef(int a2);
char Append(VectorClass_flat * aP1, void *a2);
char AppendCopy(DynamicVector * aP1);
char EraseAt(IUnknown * aP1);
char InsertAt(IUnknown * aP1, int a3);
char PushBack(VectorClass_flat * aP1);
char PushBack2(unsigned int * a2);
char PushBackCopy(AbstractClass * aP1);
char Release(int a2, char * a3);
char RemoveAt(int a2, void *a2_2);
char ResizeEx(int a2, unsigned int * a3);
char Shrink();
char vt02(int a2, unsigned int * a3);
int * ScalarDtor(char a2);
int Check(Pipe * aP1, int aP2, void *a3);
int GetAtChecked(IUnknown * aP1);
int GetAt_Copy(int a2);
int GetCount();
int  GetSize(unsigned int * a2);
int  LoadStream(TechnoTypeClass * aP1);
int RemoveElement();
int RemoveItem(ObjectClass * aP1, void *a2);
int SaveLoad(TechnoTypeClass * aP1);
int  vt04(unsigned int * a2);
unsigned int * BuildingConstructor(int a2, int a3);
unsigned int * BuildingTypeConstructor(TechnoTypeClass * aP1, TechnoTypeClass * aP2);
unsigned int * CellConstructor(IUnknown * aP1, IUnknown * aP2);
unsigned int * Construct(int a2, int a3, void *a3_2, void *a4, void *a5, void *a6);
unsigned int * ConstructSubzone(int a2, int a3);
unsigned int * ConstructorWithVtable(TechnoTypeClass * aP1, TechnoTypeClass * aP2);
unsigned int * Copy(VectorClass_flat * aP1, void *a2);
unsigned int * CopyBuilding(VectorClass * aP1);  // G57w8: bare VectorClass resolves to template in this TU
unsigned int * CopyDefault(VectorClass * aP1);  // G57w8
unsigned int * CopySmudge(CCINIClass * aP1);
unsigned int * PointConstructor(MapClass * aP1, MapClass * aP2);
unsigned int * WstringConstructor(int a2, unsigned int * a3);
unsigned int GetCapacity(int a2);
unsigned int GetIndex(int a2);
unsigned int vt05(int a2);
void Cleanup(void *a1);
void Cleanup3();
void Cleanup4();
void Cleanup5();
void CleanupSubzone();
void CleanupTyped();
void ClearAndFree();
void ClearAndFree2();
void ClearAndFree3();
void ClearAndFree4();void Destroy(void *a1);;
// fused-garbage: void Desvoidvoid Destroy();
    AbstractClass * * Release(int a2, unsigned int * a3);
    int RemoveObjectById();
    unsigned int * Constructor(EnumConnectionPointsClass * aP1, void *a2_1, void *a3_1);
    int SetCapacity(int a1, int a2);
    int SetCapacity_0(int a1, int a2);
    char SetCapacity_0(int a2, unsigned int * a3);  // G42.38 overload supply
    int SetCapacity_1(int a1, int a2);
    int SetCapacity_2(int a1, int a2);
    unsigned int * SetCapacity_3(int a1, unsigned int * a2);
    unsigned int * SetCapacity_4(int a1, unsigned int * a2);
    int SetCapacity_5(int a1);
    AbstractClass * * SetCapacity_6(int a2, unsigned int * a3);
    int Clear(int a2, int a3);
    int Get(int a2, void *a2_2);
    char Add(int a2, void *a2_2, void *a3_1);
    void Remove(void *a1_1);
    int FindItemIndex(unsigned int * a2);
    DynamicVector * Constructor_VectorClass_LightConvertClass___(unsigned int * Block, char a2);
    unsigned int GetItemIndex(int a2);
    DynamicVector * Constructor_VectorClass_IsometricTileClass___(unsigned int * Block, char a2);
    int GetItem();
    LogicClass * Constructor_VectorClass_ObjectClass___(unsigned int * Block, char a2);
    void TryFreeAndClear();
    unsigned int GetPtrOffset(int a2);
    int GetAt(int a2);
    int FindValue(unsigned int * a2);
    DynamicVector * Constructor_VectorClass_VoxelAnimClass___(unsigned int * Block, char a2);
    unsigned int LoadTypeData(int a2);
    DynamicVector * Constructor_VectorClass_WarheadTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_WeaponTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_AirstrikeClass___(unsigned int * Block, char a2);
    unsigned int * loc_421B10(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_FoggedObjectClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_Reestablish___(unsigned int * Block, char a2);
    unsigned int * loc_46B910(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_CaptureManagerClass___(unsigned int * Block, char a2);
    char Resize(int a2, unsigned int * a3);
    DynamicVector * Constructor_VectorClass_tagCONNECTDATA_(unsigned int * Block, char a2);
    int FindItemIndex_0(unsigned int * a2);
    unsigned int * loc_4BA1B0(unsigned int * Block, char a2);
    void Destroy_0();
    unsigned int GetItemIndex_0(int a2);
    void Destroy_1();
    unsigned int GetItemIndex_1(int a2);
    DynamicVector * Constructor_VectorClass_BuildingClass___(unsigned int * Block, char a2);
    AbstractClass * * PlaceCliffs(int a2, int a3, IUnknown * aP3);
    AbstractClass * * ConnectivityGraph(void *a1_1);
    int FloodFillConnectivity(unsigned __int8 *a1, int aP2, unsigned int *aP3);
    AbstractClass * * ProcessCellModification(IUnknown * aP1);
    AbstractClass * * RecursiveModify(IUnknown * aP1);
    int CreateCrater(IUnknown * aP1, void *a2_1, void *a3_1, void *a4_1, void *a5_1);
    VectorClass_flat * * SelectTileType(Random * aP0, IUnknown * aP1);
    void PlaceTiberiumTrees(ScenarioClass * aP0, int a2, int a3, char a4);
    unsigned int * ClimbCheck(AbstractClass * aP0, AbstractClass * aP1);
    int LookupByName();
    wchar_t * ddtor(void *a1_1);
    char SetCapacity(int a2, unsigned int * a3);
    void Clear_0();
    char Remove(int a2, unsigned int * a3);
    VectorClass_flat * Destructor(unsigned int * Block, char a2);
    DynamicVectorClass_uint * Add(unsigned int * Block, char a2, void *a3_1);
    int Seek(int a2, void *a2_2, void *a3_1);
    int Read(unsigned int * a2, void *a2_2);
    unsigned int Write(int a2);
    int ProcessGrowth(int a2, MapResourceClass * aP2, char _140);
    VectorClass_flat * * CalculateSpread(MouseClass * aP1, MapResourceClass * aP2, short * a3, int a5, MouseClass * aP5, MapResourceClass * aP6, double * a7);
    void * Constructor_0(rc_ptr_base * Block, char a2, void *a3_1);
    unsigned int * Seek(unsigned int * a2, int a3, void *a3_2);
    VectorCursor * Constructor(unsigned int * Block, char a2, void *a3_1);
    int Read(int a2, void *a2_2);
    void Set(void *a1_1, void *a2_1, void *a3_1);
    int FindItemIndex_1(unsigned int * a2);
    DynamicVector * Constructor_VectorClass_SuperClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_AITriggerTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_BuildingLightClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_TriggerClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_TriggerTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_ParticleSystemClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_CampaignClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_SideClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_HouseTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_TaskForceClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_TeamTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_ScriptTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_OverlayTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_SmudgeTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_TerrainTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_BuildingTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_AircraftTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_UnitTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_AnimTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_InfantryTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_BulletTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_VoxelAnimTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_IsometricTileTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_ParticleTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_ParticleSystemTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_SuperWeaponTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_AbstractTypeClass___(unsigned int * Block, char a2);
    int ScalarDeletingDestructor(unsigned int * a1);
    int StubReturnNullPointer(int a1, unsigned int * a2);
    int StubReturnNullPointer_0(int a1, const void * a2, unsigned int * a3);
    char CompareVectors(int a2);
    DynamicVector * Constructor_VectorClass_AngerStruct_(unsigned int * Block, char a2);
    unsigned int * loc_5102C0(unsigned int * Block, char a2);
    VectorClass_flat * Constructor_0(unsigned int * Block, char a2, void *a3_1);
    unsigned int * CopyConstructor(InfantryTypeClass * aP1);
    DynamicVector * Constructor_VectorClass_IonBlastClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_LaserDrawClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_LightSourceClass___(unsigned int * Block, char a2);
    unsigned int * loc_5AD3E0(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_MSAnim___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_ObjectTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_SpotLightClass___(unsigned int * Block, char a2);
    VectorClass_flat * Constructor_VectorClass_HSVClass_(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_AircraftClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_ParasiteClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_PlanningMemberClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_PlanningBranchClass___(unsigned int * Block, char a2);
    unsigned int * loc_660FD0(unsigned int * Block, char a2);
    unsigned int * CopyAssign(VectorClass_flat * aP1);
    DynamicVector * Constructor_VectorClass_MultiMission___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_GlobalPacketType___(unsigned int * Block, char a2);
    unsigned int * loc_69D720(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_SlaveManagerClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_SpawnManagerClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_SubTitle___(unsigned int * Block, char a2);
    unsigned int * loc_6DCC80(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_ShadowControlClass___(unsigned int * Block, char a2);
    unsigned int * CopyParticle(DynamicVector * aP1);
    DynamicVector * Constructor_VectorClass_TemporalClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_TiberiumClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_WaypointPathClass___(unsigned int * Block, char a2);
    unsigned int * loc_76B6C0(WDTState * aP1, int a3);
    char SetCapacity_1(int a2, unsigned int * a3);  // 0x4EA800
    char Set(int a2, unsigned int * a3, void *a3_2);  // 0x???
    VectorClass_flat * Get(unsigned int * Block, char a2);  // 0x???
    int Destructor();  // 0x???
    void Dtor();  // 0x???
    char ** Clear(char ** a2, int a3);  // 0x???
    int GetSize(const char ** a2);  // 0x???
    int GetSize(int a2);  // 0x???
    int FindItemIndex(int a2);  // 0x???
    unsigned int * Clear(unsigned int * a2, int a3);  // 0x???
    bool SetCapacity(const char ** a2);  // 0x???
    char Remove(int a2, int * a3);
    char Clear(int a2);
    unsigned char DynamicVector_field_0x1;  // 0x1 (offset-truth supply)
    unsigned int q000;  // 0x0 (offset-truth supply)
    unsigned int q008;  // 0x8 (offset-truth supply)
    unsigned int q00C;  // 0xC (offset-truth supply)
    unsigned int q010;  // 0x10 (offset-truth supply)
    unsigned int q014;  // 0x14 (offset-truth supply)
};  // fix_truncated_headers: restored closer
}  // fix_truncated_headers: restored closer // namespace gamemd
