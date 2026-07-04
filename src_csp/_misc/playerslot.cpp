#include "playerslot.hpp"

// 0x00510FB0
int  PlayerSlot::NameToDialogID(const char *this)
{
    if ( !strcmp(this, g_Str__Player___A_) )
    return 4475;
    if ( !strcmp(this, g_Str__Player___B_) )
    return 4476;
    if ( !strcmp(this, g_Str__Player___C_) )
    return 4477;
    if ( !strcmp(this, g_Str__Player___D_) )
    return 4478;
    if ( !strcmp(this, g_Str__Player___E_) )
    return 4479;
    if ( !strcmp(this, g_Str__Player___F_) )
    return 4480;
    if ( !strcmp(this, g_Str__Player___G_) )
    return 4481;
    if ( !strcmp(this, g_Str__Player___H_) )
    return 4482;
    return -1;
}

