#include "centerteamcommand.hpp"

char * CenterTeamCommand::_vt01(uint32_t *this)
{
    sprintf(byte_A8F5B4, "TeamCenter_%d", *(this + 1));
    return byte_A8F5B4;
}

int  CenterTeamCommand::_vt08(char **this, int a2)
{
    return TacticalClass::ResetView(*(this + 1));
}

