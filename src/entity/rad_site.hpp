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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;

    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~RadSiteClass() override = default;  // 0x65B470

    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override;

    // 0x65B4C0 SetBaseCell
    void SetBaseCell(CellStruct* cell);  // IDA: 0x65B4C0
    // 0x65B4B0 GetSpread
    int GetSpread() const;  // IDA: 0x65B4B0
    // 0x65B4D0 SetSpread
    void SetSpread(int cells);  // IDA: 0x65B4D0
    // 0x65B4F0 SetRadLevel
    void SetRadLevel(int level);  // IDA: 0x65B4F0
    // 0x65B510 GetRadLevel
    int GetRadLevel() const;  // IDA: 0x65B8F0
    // 0x65B530 Add
    void Add(int radLevel);  // IDA: 0x65B530
    // 0x65B580 Activate
    void Activate();  // IDA: 0x65BB50
     // IDA: 0x65B8F0 GetRadLevelAt
    int GetRadLevelAt(CellStruct* cell);  // IDA: 0x65B8F0
    // 0x65B9C0 Radiate
    void Radiate();  // IDA: 0x65B9C0
     // IDA: 0x65BB50 Deactivate
    void Deactivate();  // IDA: 0x65BB50
    // 0x65BD00 DecreaseRadiation
    void DecreaseRadiation();  // IDA: 0x65BD00
    // 0x65BE90 DecreaseLight
    void DecreaseLight();  // IDA: 0x65BE90

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
};

} // namespace gamemd
