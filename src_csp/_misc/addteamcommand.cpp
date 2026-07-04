#include "addteamcommand.hpp"

char * AddTeamCommand::_vt01(uint32_t *this)
{
    sprintf(byte_A8F5B4, "TeamAddSelect_%d", *(this + 1));
    return byte_A8F5B4;
}

int  AddTeamCommand::_vt08(char **this, int a2)
{
    return SquadClass::SelectAllMembers(*(this + 1));
}

