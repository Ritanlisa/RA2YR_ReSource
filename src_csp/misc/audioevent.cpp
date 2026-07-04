#include "audioevent.hpp"

char  AudioEvent::LoadFromINI(int this, unsigned __int8 ***a2)
{
    double v3; // st7
    char Source[500]; // [esp+18h] [ebp-1F4h] BYREF
    INIClass::ResetSection(a2);
    *(uint32_t *)(this + 40) = 1065353216;
    if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)this) )
    return 0;
    v3 = *(float *)(this + 40);
    INIClass::ReadDouble_Overwrite(this, (int)g_INI_Key_Volume, v3);
    *(float *)(this + 40) = v3;
    INIClass::GetString(a2, (unsigned __int8 *)this, (unsigned __int8 *)g_INI_Key_Type, &g_INI_DefaultBuffer, Source, 500);
    if ( strlen(Source) )
    if ( _strcmpi(Source, aQueue) )
    if ( _strcmpi(Source, aStandard) )
    if ( _strcmpi(Source, aInterrupt) )
    if ( !_strcmpi(Source, aQueuedInterrup) )
    *(uint32_t *)(this + 76) = 3;
    else
    *(uint32_t *)(this + 76) = 2;
    else
    *(uint32_t *)(this + 76) = 0;
    else
    *(uint32_t *)(this + 76) = 1;
    INIClass::GetString(
    a2,
    (unsigned __int8 *)this,
    (unsigned __int8 *)g_INI_Key_Priority,
    &g_INI_DefaultBuffer,
    Source,
    500);
    if ( strlen(Source) )
    if ( _strcmpi(Source, aLow) )
    if ( _strcmpi(Source, g_INI_Key_NORMAL) )
    if ( _strcmpi(Source, aImportant) )
    if ( !_strcmpi(Source, aCritical) )
    *(uint32_t *)(this + 72) = 3;
    else
    *(uint32_t *)(this + 72) = 2;
    else
    *(uint32_t *)(this + 72) = 1;
    else
    *(uint32_t *)(this + 72) = 0;
    INIClass::GetString(a2, (unsigned __int8 *)this, (unsigned __int8 *)aYuri, &g_INI_DefaultBuffer, Source, 500);
    strncpy((char *)(this + 44), Source, 9u);
    *(uint8_t *)(this + 52) = 0;
    INIClass::GetString(a2, (unsigned __int8 *)this, (unsigned __int8 *)aRussian, &g_INI_DefaultBuffer, Source, 500);
    strncpy((char *)(this + 53), Source, 9u);
    *(uint8_t *)(this + 61) = 0;
    INIClass::GetString(a2, (unsigned __int8 *)this, (unsigned __int8 *)aAllied, &g_INI_DefaultBuffer, Source, 500);
    strncpy((char *)(this + 62), Source, 9u);
    *(uint8_t *)(this + 70) = 0;
    return 1;
}

