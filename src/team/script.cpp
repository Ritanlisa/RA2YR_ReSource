#include "gamemd/team/script.hpp"

#include <cstring>

namespace gamemd
{

// --- ScriptClass ---

ScriptActionNode* ScriptClass::GetCurrentAction(ScriptActionNode* buffer) const
{
    // TODO: return the current action based on m_idx_current_line
    if (buffer)
    {
        *buffer = {};
    }
    return buffer;
}

ScriptActionNode* ScriptClass::GetNextAction(ScriptActionNode* buffer) const
{
    // TODO: return the next action after current line
    if (buffer)
    {
        *buffer = {};
    }
    return buffer;
}

bool ScriptClass::HasNextAction() const
{
    // TODO: check if there is an action after current line
    return m_type && (m_idx_current_line + 1) < m_type->m_actions_count;
}

// --- ScriptTypeClass ---

bool ScriptTypeClass::LoadFromINIList(CCINIClass* ini, bool is_global)
{
    // TODO: read all ScriptTypes from INI
    (void)ini;
    (void)is_global;
    return false;
}

} // namespace gamemd
