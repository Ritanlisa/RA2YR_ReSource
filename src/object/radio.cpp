#include "object/radio.hpp"
#include "object/techno.hpp"

namespace ra2 {
namespace game {

RadioClass::RadioClass() noexcept
    : lastCommands{0, 0, 0}
    , radioLinks{}
{
}

RadioCommand RadioClass::sendToFirstLink(RadioCommand command)
{
    if (hasAnyLink())
    {
        AbstractClass* dummy = nullptr;
        return getNthLink(0)->ReceiveCommand(static_cast<TechnoClass*>(this), command, dummy);
    }
    return static_cast<RadioCommand>(0);
}

RadioCommand RadioClass::sendCommand(RadioCommand command, TechnoClass* recipient)
{
    if (recipient)
    {
        AbstractClass* dummy = nullptr;
        return recipient->ReceiveCommand(static_cast<TechnoClass*>(this), command, dummy);
    }
    return static_cast<RadioCommand>(0);
}

RadioCommand RadioClass::sendCommandWithData(RadioCommand command, AbstractClass*& inout, TechnoClass* recipient)
{
    if (recipient)
        return recipient->ReceiveCommand(static_cast<TechnoClass*>(this), command, inout);
    return static_cast<RadioCommand>(0);
}

void RadioClass::sendToEachLink(RadioCommand command)
{
    for (int i = 0; i < radioLinks.Count; ++i)
    {
        AbstractClass* dummy = nullptr;
        getNthLink(i)->ReceiveCommand(static_cast<TechnoClass*>(this), command, dummy);
    }
}

} // namespace game
} // namespace ra2
