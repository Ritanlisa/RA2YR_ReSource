#include "vocclass.hpp"

char  VocClass::LoadFromINI(char **this, unsigned __int8 ***a2)
{
    unsigned __int8 *SampleName; // eax
    char *v4; // eax
    char *i; // eax
    char *v6; // eax
    double v7; // st7
    double v8; // st7
    int v9; // eax
    char *v10; // eax
    int Int_Overwrite; // eax
    char *v12; // eax
    double v13; // st7
    double v14; // st7
    char *v15; // eax
    char *v16; // eax
    int v17; // eax
    char *v18; // eax
    int v19; // eax
    char *v20; // eax
    char *v21; // eax
    char *v22; // eax
    char *v23; // eax
    char *v24; // eax
    int v25; // eax
    char *v26; // eax
    int v27; // eax
    char *v28; // eax
    int v29; // eax
    char *v30; // eax
    char *v31; // eax
    int v32; // ebx
    int v33; // ecx
    char *v34; // eax
    char *v35; // eax
    int v36; // edi
    int v37; // ecx
    float v39; // [esp+10h] [ebp-810h]
    int v40; // [esp+14h] [ebp-80Ch] BYREF
    int v41; // [esp+18h] [ebp-808h] BYREF
    int v42; // [esp+1Ch] [ebp-804h]
    char String[2048]; // [esp+20h] [ebp-800h] BYREF
    INIClass::ResetSection(a2);
    if ( !*this )
    return 0;
    SampleName = (unsigned __int8 *)VocClass::GetSampleName(*this);
    if ( !INIClass::BinarySearchSection((int)a2, SampleName) )
    return 0;
    if ( *this )
    v4 = VocClass::GetSampleName(*this);
    else
    v4 = g_Str_Invalid_Voc;
    INIClass::GetString(a2, (unsigned __int8 *)v4, (unsigned __int8 *)aSounds, &g_INI_DefaultBuffer, String, 2048);
    for ( i = strtok(String, asc_846570); i; i = strtok(0, asc_846570) )
    AddSampleVocClass(*this, i);
    if ( *this )
    v6 = VocClass::GetSampleName(*this);
    else
    v6 = g_Str_Invalid_Voc;
    v7 = flt_8464B4;
    INIClass::ReadDouble_Overwrite((int)v6, (int)g_INI_Key_Volume, flt_8464B4);
    v8 = v7 * 0.0099999998;
    if ( v8 <= 1.0 )
    if ( v8 <= 0.0 )
    v8 = 0.0;
    else
    v8 = 1.0;
    v9 = Math::RoundToInt(v8 * 16384.0);
    sub_406550(*this, v9);
    if ( *this )
    v10 = VocClass::GetSampleName(*this);
    else
    v10 = g_Str_Invalid_Voc;
    Int_Overwrite = INIClass::ReadInt_Overwrite(v10, aVshift, 0);
    sub_406620(*this, Int_Overwrite);
    if ( *this )
    v12 = VocClass::GetSampleName(*this);
    else
    v12 = g_Str_Invalid_Voc;
    v13 = flt_8464B8;
    INIClass::ReadDouble_Overwrite((int)v12, (int)aMinvolume, flt_8464B8);
    v14 = v13 * 0.0099999998;
    v39 = v14;
    if ( v14 <= 1.0 )
    if ( v39 <= 0.0 )
    v39 = 0.0;
    sub_4065F0(LODWORD(v39));
    else
    sub_4065F0(1065353216);
    if ( *this )
    v15 = VocClass::GetSampleName(*this);
    else
    v15 = g_Str_Invalid_Voc;
    INIClass::GetString(a2, (unsigned __int8 *)v15, (unsigned __int8 *)g_INI_Key_Priority, g_INI_Key_NORMAL, String, 2048);
    v42 = dword_8464B0;
    sub_4067D0(String);
    sub_406540(*this, v42);
    if ( *this )
    v16 = VocClass::GetSampleName(*this);
    else
    v16 = g_Str_Invalid_Voc;
    v17 = INIClass::ReadInt_Overwrite(v16, g_INI_Key_Attack, 0);
    sub_406520(*this, v17);
    if ( *this )
    v18 = VocClass::GetSampleName(*this);
    else
    v18 = g_Str_Invalid_Voc;
    v19 = INIClass::ReadInt_Overwrite(v18, aDecay, 0);
    sub_406530(*this, v19);
    if ( *this )
    v20 = VocClass::GetSampleName(*this);
    else
    v20 = g_Str_Invalid_Voc;
    INIClass::GetString(a2, (unsigned __int8 *)v20, (unsigned __int8 *)aControl, &g_INI_DefaultBuffer, String, 2048);
    v21 = strtok(String, asc_846570);
    v41 = dword_B1D3B0;
    if ( v21 )
    v41 = 0;
    do
    sub_406820(&v41, v21);
    v21 = strtok(0, asc_846570);
    while ( v21 );
    sub_406570(*this, v41);
    if ( *this )
    v22 = VocClass::GetSampleName(*this);
    else
    v22 = g_Str_Invalid_Voc;
    INIClass::GetString(a2, (unsigned __int8 *)v22, (unsigned __int8 *)g_INI_Key_Type, &g_INI_DefaultBuffer, String, 2048);
    v23 = strtok(String, asc_846570);
    v40 = dword_8464BC;
    if ( v23 )
    v40 = 32;
    do
    Audio::ApplyFormatFlags(&v40, v23);
    v23 = strtok(0, asc_846570);
    while ( v23 );
    sub_4065C0(*this, v40);
    if ( *this )
    v24 = VocClass::GetSampleName(*this);
    else
    v24 = g_Str_Invalid_Voc;
    v25 = INIClass::ReadInt_Overwrite(v24, aLimit, dword_8464C4);
    sub_4065D0(*this, v25);
    if ( *this )
    v26 = VocClass::GetSampleName(*this);
    else
    v26 = g_Str_Invalid_Voc;
    v27 = INIClass::ReadInt_Overwrite(v26, aLoop, 0);
    sub_406640(*this, v27);
    if ( *this )
    v28 = VocClass::GetSampleName(*this);
    else
    v28 = g_Str_Invalid_Voc;
    v29 = INIClass::ReadInt_Overwrite(v28, g_INI_Key_Range, dword_8464C0);
    sub_4065E0(*this, v29);
    if ( *this )
    v30 = VocClass::GetSampleName(*this);
    else
    v30 = g_Str_Invalid_Voc;
    INIClass::GetString(a2, (unsigned __int8 *)v30, (unsigned __int8 *)aDelay, &g_INI_DefaultBuffer, String, 2048);
    v31 = strtok(String, asc_846570);
    v32 = 0;
    if ( v31 )
    v32 = atoi(v31);
    v31 = strtok(0, asc_846570);
    v33 = v32;
    if ( v31 )
    v33 = atoi(v31);
    sub_406600(v33);
    if ( *this )
    v34 = VocClass::GetSampleName(*this);
    else
    v34 = g_Str_Invalid_Voc;
    INIClass::GetString(a2, (unsigned __int8 *)v34, (unsigned __int8 *)aFshift, &g_INI_DefaultBuffer, String, 2048);
    v35 = strtok(String, asc_846570);
    v36 = 0;
    if ( v35 )
    v36 = atoi(v35);
    v35 = strtok(0, asc_846570);
    v37 = v36;
    if ( v35 )
    v37 = atoi(v35);
    sub_406610(v37);
    return 1;
}

char *__fastcall VocClass::GetSampleNameByIndex(int a1)
{
    char *v1; // ecx
    if ( a1 < 0 || a1 >= g_VocPlayState )
    return g_Str__none_;
    v1 = (char *)**((uint32_t **)g_VocAudioConfig + a1);
    if ( v1 )
    return VocClass::GetSampleName(v1);
    else
    return g_Str_Invalid_Voc;
}

