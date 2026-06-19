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
    static constexpr AbstractType kObjectDeriveId = AbstractType::Script;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~ScriptClass() = default;

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    ScriptActionNode* GetCurrentAction(ScriptActionNode* buffer) const;
    ScriptActionNode* GetNextAction(ScriptActionNode* buffer) const;  // 0x691540

    bool Reset();
    bool SetCurrentLine(int idx);
    bool NextAction();
    bool HasNextAction() const;

    ScriptTypeClass*    buildingType;
    int32_t             field28;
    int32_t             idxCurrentLine;

protected:
    ScriptClass() = default;
};

// --- ScriptTypeClass ---

class CCINIClass;

class ScriptTypeClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::ScriptType;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~ScriptTypeClass() = default;

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    static bool LoadFromINIList(CCINIClass* ini, bool is_global);

    int32_t             arrayIndex;
    bool                isGlobal;
    int32_t             actionsCount;
    ScriptActionNode    scriptActions[50];

protected:
    ScriptTypeClass() = default;
};

} // namespace gamemd

