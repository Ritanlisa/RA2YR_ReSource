#include "gameoption.hpp"

int  GameOption::GetField(uint32_t **this)
{
    return **(this + 99);
}

// 0x0069AD80
char * GameOption::SetDigest(char *this, char *Source)
{
    char *result; // eax
    if ( Source )
    result = strncpy(this + 348, Source, 0x20u);
    *(this + 379) = 0;
    else
    result = (char *)(strlen(g_Str_No_Digest) + 1);
    qmemcpy(this + 348, g_Str_No_Digest, (unsigned int)result);
    return result;
}

