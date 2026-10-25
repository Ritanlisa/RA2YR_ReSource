#pragma once

#include <cstdint>

#include "core/math.hpp"
#include "core/enums.hpp"
#include "fundamentals.hpp"
#include "object/object.hpp"

namespace gamemd
{

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif

// CSP: FoggedObjectClass matched via T1
class FoggedObjectClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::FoggedObject;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;  // 0x4D27D0

    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x4D2510
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x4D24A0

    virtual ~FoggedObjectClass() override;  // 0x4D2910

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const ;  // 0x4D27C0

    int32_t      LastSight;
    HouseClass*  House;
    CellStruct   Cell;

protected:
    FoggedObjectClass() noexcept;
    // design: no binary equivalent found in IDA
    explicit FoggedObjectClass(noinit_t) noexcept;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int InitBuildingFog(int a1, int a2, int a3);  // 0x4d0980 -- FoggedObjectClass::InitBuildingFog
    int InitTerrainFog(int a1, int a2, int a3);  // 0x4d0c40 -- FoggedObjectClass::InitTerrainFog
    int InitDrawRecord(int a1);  // 0x4d1370 -- FoggedObjectClass::InitDrawRecord
    int PowerDrainUpdate(int a1);  // 0x4d2810 -- FoggedObjectClass::PowerDrainUpdate
    void* CheckVisibility(int a1);  // 0x4d28d0 -- FoggedObjectClass::CheckVisibility
    int AddRef(int a1);  // 0x4d29b0 -- FoggedObjectClass::AddRef
    int ResizeArray(int a1, int a2);  // 0x4d2bc0 -- FoggedObjectClass::ResizeArray
    int Read(int a1);  // 0x4d2cd0 -- FoggedObjectClass::Read
    void* QueryInterface(int a1);  // 0x4d2d60 -- FoggedObjectClass::QueryInterface
    void* DrawVector_Constructor(int a1, int a2);  // 0x4d2db0 -- FoggedObject::DrawVector_Constructor
    // === SYMBOL-ANCHOR (END) ===


    void * ptr_0;  // 0x0 [X55 W3 supply (render vocab)]
    void * ptr_4;  // 0x4 [X55 W3 supply (render vocab)]
    void * ptr_8;  // 0x8 [X55 W3 supply (render vocab)]
    void * ptr_C;  // 0xC [X55 W3 supply (render vocab)]
};

} // namespace gamemd
