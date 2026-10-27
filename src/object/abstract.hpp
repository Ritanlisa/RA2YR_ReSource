#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "core/guid.hpp"  // G42.55 closure (GUID)

// IDA: IID_IRTTITypeInfo @ 0x7E9AE0 = {170DAC82-12E4-11D2-8175-006008055BB5}
// {170DAC82-12E4-11D2-8175-006008055BB5}
static const GUID IID_IRTTITypeInfo = 
{ 0x170DAC82, 0x12E4, 0x11D2, { 0x81, 0x75, 0x00, 0x60, 0x08, 0x05, 0x5B, 0xB5 } };

// forward-declare for NeedsSaveOrLink field at +0x20 (also used as bool in IsDirty)
namespace gamemd { class UnitClass; }

// HouseClass namespace bridge: ra2::game::HouseClass == gamemd::HouseClass
// (single global alias; ra2::game code uses the unqualified name and resolves here)
namespace gamemd { class HouseClass; }
using ::gamemd::HouseClass;

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
    constexpr DirStruct() noexcept;
    // design: constexpr only (no runtime address), no callgraph/git history reference
    explicit constexpr DirStruct(uint32_t val) noexcept;
};

using FacingStruct = DirStruct;

class TechnoClass;
class ObjectClass;
class FootClass;
class Checksummer;

// CSP: IPersistStream matched via T1
class IPersistStream : public IUnknown {
public:
    int ComputeTransform(int a1, int a2, int a3, int a4, int a5);  // 0x6f3ad0 (G57W20M26 CSP 签名供给, 原 TechnoClass_ComputeTransform 词表)
    int SetAnim();  // 0x5f6060 (G57W20M26 CSP 签名供给, 原 ObjectClass_SetAnim 词表)
    int UpdateBuildState();  // 0x509700 (G57W20M26 CSP 签名供给, 原 HouseClass_UpdateBuildState 词表)
    int ScanBuildLocation(int a1, int a2, int a3, int a4);  // 0x5060b0 (G57W20M26 CSP 签名供给, 原 HouseClass_ScanBuildLocation 词表)
    int FindBestProductionBuilding(int a1, int a2);  // 0x506b90 (G57W20M26 CSP 签名供给, 原 HouseClass_FindBestProductionBuilding 词表)
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


    int __tail_0;  // 0x0 [X55 W3 supply (render vocab)]
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

    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
    unsigned int u32_D;  // X10 supply (member_lookup)
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
// ptr_0[0] @ 0x7E1F50 (IPersistStream + custom, 28 entries)
// ptr_0[1] @ 0x7E1F34 (IRTTITypeInfo chain, 32 entries)
// ptr_0[2] @ 0x7E1F2C (INoticeSink merged, 32 entries)
// ptr_0[3] @ 0x7E1F24 (INoticeSource merged, 31 entries)
// All 4 ptr_0 pointers are at +0x00/+0x04/+0x08/+0x0C (IDA ctor confirmed)
class AbstractClass : public IPersistStream, public IRTTITypeInfo,
                      public INoticeSink, public INoticeSource {
public:
    static constexpr AbstractType kObjectTypeId = static_cast<AbstractType>(52);

    // --- IPersistStream (ptr_0[0]) ---
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;  // 0x410260
    virtual ULONG   __stdcall AddRef() override;  // 0x410300
    virtual ULONG   __stdcall Release() override;  // X132: slot 2 impl = 0x410310 (COMStub_Release; 0x4E0360 = AbstractClassVector::Release)
    // wrapper: delegates to AbstractClassVector::Release at 0x4E0360
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;  // X132: slot 3 impl = 0x4C9150 (shared Return0)
    virtual HRESULT __stdcall IsDirty() override;  // X132: slot 4 impl = 0x410450 (IsClean); 0x7099D0 = generic IsDirty used by other tables
    // wrapper: delegates to IPersistStream::IsDirty at 0x7099D0
    virtual HRESULT __stdcall Load(IStream* stream) override;  // X132: slot 5 impl = 0x4C9150 (shared Return0)
    // wrapper: delegates to IPersistStream::IsDirty at 0x7099D0
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // X132: slot 6 impl = 0x4C9150 (shared Return0)
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) override;  // X132: slot 7 impl = 0x4103E0

    // --- IRTTITypeInfo (ptr_0[1]) ---
    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;  // X132: sec slot 3 = 0x410210
    // unmatched: no callgraph reference and no git history record
    virtual int __stdcall fetchId() const override;  // X132: sec slot 4 = 0x410220
    virtual void __stdcall createId() override;   // X132: sec slot 5 = 0x410230 (0x486920 was phantom)

    // --- INoticeSink (ptr_0[2]) ---
    // unmatched: no callgraph reference and no git history record
    virtual bool __stdcall onNotice(unsigned long event) override;  // X132: sink slot 0 = 0x410580

    // --- INoticeSource (ptr_0[3]) ---
    // unmatched: no callgraph reference and no git history record
    virtual void __stdcall notifySinks() override;  // X132: source slot 0 = 0x410590

    // --- X132: AbstractClass own virtuals (binary table 0x7E1F50, slots 8-23; raw-verified) ---
    virtual ~AbstractClass() = default;  // X132: slot 8 = 0x4105A0 (scalar deleting dtor: installs 4 vtables, test al,1 -> delete)

    virtual int PerFrameUpdate();  // X132: slot 9 = 0x410470 (`retn`; slot-9 family name per Unit 0x746810 / Infantry 0x517CC0 binary slots; those two decls override correctly)
    virtual int Unlink(int a1, int a2);  // X133: slot 10 = 0x410480 base (retn 8); OC override 0x5F5230 = Unlink
    virtual int COMStub_Return0_11();  // X132: slot 11 impl = 0x4C9150 (shared Return0, ICF-folded)
    virtual int COMStub_Return0_12();  // X132: slot 12 impl = 0x4C9150 (shared Return0, ICF-folded)
    virtual int ProcessPower();  // X133: slot 13 = 0x410410; binary arity=1 (retn 4) but 0-arg kept per X132 model -- deferred I525
    virtual int computeDistanceSquared();  // X132: slot 14 = 0x410490 (`or eax,-1`)
    virtual int COMStub_Return0_15();  // X132: slot 15 = 0x4104A0 (`xor eax,eax`)
    virtual int COMStub_Return0_16();  // X132: slot 16 = 0x4104B0 (`xor eax,eax`)
    virtual bool IsActive() const;  // X133: slot 17 = 0x410440 base (mov al,1); OC override 0x5F6690
    virtual unsigned int *GetInvalidCoord(unsigned int* out);  // X132: slot 18 = 0x4104C0 (copies 0x887680/84/88)
    virtual int* GetCoordsEx(int* outBuffer, AbstractClass* source);  // X132: slot 19 = 0x4104F0 (calls vt slot 18)
    virtual bool IsBelowScreen();  // X133: slot 20 = 0x410520 base (xor al,al); OC override 0x5F6B60
    virtual bool IsHeightAboveThreshold();  // X133: slot 21 = 0x410530 base (xor al,al); OC override 0x5F6B90
    virtual CoordStruct* GetCoords(CoordStruct* out);  // X132: slot 22 = 0x410540 (calls vt slot 19)
    virtual int DetectCloaked();  // X133: slot 23 = 0x410570 base (ret); OC override 0x5F3E70

    // --- X132: demoted phantoms (14; no binary slot anywhere in the chain; non-virtual) ---
    void initialize();  // 0x438E70
    void pointerExpired(AbstractClass* ptr, bool removed);
    int objectSize() const;
    void calculateChecksum(Checksummer& checksum) const;
    int owningHouseIndex() const;
    HouseClass* owningHouse() const;
    int arrayIndex() const;
    bool isDead() const;
    CoordStruct* fetchCoordinatesHere(CoordStruct* out);
    CoordStruct* fetchDestination(CoordStruct* out, TechnoClass* docker = nullptr) const;
    bool isOnGround() const;
    bool isAirborne() const;
    CoordStruct* fetchAlternateCoordinates(CoordStruct* out) const;
    void updateLogic();

    // unmatched: no callgraph reference and no git history record
    CoordStruct fetchCoordinatesHere();
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
    gamemd::UnitClass* NeedsSaveOrLink;     // +0x20, init = nullptr (used as bool in IsDirty, as UnitClass* in updateHarvesting)

protected:
    AbstractClass() noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* IsTechno();  // 0x40DD20
    void* IsTechnoType();  // 0x40DD70
    static void* IsTechnoType(AbstractClass* a2);  // (G42.33 b4 W7c: 静态形 supplied 调用同步)
    void* Constructor();  // 0x410170
    void* InitVtables(int a1);  // 0x4101C0
    int COMStub_AddRef();  // 0x410300
    int COMStub_Release(int a1);  // 0x410310 (IDA: int __stdcall(int), 76 xref)
    // X132: GetInvalidCoord moved to own virtual slot 18 (0x4104C0)
    // X132: ProcessPower moved to own virtual slot 13 (0x410410)
    int IsClean();  // 0x410450
    // X132: GetCoordsEx moved to own virtual slot 19 (0x4104F0)
    int COMStub_8();  // 0x4105A0
    void* processCleanup(int a1);  // 0x41C490
    void* Create();  // 0x41D300
    int processDetection(int a2);  // 0x439150
    int Construct(unsigned int *a2);  // 0x43A7E0
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
    int GetVtable3(void *a1);  // 0x410220 (bin: __stdcall(obj-ptr) -> vfptr3)
    int GenerateUniqueID(void *a1);  // 0x410230 (bin: __stdcall(obj-ptr) writes [ecx+0Ch])
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
    void AnnounceExpiredPointer(void *a1, int a2);  // 0x7258d0 (bin: __fastcall(this,int))
    void* RemoveObjectFromHouse(int a1, int a2, int a3, int a4, int a5);  // 0x4fb9b0
    // === FUNCS-MOVE (END) ===
    void* ptr_0;  // 0x0 (ml truth)  gB ptr_0 supply
    void* ptr_4;  // 0x4 (ml truth)  gB ptr_0 supply
    void* ptr_8;  // 0x8 (ml truth)  gB ptr_0 supply
    int GetType();  // gB sig supply @cache

    unsigned char AbstractClass_10C[4];  /* AbstractClass */  // X10 supply (member_lookup)
    bool IsAllocated;  // X10 supply (csp_canon_members)
    unsigned int q011;  // X10 supply (member_lookup)
    bool q035;  // X10 supply (member_lookup)
    unsigned char q080;  // X10 supply (member_lookup)
    unsigned int q081;  // X10 supply (member_lookup)
    unsigned int q104;  // X10 supply (member_lookup)
    IUnknown* q108;  // X10 supply (member_lookup)
    unsigned int q111;  // X10 supply (member_lookup)
    unsigned int q199;  // X10 supply (member_lookup)
    unsigned char q210;  // X10 supply (member_lookup)
    void* q214;  // X10 supply (member_lookup)
    int q514;  // X10 supply (member_lookup)
    unsigned int u32_16B7;  // X10 supply (member_lookup)
    unsigned int u32_16F8;  // X10 supply (member_lookup)
    unsigned int u32_1760;  // X10 supply (member_lookup)
    unsigned int u32_1761;  // X10 supply (member_lookup)
    unsigned int u32_176A;  // X10 supply (member_lookup)
    unsigned int u32_190;  // X10 supply (member_lookup)
    unsigned int u32_1AC;  // X10 supply (member_lookup)
    unsigned int u32_1B0;  // X10 supply (member_lookup)
    unsigned int u32_200;  // X10 supply (member_lookup)
    int u32_2D;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_504;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_550;  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)
    unsigned int u32_A8;  // X10 supply (member_lookup)
    unsigned int u32_AC;  // X10 supply (member_lookup)
    unsigned int u32_D;  // X10 supply (member_lookup)
    unsigned int u32_DFC;  // X10 supply (member_lookup)
    unsigned int u32_E00;  // X10 supply (member_lookup)
    unsigned int u32_E04;  // X10 supply (member_lookup)
    unsigned int u32_F04;  // X10 supply (member_lookup)
    unsigned int u32_F08;  // X10 supply (member_lookup)
    unsigned int u32_F0C;  // X10 supply (member_lookup)
    void* ptr_C;  // X10 supply (csp_canon_members)
};

} // namespace game
} // namespace ra2
