#pragma once

#include "object/abstract.hpp"

#include <cstdint>

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_TimerStruct
#define GAMEMD_USING_TimerStruct
using ra2::game::TimerStruct;
#endif
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif







class TeamTypeClass;
class ScriptClass;
class HouseClass;
class FootClass;
class TechnoTypeClass;
class TagClass;
class CellClass;

class TeamClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Team;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~TeamClass() = default;

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::Team; }
    virtual int objectSize() const override { return 0; }

    void GetTaskForceMissingMemberTypes(TechnoTypeClass** dest, int& dest_count) const;
    void LiberateMember(FootClass* foot, int idx = -1, uint8_t count = 0);

    TeamTypeClass*  buildingType;
    ScriptClass*    currentScript;
    HouseClass*     owner;
    HouseClass*     target;
    CellClass*      spawnCell;
    uint32_t        unknown38;
    AbstractClass*  queuedFocus;
    AbstractClass*  focus;
    int32_t         unknown44;
    int32_t         totalObjects;
    int32_t         totalThreatValue;
    int32_t         creationFrame;
    FootClass*      firstUnit;
    TimerStruct     guardAreaTimer;
    TimerStruct     suspendTimer;
    TagClass*       tag;
    bool            unknown74;
    bool            unknown75;
    bool            unknown76;
    bool            unknown77;
    bool            spawnStatus;
    bool            unknown79;
    bool            m_unknown_7A;
    bool            m_unknown_7B;
    bool            visibilityFlags;
    bool            needsToDisappear;
    bool            m_unknown_7E;
    bool            m_unknown_7F;
    bool            stepCompleted;
    bool            unknown81;
    bool            unknown82;
    bool            isSuspended;
    bool            achievedGreatSuccess;
    bool            unknown85;
    bool            unknown86;
    bool            unknown87;
    int32_t         countObjects[6];

protected:
    TeamClass() = default;
};

} // namespace gamemd

