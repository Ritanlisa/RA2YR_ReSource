#pragma once

#include "object/abstract.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif

class HouseClass;
} // namespace gamemd (bridge re-own, G42.29h)
namespace ra2 { namespace game { class TechnoClass; } }
namespace gamemd {
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ::ra2::game::TechnoClass;
#endif
class TechnoTypeClass;

class FactoryClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Factory;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override; // 0x4CA270 (LoadFromStream)
    // wrapper: delegates to FactoryClass::LoadFromStream at 0x4CA270
    virtual HRESULT __stdcall Load(IStream* stream) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~FactoryClass();                                                   // 0x4CA230 (ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x4CA750 (StubReturn12)
    virtual int objectSize() const override; // 0x4CA760 (StubReturn116)
    // unmatched: no callgraph reference and no git history record
    virtual void calculateChecksum(void* checksum) const;

    // production lifecycle
    bool HasProgressChanged();                                                           // 0x4C9C60
    bool DemandProduction(const TechnoTypeClass* type, HouseClass* owner, bool should_queue); // 0x4C9C70
    void SetObject(TechnoClass* object);                                                 // 0x4C9E10
    bool Suspend(bool manual);
    // unmatched: no callgraph reference and no git history record
    bool Unsuspend(bool manual);
    int GetBuildTimeFrames() const;                                                      // 0x4C9FB0
    bool AbandonProduction();                                                           // 0x4C9FF0
    int GetProgress() const;
    // unmatched: no callgraph reference and no git history record
    bool IsDone() const;
    // wrapper: delegates to FactoryClass::Stat at 0x4CA430
    int GetCostPerStep() const;
    bool CompletedProduction();
    void StartProduction();                                                             // 0x4C9E60
    void StartProduction_2();                                                            // 0x4CA5A0
    void UpdateProduction();                                                            // 0x4C9B20
    void FinishProduction();  // 0x635060

    // queue management
    bool RemoveOneFromQueue(const TechnoTypeClass* item);                                // 0x4CA620
    int CountTotal(const TechnoTypeClass* type) const;
    bool IsQueued(const TechnoTypeClass* type) const;                                    // 0x4CA6B0

    // static helpers
    // unmatched: no callgraph reference and no git history record
    static FactoryClass* FindByOwnerAndProduct(const HouseClass* house, const TechnoTypeClass* item);

    // save/load
    void LoadFromStream(IStream* stream);  // 0x4CA270
    void Stat(IStream* stream);  // 0x4CA430
    void Seek(IStream* stream);                                                          // 0x4CA3C0
    void Revert();  // 0x4CA580
    void CopyTo(void* dest);                                                            // 0x4CA770

    uint32_t        production[3];
    TechnoTypeClass** queuedObjects;
    int32_t         queuedCount;
    int32_t         queuedCapacity;
    TechnoClass*    object;
    bool            onHold;
    bool            isDifferent;
    uint8_t         m_align_5E[2];
    int32_t         balance;
    int32_t         originalBalance;
    int32_t         specialItem;
    HouseClass*     owner;
    bool            isSuspended;
    bool            isManual;
    uint8_t         align72[2];

protected:
    FactoryClass() = default;
    void* NeedsSaveOrLink8;  // 0x0 (no offset truth)
    unsigned char u32_288;  // 0x288
    unsigned int u8_5D;  // 0x5D
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void AccumulateCreditsProgress(int a1, int a2);  // 0x4F9700
    int ClearObjects();  // 0x635120
    void FindAvailable();  // 0x635F80
    int CompleteCurrentItem(int a1);  // 0x636590
    void* RemoveFromArrays(int a1);  // 0x63D9C0
    int RemoveItemAt(int a1);  // 0x63DFD0
    int RemoveItem(int a1);  // 0x63F000
    int LoadType();  // 0x6727D0
    int PlaceExitUnits();  // 0x6B04C0
    void* GetBridgeCell(void* a1);  // 0x6B0750
    void* ResetProductionTimers();  // 0x6B0C80
    int FindOrCreate();  // 0x6B5910
    void* CompleteItem();  // 0x71ABC0
    int CompleteProduction();  // 0x73D630
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int CountType(int a1);  // 0x4ca670 -- FactoryClass::CountType
    int FindExitCellByName();  // 0x523c90 -- Factory::FindExitCellByName
    int GetLinkedIndex(int a1);  // 0x663d60 -- Factory::GetLinkedIndex
    // === SYMBOL-ANCHOR (END) ===
    unsigned int q02C;  // 0x2C (canon-mt)
    void* q058;  // 0x58 (canon-mt)
    unsigned char u32_5D;  // 0x5D (canon-mt)

    bool IsAllocated;  // X10 supply (csp_canon_members)
    void * NeedsSaveOrLink;  // X10 supply (csp_canon_members)
    unsigned char Tactical_6E0[1];  /* Tactical */  // X10 supply (member_lookup)
    unsigned char Tactical_6E4[1];  /* Tactical */  // X10 supply (member_lookup)
    void* abstractFlags;  // X10 supply (csp_canon_members)
    int nextArrayIndex;  // X10 supply (csp_canon_members)
    BuildingTypeClass * ptr_314;  // X10 supply (member_lookup)
    unsigned int q090;  // X10 supply (member_lookup)
    AbstractClass* q614;  // X10 supply (member_lookup)
    AbstractClass* q6F0;  // X10 supply (member_lookup)
    unsigned int q7A0;  // X10 supply (member_lookup)
    unsigned int u32_11;  // X10 supply (member_lookup)
    unsigned int u32_114;  // X10 supply (member_types)
    unsigned int u32_2D;  // X10 supply (member_lookup)
    unsigned int u32_2E4;  // X10 supply (member_types)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_603;  // X10 supply (member_lookup)
    int u32_674;  // X10 supply (member_lookup)
    int u32_6C4;  // X10 supply (member_lookup)
    unsigned int u32_89;  // X10 supply (member_lookup)
    unsigned int u32_8B;  // X10 supply (member_lookup)
    unsigned int u32_8C;  // X10 supply (member_lookup)
    unsigned int u32_94;  // X10 supply (member_lookup)
    unsigned int u32_99;  // X10 supply (member_lookup)
    unsigned int u32_A8;  // X10 supply (member_lookup)
    unsigned int u32_B0;  // X10 supply (member_lookup)
    int u8_D;  // X10 supply (member_lookup)
    void* uniqueId;  // X10 supply (csp_canon_members)
    void* vtable2;  // X10 supply (csp_canon_members)
    void* vtable3;  // X10 supply (csp_canon_members)
    void* vtable4;  // X10 supply (csp_canon_members)

    void* q044;  // X10 supply (member_lookup)
    unsigned int q05C;  // X10 supply (member_lookup)
};

} // namespace gamemd
