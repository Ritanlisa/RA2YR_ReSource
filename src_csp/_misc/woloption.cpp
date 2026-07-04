#include "woloption.hpp"

unsigned __int8  WOLOption::SetValue(int this, const char **a2)
{
    unsigned __int8 result; // al
    result = String::Compare(a2, (const char **)(this + 12));
    if ( !result )
    result = (unsigned __int8)String::Reassign((char **)(this + 12), a2);
    *(uint8_t *)(this + 8) = 1;
    return result;
}

