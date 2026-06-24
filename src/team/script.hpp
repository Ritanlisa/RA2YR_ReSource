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

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x691630
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x691690

    virtual ~ScriptClass() = default;  // 0x6915F0

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to ScriptClass::ddtor at 0x6915F0
    virtual int objectSize() const override;

    // unmatched: no callgraph reference and no git history record
    ScriptActionNode* GetCurrentAction(ScriptActionNode* buffer) const;
    ScriptActionNode* GetNextAction(ScriptActionNode* buffer) const;  // 0x691540

    // wrapper: delegates to ScriptClass::GetNextAction at 0x691540
    bool Reset();
    // unmatched: no callgraph reference and no git history record
    bool SetCurrentLine(int idx);
    bool NextAction();  // 0x691540
    // wrapper: delegates to ScriptClass::GetNextAction at 0x691540
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

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x691DE0

    virtual ~ScriptTypeClass() = default;  // 0x691FA0

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
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

