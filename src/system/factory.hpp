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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~FactoryClass() = default;

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::Factory; }
    virtual int objectSize() const override { return 0; }

    bool HasProgressChanged();
    bool DemandProduction(const TechnoTypeClass* type, HouseClass* owner, bool should_queue);
    void SetObject(TechnoClass* object);
    bool Suspend(bool manual);
    bool Unsuspend(bool manual);
    int GetBuildTimeFrames() const;
    bool AbandonProduction();
    int GetProgress() const;
    bool IsDone() const;
    int GetCostPerStep() const;
    bool CompletedProduction();
    void StartProduction();
    bool RemoveOneFromQueue(const TechnoTypeClass* item);
    int CountTotal(const TechnoTypeClass* type) const;
    bool IsQueued(const TechnoTypeClass* type) const;

    static FactoryClass* FindByOwnerAndProduct(const HouseClass* house, const TechnoTypeClass* item);

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

