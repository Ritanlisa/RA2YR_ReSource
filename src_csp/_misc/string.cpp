#include "string.hpp"

// 0x004F4C70
char * String::Copy(char *this, const char *a2)
{
    strcpy(this, a2);
    return this;
}

int  String::To_Waypoint(char *this)
{
    int v2; // esi
    v2 = -1;
    if ( isalpha(*this) && (v2 = toupper(*this) - 65, isalpha(*(this + 1))) )
    return toupper(*(this + 1)) + 26 * v2 - 39;
    else
    return v2;
}

