#include "selectteamcommand.hpp"

char * SelectTeamCommand::_vt01(uint32_t *this)
{
    sprintf(byte_A8F5B4, "TeamSelect_%d", *(this + 1));
    return byte_A8F5B4;
}

int  SelectTeamCommand::_vt08(char **this, int a2)
{
    return TacticalClass::SetObserverView(*(this + 1));
}

