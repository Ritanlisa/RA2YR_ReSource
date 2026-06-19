#pragma once

#include "object/abstract.hpp"
#include "core/vector.hpp"
#include "waypoint.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif

struct WaypointClass; // forward - defined in waypoint.hpp

// sizeof ~0x44 (ctor 0x763810, ddtor 0x763C30)
class WaypointPathClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Waypoint;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~WaypointPathClass() = default;  // 0x763C30

    virtual void pointerExpired(AbstractClass* ptr, bool removed) override {}
    virtual AbstractType __stdcall whatAmI() const override { return kObjectDeriveId; }
    virtual int objectSize() const override { return 0; }
    virtual void calculateChecksum(void* checksum) const {}

    // Construction
    WaypointPathClass() noexcept;                            // 0x763810 (Construct)
    void ddtor();

    // Methods
    void Init();                                             // 0x763730
    void Construct();
    void PowerDrainUpdate();                                 // 0x763C00
    void LoadState(IStream*);                                // 0x763C70
    void SaveState(IStream*);                                // 0x763D90
    void ProcessEvent();                                     // 0x763E20
    void computePath();                                      // 0x764760
    int StubReturn51() const { return 51; }                   // IDA: 0x763E10
    int StubReturn64() const { return 64; }                   // IDA: 0x763E00

    int32_t     idxArray;           // +0x24 (this+36)
    DynamicVectorClass<WaypointClass> waypoints; // +0x28 (this+40)
    int32_t     waypointCount;      // +0x38 (this+56)
    int32_t     waypointCapacity;   // +0x3C (this+60)
    uint8_t     WaypointClass_field_34;           // +0x34 (this+52)
    uint8_t     WaypointClass_field_35;           // +0x35 (this+53)
    uint8_t     pad_36[2];          // +0x36..+0x37
};
} // namespace gamemd
