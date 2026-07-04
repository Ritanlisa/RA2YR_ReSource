#include "tagtypeclass.hpp"

int  TagTypeClass::_vt10(uint32_t *this, int a2, int a3)
{
    int result; // eax
    result = *(this + 40);
    if ( result == a2 )
    result = *(uint32_t *)(result + 168);
    *(this + 40) = result;
    return result;
}

char  TagTypeClass::_vt25(int this, unsigned __int8 ***a2)
{
    char *v3; // eax
    char *v4; // eax
    char Destination[48]; // [esp+8h] [ebp-B4h] BYREF
    char v7; // [esp+38h] [ebp-84h]
    char String[128]; // [esp+3Ch] [ebp-80h] BYREF
    INIClass::ResetSection(a2);
    if ( !INIClass::GetString(
    a2,
    (unsigned __int8 *)aTags,
    (unsigned __int8 *)(this + 36),
    &g_INI_DefaultBuffer,
    String,
    128) )
    return 0;
    strtok(String, Delimiter);
    *(uint32_t *)(this + 156) = atoi(String);
    v3 = strtok(0, Delimiter);
    if ( v3 )
    strncpy(Destination, v3, 0x30u);
    v7 = 0;
    else
    Destination[0] = 0;
    if ( Destination != (char *)(this + 100) )
    qmemcpy((void *)(this + 100), Destination, 0x30u);
    *(uint8_t *)(this + 148) = v7;
    v4 = strtok(0, Delimiter);
    *(uint32_t *)(this + 160) = TagTypeClass::FindOrCreateTriggerType(v4);
    return 1;
}

char  TagTypeClass::_vt26(int this, char *a2)
{
    int v3; // eax
    CHAR Source[128]; // [esp+4h] [ebp-80h] BYREF
    v3 = *(uint32_t *)(this + 160);
    if ( v3 )
    wsprintfA(Source, "%d,%s,%s", *(uint32_t *)(this + 156), (const char *)(this + 100), (const char *)(v3 + 36));
    else
    wsprintfA(Source, "%s,<none>", (const char *)(this + 100));
    INIClass::SetString(a2, (unsigned __int8 *)aTags, (char *)(this + 36), Source);
    return 1;
}

// 0x006E6250
char  TagTypeClass::HasCrossesHorizontalLineEvent(uint32_t *this)
{
    uint32_t *v1; // esi
    v1 = (uint32_t *)*(this + 40);
    if ( !v1 )
    return 0;
    while ( !HouseClass::HasType25Building(v1) )
    v1 = (uint32_t *)v1[42];
    if ( !v1 )
    return 0;
    return 1;
}

// 0x006E6280
char  TagTypeClass::HasCrossesVerticalLineEvent(uint32_t *this)
{
    uint32_t *v1; // esi
    v1 = (uint32_t *)*(this + 40);
    if ( !v1 )
    return 0;
    while ( !HouseClass::HasType26Building(v1) )
    v1 = (uint32_t *)v1[42];
    if ( !v1 )
    return 0;
    return 1;
}

// 0x006E62B0
char  TagTypeClass::HasZoneEntryByEvent(uint32_t *this)
{
    int v1; // esi
    v1 = *(this + 40);
    if ( !v1 )
    return 0;
    while ( !HouseClass::FindType24((std::codecvt_base **)v1) )
    v1 = *(uint32_t *)(v1 + 168);
    if ( !v1 )
    return 0;
    return 1;
}

char * TagTypeClass::FindOrCreate(char *Source)
{
    int v2; // esi
    char *v3; // eax
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) )
    return 0;
    v2 = 0;
    if ( g_MultiplayerCleanup <= 0 )
    LABEL_6:
    v3 = (char *)__2_YAPAXI_Z(0xA4u);
    if ( v3 )
    return TagTypeClass::Construct(v3, Source);
    return 0;
    while ( _strcmpi((const void *)(*((uint32_t *)dword_B0E784 + v2) + 36), Source) )
    if ( ++v2 >= g_MultiplayerCleanup )
    goto LABEL_6;
    return (char *)*((uint32_t *)dword_B0E784 + v2);
}

int __stdcall TagTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1425466419;
    a2[1] = 298977773;
    a2[2] = 1610655148;
    a2[3] = -1252326136;
    return 0;
}

int  TagTypeClass::_vt13(int this, int *a2)
{
    AbstractTypeClass::ProcessPower((char *)this, a2);
    return Power::TimerProcess(*(uint32_t *)(this + 156));
}

int __stdcall TagTypeClass::_vt05(uint32_t *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractTypeClass::Init((int)a1, (int)&a2);
    *a1 = &TagTypeClass::`vftable';
    a1[1] = &TagTypeClass::`vftable';
    a1[2] = &TagTypeClass::`vftable';
    a1[3] = &TagTypeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 40);
    return 0;
    return result;
}

int __stdcall TagTypeClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int TagTypeClass::_vt11()
{
    return 45;
}

int TagTypeClass::_vt12()
{
    return 164;
}

int  TagTypeClass::_vt16(uint32_t *this)
{
    return *(this + 38);
}

void * TagTypeClass::_vt08(void *Block, char a2)
{
    TagTypeClass::CleanupMembers((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * TagTypeClass::FindOrCreateTriggerType(char *Source)
{
    int v2; // esi
    uint32_t *v3; // eax
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) )
    return 0;
    v2 = 0;
    if ( g_MultiplayerLogBuffer <= 0 )
    LABEL_6:
    v3 = __2_YAPAXI_Z(0xB4u);
    if ( v3 )
    return TriggerTypeClass::Construct(v3, Source);
    return 0;
    while ( _strcmpi((const void *)(*((uint32_t *)dword_8B417C + v2) + 36), Source) )
    if ( ++v2 >= g_MultiplayerLogBuffer )
    goto LABEL_6;
    return (uint32_t *)*((uint32_t *)dword_8B417C + v2);
}

