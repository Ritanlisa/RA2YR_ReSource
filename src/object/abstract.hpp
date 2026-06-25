#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/math.hpp"

// IDA: IID_IRTTITypeInfo @ 0x7E9AE0 = {170DAC82-12E4-11D2-8175-006008055BB5}
// {170DAC82-12E4-11D2-8175-006008055BB5}
static const GUID IID_IRTTITypeInfo = 
{ 0x170DAC82, 0x12E4, 0x11D2, { 0x81, 0x75, 0x00, 0x60, 0x08, 0x05, 0x5B, 0xB5 } };

namespace ra2 {
namespace game {

using ::gamemd::AbstractType;
using ::gamemd::AbstractFlags;
using ::gamemd::CoordStruct;
using ::gamemd::CellStruct;
using ::gamemd::Point2D;
using ::gamemd::RectangleStruct;
using ::gamemd::TimerStruct;

struct DirStruct {
    uint32_t Raw;
    // design: constexpr only (no runtime address), no callgraph/git history reference
    constexpr DirStruct() noexcept : Raw(0) {}
    // design: constexpr only (no runtime address), no callgraph/git history reference
    explicit constexpr DirStruct(uint32_t val) noexcept : Raw(val) {}
};

using FacingStruct = DirStruct;

class HouseClass;
class TechnoClass;
class ObjectClass;
class FootClass;
class Checksummer;

class IPersistStream : IUnknown {
public:
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) = 0;
    virtual HRESULT __stdcall IsDirty() = 0;  // 0x7099D0
    virtual HRESULT __stdcall Load(IStream* stream) = 0;  // 0x55AA60
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) = 0;
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) = 0;
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int SetField(int a1);  // 0x5b36e0
    // === FUNCS-MOVE (END) ===
};

class IRTTITypeInfo : IUnknown {
public:
    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const = 0;
    // unmatched: no callgraph reference and no git history record
    virtual int __stdcall fetchId() const = 0;
    virtual void __stdcall createId() = 0;  // 0x486920
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void ClearBuffer();  // 0x74F360
    int PointerToIndex(int a1);  // 0x74F390
    int SetCapacity(int a1, void* a2);  // 0x74F540
    int FindItem(void* a1);  // 0x74F5F0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int QueryInterface(int a1, int a2, int a3);  // 0x4105e0
    // === FUNCS-MOVE (END) ===
};

class INoticeSink {
public:
    // unmatched: no callgraph reference and no git history record
    virtual bool __stdcall onNotice(unsigned long event) = 0;
};

class INoticeSource {
public:
    // unmatched: no callgraph reference and no git history record
    virtual void __stdcall notifySinks() = 0;
};

// IDA: AbstractClass @ constructor=0x410170, sizeof >= 0x24 (4 vtables + 6 fields)
// vtable[0] @ 0x7E1F50 (IPersistStream + custom, 28 entries)
// vtable[1] @ 0x7E1F34 (IRTTITypeInfo chain, 32 entries)
// vtable[2] @ 0x7E1F2C (INoticeSink merged, 32 entries)
// vtable[3] @ 0x7E1F24 (INoticeSource merged, 31 entries)
// All 4 vtable pointers are at +0x00/+0x04/+0x08/+0x0C (IDA ctor confirmed)
class AbstractClass : public IPersistStream, public IRTTITypeInfo,
                      public INoticeSink, public INoticeSource {
public:
    static constexpr AbstractType kObjectTypeId = static_cast<AbstractType>(52);

    // --- IPersistStream (vtable[0]) ---
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;  // 0x410260
    virtual ULONG   __stdcall AddRef() override;  // 0x464AC0
    virtual ULONG   __stdcall Release() override;  // 0x4E0360
    // wrapper: delegates to AbstractClassVector::Release at 0x4E0360
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall IsDirty() override;  // 0x7099D0
    // wrapper: delegates to IPersistStream::IsDirty at 0x7099D0
    virtual HRESULT __stdcall Load(IStream* stream) override;
    // wrapper: delegates to IPersistStream::IsDirty at 0x7099D0
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) override;

    // --- IRTTITypeInfo (vtable[1]) ---
    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // unmatched: no callgraph reference and no git history record
    virtual int __stdcall fetchId() const override;
    virtual void __stdcall createId() override;   // 0x486920

    // --- INoticeSink (vtable[2]) ---
    // unmatched: no callgraph reference and no git history record
    virtual bool __stdcall onNotice(unsigned long event) override;

    // --- INoticeSource (vtable[3]) ---
    // unmatched: no callgraph reference and no git history record
    virtual void __stdcall notifySinks() override;

    // --- AbstractClass custom virtuals (vtable[0] entries 8+) ---
    // IDA: vtable[0][8]  = COMStub_8    (0x4105A0)
    // IDA: vtable[0][9]  = StubReturnFalse (0x410470)
    // IDA: vtable[0][10] = COMStub_Return0_10 (0x410480)
    // IDA: vtable[0][13] = ProcessPower (0x410410)
    // IDA: vtable[0][17] = sub_410440
    // IDA: vtable[0][18] = GetInvalidCoord (0x4104C0)
    // IDA: vtable[0][19] = GetCoordsEx (0x4104F0)
    // IDA: vtable[0][22] = GetCoords (0x410540)
    virtual ~AbstractClass() = default;  // 0x4101F0

    virtual void initialize();  // 0x438E70
    // unmatched: no callgraph reference and no git history record
    virtual void pointerExpired(AbstractClass* ptr, bool removed);
    // wrapper: delegates to AbstractClass::Initialize at 0x438E70
    virtual int objectSize() const;
    // unmatched: no callgraph reference and no git history record
    virtual void calculateChecksum(Checksummer& checksum) const;
    // wrapper: delegates to AbstractClass::Initialize at 0x438E70
    virtual int owningHouseIndex() const;
    // wrapper: delegates to AbstractClass::Initialize at 0x438E70
    virtual HouseClass* owningHouse() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual int arrayIndex() const;
    virtual bool isDead() const;
    // unmatched: no callgraph reference and no git history record
    virtual CoordStruct* fetchCoordinatesHere(CoordStruct* out) const;
    // unmatched: no callgraph reference and no git history record
    virtual CoordStruct* fetchDestination(CoordStruct* out, TechnoClass* docker = nullptr) const;
    virtual CoordStruct* GetCoords(CoordStruct* out) const;  // 0x410540
    // wrapper: delegates to AbstractClass::GetCoords at 0x410540
    virtual bool isOnGround() const;
    // unmatched: no callgraph reference and no git history record
    virtual bool isAirborne() const;
    // unmatched: no callgraph reference and no git history record
    virtual CoordStruct* fetchAlternateCoordinates(CoordStruct* out) const;
    // wrapper: delegates to AbstractClass::GetCoords at 0x410540
    virtual void updateLogic();

    // unmatched: no callgraph reference and no git history record
    CoordStruct fetchCoordinatesHere() const;
    // unmatched: no callgraph reference and no git history record
    CoordStruct fetchDestination(TechnoClass* docker = nullptr) const;
    // unmatched: no callgraph reference and no git history record
    CoordStruct fetchAlternateCoordinates() const;

    // unmatched: no callgraph reference and no git history record
    bool operator<(const AbstractClass& rhs) const;

    // IDA ctor confirmed offsets:
    uint32_t    uniqueId;         // +0x10, init = -1 (0xFFFFFFFF)
    uint32_t    abstractFlags;    // +0x14, init = preserve bits 7-3 (& 0xF8)
    uint32_t    nextArrayIndex;        // +0x18, init = 0
    int32_t     referenceCount;         // +0x1C, init = 0
    bool        needsSave;             // +0x20, init = 0
    uint8_t     alignmentPadding[3];     // +0x21, alignment

protected:
    AbstractClass() noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* IsTechno();  // 0x40DD20
    void* IsTechnoType();  // 0x40DD70
    void* Constructor();  // 0x410170
    void* InitVtables(int a1);  // 0x4101C0
    int COMStub_AddRef();  // 0x410300
    int COMStub_Release();  // 0x410310
    int ProcessPower();  // 0x410410
    int IsClean();  // 0x410450
    int GetCoordsEx();  // 0x4104F0
    int COMStub_8();  // 0x4105A0
    void* processCleanup(int a1);  // 0x41C490
    void* Create();  // 0x41D300
    int processDetection(int a1);  // 0x439150
    int Construct(void* a1);  // 0x43A7E0
    int clearRefCount(void* a1, int a2);  // 0x45E800
    int addRefCount(int a1);  // 0x45E880
    void* checkPointer(void* a1);  // 0x45EBD0
    void* validatePointer(int a1);  // 0x45EC20
    int removePointer();  // 0x45ED50
    int addPointer(int a1);  // 0x45EDD0
    int LoadTypeFile();  // 0x45F040
    int LoadTheaterSHP();  // 0x465960
    int getFactoryCount(void* a1, void* a2, int a3, int a4, int a5, int a6, int a7, int a8);  // 0x4914C0
    int getFactoryIndex(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  // 0x491500
    int setFactoryState(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  // 0x491530
    int checkFactoryQueue(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);  // 0x491560
    int readFactoryINI(void* a1, void* a2, int a3, int a4, int a5, int a6, int a7, int a8);  // 0x491590
    int writeFactoryINI(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  // 0x4915E0
    int resetFactoryState(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  // 0x491610
    int validateFactory(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);  // 0x491640
    void processScriptEvent();  // 0x4CA890
    int checkScriptCondition(int a1);  // 0x4CA8C0
    int executeScriptAction(int a1, void* a2);  // 0x4CAA70
    int validateScriptArgs(void* a1);  // 0x4CAB20
    void* resetScriptState(int a1);  // 0x4CABA0
    void getMissionState();  // 0x4D2930
    int setMissionState(int a1);  // 0x4D2960
    void updateMission();  // 0x4E0190
    void* processMissionQueue(int a1);  // 0x4E0270
    int completeMission(int a1, void* a2);  // 0x4E04A0
    void* getMovementSpeed(int a1);  // 0x50E380
    void getTargetCoordinates();  // 0x50E5D0
    int setTargetCoordinates(int a1);  // 0x50E600
    int evaluateTarget(int a1, void* a2);  // 0x50F3A0
    int selectBestTarget(int a1);  // 0x50F4A0
    void* updateThreatMap(int a1);  // 0x510220
    int ModifyCellTiles(int a1);  // 0x543330
    int COMStub_5(void* a1, int a2);  // 0x543990
    int COMStub_54(int a1, int a2);  // 0x543A10
    int COMStub_53();  // 0x543A40
    void* CreateInstance(int a1);  // 0x543B10
    void processStateTransition(int a1);  // 0x54E590
    int COMStub_125(int a1, int a2, int a3);  // 0x5B3650
    int COMStub_126();  // 0x5B36B0
    int COMStub_13(int a1);  // 0x5B3970
    void* getWeaponSpeed(int a1);  // 0x5B46E0
    void checkLOS(int a1);  // 0x5C0280
    int computePathCost();  // 0x5C02C0
    int processPathNode();  // 0x5C02F0
    int computePathDistance(int a1, int a2);  // 0x5C0340
    int checkPathEnd(int a1);  // 0x5C0380
    void finalizePath(int a1);  // 0x5C03A0
    void* processCombatState(int a1);  // 0x5C09B0
    int checkCombatFlags(int a1, void* a2);  // 0x5C0B10
    void processDamageEvent();  // 0x5C0BC0
    int applyDamageEffects(void* a1);  // 0x5C0BF0
    int checkDamageThreshold(int a1);  // 0x5C0C30
    void* processDeathEvent(int a1);  // 0x5C0D30
    void* updateAnimationState(int a1, int a2);  // 0x5C5A30
    int IsNotNull();  // 0x5F5930
    int COMStub_79();  // 0x5F6C70
    void ProcessData();  // 0x6293E0
    void* getTeamIndex(int a1);  // 0x645B10
    int checkTeamMembership();  // 0x65C2E0
    int dispatchTeamEvent(int a1, int a2);  // 0x65C340
    int validateTeamConfig();  // 0x65C4B0
    void* checkAICondition(int a1);  // 0x65D4D0
    int updateAITimer();  // 0x68BCB0
    int getAIPriority(int a1, void* a2);  // 0x6B14B0
    void setAIPriority();  // 0x6B1560
    int evaluateAIOption(void* a1);  // 0x6B1590
    int selectAIAction(int a1);  // 0x6B15D0
    void* checkAIResources(int a1);  // 0x6B1930
    int allocatePathMemory(int a1, void* a2);  // 0x6B8260
    void freePathMemory();  // 0x6B8310
    int initPathState(void* a1);  // 0x6B8340
    int resetPathMemory(int a1);  // 0x6B8380
    void* validatePathMemory(int a1);  // 0x6B8740
    int GetTotalValue();  // 0x6C9600
    int getTotalValue(int a1);  // 0x6C9D30
    int checkWeaponCooldown(int a1);  // 0x71FFE0
    int getCurrentWeapon(int a1, int a2);  // 0x720020
    int selectWeapon();  // 0x720070
    void* fireWeapon(int a1);  // 0x720140
    int reloadWeapon(int a1);  // 0x720200
    void* checkAmmunition(int a1);  // 0x720210
    void processRadarEvent();  // 0x733160
    void updateBuildingState(int a1);  // 0x7598D0
    int processConstruction();  // 0x759E10
    void checkBuildProgress();  // 0x759E50
    int finalizeConstruction();  // 0x759E80
    int ProcessInit();  // 0x75D230
    void checkSuperWeaponStatus();  // 0x763EF0
    int updateSuperWeaponTimer(int a1);  // 0x763F30
    void* fireSuperWeapon(void* a1, int a2);  // 0x763F60
    void* checkSWTarget(int a1);  // 0x763FF0
    void* getSWChargeState(int a1);  // 0x764050
    int setSWCharge(int a1);  // 0x7640B0
    int resetSWCharge(int a1, void* a2);  // 0x764110
    void processSpecialAbility();  // 0x764220
    int checkSpecialCooldown(void* a1);  // 0x764260
    int updateSpecialTimer(int a1);  // 0x7642B0
    int AllocateCoordArray(int a1, void* a2);  // 0x7642E0
    int processSpecialEffect(void* a1);  // 0x764420
    int finalizeDestruction();  // 0x7C35C0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int queueMission(int a1);  // 0x4e01c0 -- AbstractClass::queueMission
    void* getWeaponRange(int a1);  // 0x5b3a60 -- AbstractClass::getWeaponRange
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int initVtableBase();  // 0x410100
    int GetVtable3(int a1);  // 0x410220
    int GenerateUniqueID(int a1);  // 0x410230
    int SaveLoad_Prefix(int a1, int a2, int a3);  // 0x410320
    int SaveLoad_Prefix_0(int a1, int a2);  // 0x410380
    int GetField9();  // 0x417fd0
    int compareType(int a1);  // 0x487e50
    int saveToStream(int a1, int a2, int a3);  // 0x510a20
    int loadFromStream(int a1);  // 0x510a30
    int computeSize(int a1);  // 0x510a40
    int COMStub_6(int a1, int a2, int a3);  // 0x5439f0
    int getPathDirection(int a1, int a2, int a3);  // 0x5c03d0
    void* processRevealArea(int a1, int a2, int a3, int a4, int a5, int a6);  // 0x5d81f0
    void* computeRevealRadius(int a1, int a2, int a3, int a4, int a5, int a6);  // 0x5d8230
    void* applyRevealToCell(int a1, int a2, int a3, int a4, int a5, int a6);  // 0x5d8270
    void* checkRevealCell(int a1, int a2, int a3, int a4, int a5, int a6);  // 0x5d82b0
    int SaveLoad_PrefixWrapper(int a1, int a2, int a3);  // 0x5f9950
    int updateTargetTracking(int a1);  // 0x6ce1f0
    void ClearTargetToMeClearManagerTarget(int a1);  // 0x70d4a0
    void AnnounceExpiredPointer(int a1, int a2);  // 0x7258d0
    void* RemoveObjectFromHouse(int a1, int a2, int a3, int a4, int a5);  // 0x4fb9b0
    // === FUNCS-MOVE (END) ===
};

} // namespace game
} // namespace ra2
