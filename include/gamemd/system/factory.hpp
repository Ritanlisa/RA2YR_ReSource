#pragma once

#include "..\object\abstract.hpp"

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
    static constexpr AbstractType kAbsDeriveID = AbstractType::Factory;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~FactoryClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::Factory; }
    virtual int Size() const override { return 0; }

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

    uint32_t        m_production[3];
    TechnoTypeClass** m_queued_objects;
    int32_t         m_queued_count;
    int32_t         m_queued_capacity;
    TechnoClass*    m_object;
    bool            m_on_hold;
    bool            m_is_different;
    uint8_t         align_5E[2];
    int32_t         m_balance;
    int32_t         m_original_balance;
    int32_t         m_special_item;
    HouseClass*     m_owner;
    bool            m_is_suspended;
    bool            m_is_manual;
    uint8_t         align_72[2];

protected:
    FactoryClass() = default;
};

} // namespace gamemd

