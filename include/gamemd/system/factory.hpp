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
class TechnoClass;
class TechnoTypeClass;

class FactoryClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Factory;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override; // 0x4CA270 (LoadFromStream)
    virtual HRESULT __stdcall Load(IStream* stream) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual ~FactoryClass() = default;                                                   // 0x4CA230 (ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x4CA750 (StubReturn12)
    virtual int objectSize() const override; // 0x4CA760 (StubReturn116)
    virtual void calculateChecksum(void* checksum) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // production lifecycle
    bool HasProgressChanged();                                                           // 0x4C9C60
    bool DemandProduction(const TechnoTypeClass* type, HouseClass* owner, bool should_queue); // 0x4C9C70
    void SetObject(TechnoClass* object);                                                 // 0x4C9E10
    bool Suspend(bool manual);  // 0x5D2530
    bool Unsuspend(bool manual); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    int GetBuildTimeFrames() const;                                                      // 0x4C9FB0
    bool AbandonProduction();                                                            // 0x4CA580 (Revert)
    int GetProgress() const;                                                            // 0x4CA430 (Stat)
    bool IsDone() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    int GetCostPerStep() const; // IDA: NOT_FOUND
    bool CompletedProduction();                                                          // 0x635060 (FinishProduction)
    void StartProduction();                                                             // 0x4C9E60
    void StartProduction_2();                                                            // 0x4CA5A0
    void UpdateProduction();                                                            // 0x4C9B20
    void FinishProduction();  // 0x635060

    // queue management
    bool RemoveOneFromQueue(const TechnoTypeClass* item);                                // 0x4CA620
    int CountTotal(const TechnoTypeClass* type) const;                                   // 0x4CA670 (CountType)
    bool IsQueued(const TechnoTypeClass* type) const;                                    // 0x4CA6B0

    // static helpers
    static FactoryClass* FindByOwnerAndProduct(const HouseClass* house, const TechnoTypeClass* item); // IDA: UNMATCHED — no_callgraph_match, no_git_history

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
};

} // namespace gamemd
