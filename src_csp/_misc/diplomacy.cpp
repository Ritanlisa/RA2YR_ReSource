#include "diplomacy.hpp"

// 0x00656580
char * Diplomacy::GetField(char *this, int a2)
{
    return this + 24 * *(uint32_t *)(a2 + 3824) + 4728;
}

