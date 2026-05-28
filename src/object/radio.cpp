#include "gamemd/object/radio.hpp"
#include "gamemd/object/techno.hpp"

namespace ra2 {
namespace game {

RadioClass::RadioClass() noexcept
    : m_last_commands{0, 0, 0}
    , m_radio_links{}
{
}

RadioCommand RadioClass::SendToFirstLink(RadioCommand command)
{
    if (HasAnyLink())
    {
        AbstractClass* dummy = nullptr;
        return GetNthLink(0)->ReceiveCommand(static_cast<TechnoClass*>(this), command, dummy);
    }
    return static_cast<RadioCommand>(0);
}

RadioCommand RadioClass::SendCommand(RadioCommand command, TechnoClass* recipient)
{
    if (recipient)
    {
        AbstractClass* dummy = nullptr;
        return recipient->ReceiveCommand(static_cast<TechnoClass*>(this), command, dummy);
    }
    return static_cast<RadioCommand>(0);
}

RadioCommand RadioClass::SendCommandWithData(RadioCommand command, AbstractClass*& inout, TechnoClass* recipient)
{
    if (recipient)
        return recipient->ReceiveCommand(static_cast<TechnoClass*>(this), command, inout);
    return static_cast<RadioCommand>(0);
}

void RadioClass::SendToEachLink(RadioCommand command)
{
    for (int i = 0; i < m_radio_links.Count; ++i)
    {
        AbstractClass* dummy = nullptr;
        GetNthLink(i)->ReceiveCommand(static_cast<TechnoClass*>(this), command, dummy);
    }
}

} // namespace game
} // namespace ra2
