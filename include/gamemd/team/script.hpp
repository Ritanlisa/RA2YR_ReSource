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





class ScriptTypeClass;
struct ScriptActionNode;

struct ScriptActionNode
{
    int32_t Action;
    int32_t Argument;
};

class ScriptClass : public AbstractClass
{
public:
    static constexpr AbstractType kAbsDeriveID = AbstractType::Script;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~ScriptClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::Script; }
    virtual int Size() const override { return 0; }

    ScriptActionNode* GetCurrentAction(ScriptActionNode* buffer) const;
    ScriptActionNode* GetNextAction(ScriptActionNode* buffer) const;

    bool Reset() { m_idx_current_line = -1; return true; }
    bool SetCurrentLine(int idx) { m_idx_current_line = idx; return true; }
    bool NextAction() { ++m_idx_current_line; return HasNextAction(); }
    bool HasNextAction() const;

    ScriptTypeClass*    m_type;
    int32_t             m_field_28;
    int32_t             m_idx_current_line;

protected:
    ScriptClass() = default;
};

// --- ScriptTypeClass ---

class CCINIClass;

class ScriptTypeClass : public AbstractClass
{
public:
    static constexpr AbstractType kAbsDeriveID = AbstractType::ScriptType;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~ScriptTypeClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::ScriptType; }
    virtual int Size() const override { return 0; }

    static bool LoadFromINIList(CCINIClass* ini, bool is_global);

    int32_t             m_array_index;
    bool                m_is_global;
    int32_t             m_actions_count;
    ScriptActionNode    m_script_actions[50];

protected:
    ScriptTypeClass() = default;
};

} // namespace gamemd

