#pragma once

#include "..\object\abstract.hpp"

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







struct TeamTypeClass;
struct ScriptClass;
struct HouseClass;
struct FootClass;
struct TechnoTypeClass;
struct TagClass;
struct CellClass;

class TeamClass : public AbstractClass
{
public:
    static constexpr AbstractType kAbsDeriveID = AbstractType::Team;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~TeamClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::Team; }
    virtual int Size() const override { return 0; }

    void GetTaskForceMissingMemberTypes(TechnoTypeClass** dest, int& dest_count) const;
    void LiberateMember(FootClass* foot, int idx = -1, uint8_t count = 0);

    TeamTypeClass*  m_type;
    ScriptClass*    m_current_script;
    HouseClass*     m_owner;
    HouseClass*     m_target;
    CellClass*      m_spawn_cell;
    uint32_t        m_unknown_38;
    AbstractClass*  m_queued_focus;
    AbstractClass*  m_focus;
    int32_t         m_unknown_44;
    int32_t         m_total_objects;
    int32_t         m_total_threat_value;
    int32_t         m_creation_frame;
    FootClass*      m_first_unit;
    TimerStruct     m_guard_area_timer;
    TimerStruct     m_suspend_timer;
    TagClass*       m_tag;
    bool            m_unknown_74;
    bool            m_unknown_75;
    bool            m_unknown_76;
    bool            m_unknown_77;
    bool            m_unknown_78;
    bool            m_unknown_79;
    bool            m_unknown_7A;
    bool            m_unknown_7B;
    bool            m_unknown_7C;
    bool            m_needs_to_disappear;
    bool            m_unknown_7E;
    bool            m_unknown_7F;
    bool            m_step_completed;
    bool            m_unknown_81;
    bool            m_unknown_82;
    bool            m_is_suspended;
    bool            m_achieved_great_success;
    bool            m_unknown_85;
    bool            m_unknown_86;
    bool            m_unknown_87;
    int32_t         m_count_objects[6];

protected:
    TeamClass() = default;
};

} // namespace gamemd

