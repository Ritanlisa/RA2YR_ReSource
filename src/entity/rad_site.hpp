#pragma once

#include <cstdint>

#include "core/enums.hpp"
#include "object/abstract.hpp"
#include "render/light_source.hpp"
#include "render/palette.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif
#ifndef GAMEMD_USING_TimerStruct
#define GAMEMD_USING_TimerStruct
using ra2::game::TimerStruct;
#endif

// IDA: RadSiteClass (4 vtables @ 0x7F07E4+, sizeof ~0xBA)
// Inherits AbstractClass (0x24 base) + members
class RadSiteClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::RadSite;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* stream) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~RadSiteClass() override = default;  // 0x65B470

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to RadSiteClass::ddtor at 0x65B470
    virtual int objectSize() const override;

    void SetBaseCell(CellStruct* cell);  // 0x65B4C0
    int GetSpread() const;  // 0x65B4B0
    void SetSpread(int cells);  // 0x65B4D0
    void SetRadLevel(int level);  // 0x65B4F0
    // 0x65B510 GetRadLevel
    int GetRadLevel() const;
    void Add(int radLevel);  // 0x65B530
    // 0x65B580 Activate
    void Activate();
    int GetRadLevelAt(CellStruct* cell);  // 0x65B8F0
    void Radiate();  // 0x65B9C0
    void Deactivate();  // 0x65BB50
    void DecreaseRadiation();  // 0x65BD00
    void DecreaseLight();  // 0x65BE90

    // IDA ctor 0x65B1E0 member layout
    LightSourceClass*  LightSource;        // +0x24 (this+9)
    TimerStruct        RadLevelTimer;       // +0x28 (this+10, 12 bytes)
    TimerStruct        RadLightTimer;       // +0x34 (this+13, 12 bytes)
    CellStruct         BaseCell;            // +0x40 (WORD+32)
    int32_t            Spread;              // +0x44 (this+17)
    int32_t            SpreadInLeptons;     // +0x48 (this+18)
    int32_t            RadLevel;            // +0x4C (this+19)
    int32_t            LevelSteps;          // +0x50 (this+20)
    int32_t            Intensity;           // +0x54 (this+21)
    int32_t            IntensitySteps;      // +0x58 (this+22)
    int32_t            IntensityDecrement;  // +0x5C (this+23)
    TintStruct         Tint;                // +0x60 (this+24)

protected:
    RadSiteClass() noexcept = default; // 0x65B1E0
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void Constructor();  // 0x65B2F0
    int PowerDrainUpdate(int a1);  // 0x65B3B0
    int Tick();  // 0x65B800
    void* ProcessEvent(int a1);  // 0x65BED0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int SaveLoad_Prefix(int a1, int a2);  // 0x65b3d0
    int SaveLoad_Prefix_0(int a1, int a2, int a3);  // 0x65b450
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
