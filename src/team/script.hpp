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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x691630
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x691690

    virtual ~ScriptClass() = default;  // 0x6915F0

    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override; // IDA: NOT_FOUND

    ScriptActionNode* GetCurrentAction(ScriptActionNode* buffer) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    ScriptActionNode* GetNextAction(ScriptActionNode* buffer) const;  // 0x691540

    bool Reset(); // IDA: NOT_FOUND
    bool SetCurrentLine(int idx); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool NextAction();  // IDA: 0x691540
    bool HasNextAction() const; // IDA: NOT_FOUND

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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Load(IStream* stream) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x691DE0

    virtual ~ScriptTypeClass() = default;  // 0x691FA0

    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override;  // 0x691F80

    static bool LoadFromINIList(CCINIClass* ini, bool is_global);  // 0x46CE10

    int32_t             arrayIndex;
    bool                isGlobal;
    int32_t             actionsCount;
    ScriptActionNode    scriptActions[50];

protected:
    ScriptTypeClass() = default;
};

} // namespace gamemd

