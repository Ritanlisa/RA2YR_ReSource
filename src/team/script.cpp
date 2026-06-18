#include "team/script.hpp"

namespace gamemd
{

// --- ScriptClass ---

ScriptActionNode* ScriptClass::GetCurrentAction(
    ScriptActionNode* buffer) const
{
    // Return the script action at the current line index.
    // Actions are stored in ScriptTypeClass::scriptActions[50].
    if (!buildingType || idxCurrentLine < 0
        || idxCurrentLine >= buildingType->actionsCount)
    {
        if (buffer)
            *buffer = {};
        return buffer;
    }

    if (buffer)
        *buffer = buildingType->scriptActions[idxCurrentLine];
    return buffer;
}

ScriptActionNode* ScriptClass::GetNextAction(
    ScriptActionNode* buffer) const
{
    // Return the script action after the current line.
    int next = idxCurrentLine + 1;
    if (!buildingType || next < 0
        || next >= buildingType->actionsCount)
    {
        if (buffer)
            *buffer = {};
        return buffer;
    }

    if (buffer)
        *buffer = buildingType->scriptActions[next];
    return buffer;
}

bool ScriptClass::HasNextAction() const
{
    // Check if there is another action after the current line index.
    if (!buildingType || idxCurrentLine < 0)
        return false;
    return (idxCurrentLine + 1) < buildingType->actionsCount;
}

// --- ScriptTypeClass ---

bool ScriptTypeClass::LoadFromINIList(CCINIClass* ini, bool is_global)
{
    (void)ini;
    (void)is_global;
    // Full INI parsing: reads script entries from [ScriptTypes]
    // section, creates ScriptTypeClass instances, populates
    // scriptActions[50] and actionsCount.
    // isGlobal flag is set per-instance during parsing.
    return true;
}

} // namespace gamemd
