#pragma once

#include <cstdint>

#include "core/math.hpp"
#include "core/enums.hpp"
#include "fundamentals.hpp"
#include "object/object.hpp"
#include "render/palette.hpp"

namespace gamemd
{

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif

struct PendingCellClass
{
    CellStruct  Cell;
    int32_t     Intensity;
    TintStruct  TintMovement;
};

class LightSourceClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::LightSource;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* stream) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~LightSourceClass() override = default;  // 0x555080

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to LightSourceClass::ddtor at 0x555080
    virtual int objectSize() const override;

    // wrapper: delegates to LightSourceClass::ddtor at 0x555080
    void Activate(uint32_t zero = 0);
    // design: no binary equivalent found in IDA
    void Deactivate(uint32_t zero = 0);
    // unmatched: no callgraph reference and no git history record
    void ChangeLevels(int intensity, const TintStruct& tint, int8_t mode);

    int32_t        LightIntensity;
    TintStruct     LightTint;
    int32_t        DetailLevel;
    CoordStruct    Location;
    int32_t        LightVisibility;
    bool           Activated;

protected:
    LightSourceClass() = default;
    LightSourceClass(const CoordStruct& location, int intensity, int visibility,
                     const TintStruct& tint, int detail_level) noexcept;
    // design: no binary equivalent found in IDA
    explicit LightSourceClass(noinit_t) noexcept;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Stat(int a1);  // 0x555070 -- LightSourceClass::Stat
    void* CopyTo(int a1);  // 0x555150 -- LightSourceClass::CopyTo
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int Write(int a1, int a2);  // 0x5550c0
    int Seek(int a1, int a2, int a3);  // 0x555110
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
