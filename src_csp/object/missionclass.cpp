#include "missionclass.hpp"

// 0x0041B5E0
bool  MissionClass::vt_entry_200(int this)
{
    int v1; // eax
    v1 = *(uint32_t *)(this + 172);
    return v1 != 6 && v1 != 21 && (!*(uint8_t *)(this + 1746) || v1 == 30) && *(uint8_t *)(this + 1748) != 0;
}

// 0x0041BF30
int  MissionClass::vt_entry_1FC(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

// 0x005B2E10
int  MissionClass::Return450A(#377 *this)
{
    return 450;
}

// 0x005B2E20
int  MissionClass::Return450B(#377 *this)
{
    return 450;
}

// 0x005B2E30
int  MissionClass::Return450C(#377 *this)
{
    return 450;
}

// 0x005B2ED0
int  MissionClass::Return450D(#377 *this)
{
    return 450;
}

// 0x005B2EE0
int  MissionClass::Return450E(#377 *this)
{
    return 450;
}

// 0x005B2F80
int  MissionClass::Return450K(#377 *this)
{
    return 450;
}

// 0x005B2F90
int  MissionClass::Return450L(#377 *this)
{
    return 450;
}

// 0x005B2FA0
int  MissionClass::Return450F(#377 *this)
{
    return 450;
}

// 0x005B2FB0
int  MissionClass::Return450M(#377 *this)
{
    return 450;
}

// 0x005B2FC0
int  MissionClass::Return450N(#377 *this)
{
    return 450;
}

// 0x005B2FD0
int  MissionClass::SetState(#377 *this)
{
    int result; // eax
    uint32_t *v2; // ecx
    int v3; // [esp+4h] [ebp-8h]
    int v4; // [esp+10h] [ebp+4h]
    result = v4;
    if ( *((uint32_t *)this + 43) != 28 || v4 != 5 )
    *((uint32_t *)this + 43) = v4;
    *((uint32_t *)this + 45) = -1;
    *((uint8_t *)this + 184) = 0;
    *((uint32_t *)this + 47) = 0;
    *((uint32_t *)this + 48) = CurrentFrame;
    *((uint32_t *)this + 49) = 0;
    v2 = (uint32_t *)((char *)this + 200);
    *v2 = CurrentFrame;
    v2[1] = v3;
    v2[2] = 0;
    return v3;
    return result;
}

// 0x005B3040
int  MissionClass::GetPrimaryOrFallback(#377 *this)
{
    int result; // eax
    result = *((uint32_t *)this + 43);
    if ( result == -1 )
    return *((uint32_t *)this + 45);
    return result;
}

// 0x005B3570
int  MissionClass::AdvanceState(#377 *this)
{
    int result; // eax
    wchar_t *v2; // eax
    int v3; // [esp+4h] [ebp-8h]
    result = *((uint32_t *)this + 45);
    if ( result == -1 )
    LOBYTE(result) = 0;
    else
    *((uint32_t *)this + 43) = result;
    *((uint32_t *)this + 45) = -1;
    v2 = CurrentFrame;
    *((uint32_t *)this + 47) = 0;
    *((uint32_t *)this + 50) = v2;
    *((uint32_t *)this + 51) = v3;
    *((uint32_t *)this + 52) = 0;
    result = (int)CurrentFrame;
    *((uint32_t *)this + 48) = CurrentFrame;
    *((uint32_t *)this + 49) = 0;
    *((uint8_t *)this + 184) = 0;
    LOBYTE(result) = 1;
    return result;
}

uint8_t * MissionClass::FindName(uint8_t *this)
{
    *(this + 4) = 0;
    *(this + 5) = 0;
    *(this + 7) = 0;
    *(this + 6) = 1;
    *(this + 8) = 1;
    *(this + 9) = 1;
    *((uint32_t *)this + 4) = -755914244;
    *((uint32_t *)this + 6) = -755914244;
    *(uint32_t *)this = -1;
    *((uint32_t *)this + 5) = 1066426957;
    *((uint32_t *)this + 7) = 1066426957;
    return this;
}

char  MissionClass::LoadFromINI(int *this, uint32_t *a2)
{
    char *v3; // eax
    char *v4; // eax
    char *v5; // eax
    char *v6; // eax
    char *v7; // eax
    char *v8; // eax
    char *v9; // eax
    char *v10; // eax
    double Double_Overwrite; // st7
    int v12; // eax
    char *v13; // eax
    double v14; // st7
    int v15; // ecx
    INIClass::ResetSection(a2);
    if ( *this == -1 )
    v3 = g_Str__none_;
    else
    v3 = off_816CAC[*this];
    if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)v3) )
    return 0;
    if ( *this == -1 )
    v4 = g_Str__none_;
    else
    v4 = off_816CAC[*this];
    *((uint8_t *)this + 4) = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)v4,
    (unsigned __int8 *)aNothreat,
    *((uint8_t *)this + 4));
    if ( *this == -1 )
    v5 = g_Str__none_;
    else
    v5 = off_816CAC[*this];
    *((uint8_t *)this + 5) = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)v5,
    (unsigned __int8 *)aZombie,
    *((uint8_t *)this + 5));
    if ( *this == -1 )
    v6 = g_Str__none_;
    else
    v6 = off_816CAC[*this];
    *((uint8_t *)this + 6) = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)v6,
    (unsigned __int8 *)aRecruitable,
    *((uint8_t *)this + 6));
    if ( *this == -1 )
    v7 = g_Str__none_;
    else
    v7 = off_816CAC[*this];
    *((uint8_t *)this + 7) = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)v7,
    (unsigned __int8 *)aParalyzed,
    *((uint8_t *)this + 7));
    if ( *this == -1 )
    v8 = g_Str__none_;
    else
    v8 = off_816CAC[*this];
    *((uint8_t *)this + 8) = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)v8,
    (unsigned __int8 *)aRetaliate,
    *((uint8_t *)this + 8));
    if ( *this == -1 )
    v9 = g_Str__none_;
    else
    v9 = off_816CAC[*this];
    *((uint8_t *)this + 9) = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)v9,
    (unsigned __int8 *)aScatter,
    *((uint8_t *)this + 9));
    if ( *this == -1 )
    v10 = g_Str__none_;
    else
    v10 = off_816CAC[*this];
    Double_Overwrite = INIClass::ReadDouble_Overwrite(
    (int)a2,
    (unsigned __int8 *)v10,
    (unsigned __int8 *)g_INI_Key_Rate,
    *((double *)this + 2));
    v12 = *this;
    *((double *)this + 2) = Double_Overwrite;
    if ( v12 == -1 )
    v13 = g_Str__none_;
    else
    v13 = off_816CAC[v12];
    v14 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)v13, (unsigned __int8 *)aAarate, 0.0);
    *((double *)this + 3) = v14;
    if ( v14 == 0.0 )
    v15 = *(this + 5);
    *(this + 6) = *(this + 4);
    *(this + 7) = v15;
    return 1;
}

// 0x005B3A10
int  MissionClass::HasValidTarget(#377 *this)
{
    return *((uint32_t *)this + 44) != -1;
}

