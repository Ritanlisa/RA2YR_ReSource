#include "gamemode.hpp"

unsigned int  GameMode::ReadFlagsFromINI(int *this, uint32_t *a2)
{
    char Bool_Overwrite; // al
    int v4; // edx
    int v5; // eax
    char v6; // al
    int v7; // ecx
    int v8; // eax
    char v9; // al
    int v10; // ecx
    int v11; // eax
    unsigned int v12; // eax
    unsigned int v13; // eax
    unsigned int result; // eax
    unsigned int v15; // eax
    char v16; // al
    int v17; // ecx
    int v18; // eax
    char v19; // al
    int v20; // ecx
    int v21; // eax
    char v22; // al
    int v23; // ecx
    int v24; // eax
    char v25; // al
    int v26; // ecx
    int v27; // eax
    unsigned int v28; // eax
    char v29; // al
    int v30; // ecx
    INIClass::ResetSection(a2);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(off_8401CC, g_INI_Key_TiberiumExplosive, (*this & 0x4000) != 0);
    v4 = *this;
    BYTE1(v4) = BYTE1(*this) & 0xBF;
    v5 = v4 | ((Bool_Overwrite & 1) << 14);
    *this = v5;
    v6 = INIClass::ReadBool_Overwrite(off_8401CC, aMcvdeploy, BYTE1(v5) & 1);
    v7 = *this;
    BYTE1(v7) = BYTE1(*this) & 0xFE;
    v8 = v7 | ((v6 & 1) << 8);
    *this = v8;
    v9 = INIClass::ReadBool_Overwrite(off_8401CC, aInitialveteran, (v8 & 0x200) != 0);
    v10 = *this;
    BYTE1(v10) = BYTE1(*this) & 0xFD;
    v11 = v10 | ((v9 & 1) << 9);
    *this = v11;
    v12 = *this & 0xFFFDFFFF | ((INIClass::ReadBool_Overwrite(off_8401CC, aIonstorms, (v11 & 0x20000) != 0) & 1) << 17);
    *this = v12;
    v13 = *this & 0xFFFEFFFF | ((INIClass::ReadBool_Overwrite(off_8401CC, aMeteorites, BYTE2(v12) & 1) & 1) << 16);
    *this = v13;
    result = *this & 0xFFFBFFFF
    | ((INIClass::ReadBool_Overwrite(off_8401CC, aVisceroids, (v13 & 0x40000) != 0) & 1) << 18);
    *this = result;
    if ( !GameMode_Current[0] || ArmageddonMode )
    v15 = *this & 0xFFFFFFBF
    | ((INIClass::ReadBool_Overwrite(off_8401CC, g_INI_Key_TiberiumGrows, (result & 0x40) != 0) & 1) << 6);
    *this = v15;
    v16 = INIClass::ReadBool_Overwrite(off_8401CC, aTiberiumspread, (v15 & 0x80) != 0);
    v17 = *this;
    LOBYTE(v17) = *this & 0x7F;
    v18 = v17 | ((v16 & 1) << 7);
    *this = v18;
    v19 = INIClass::ReadBool_Overwrite(off_8401CC, aDestroyablebri, (v18 & 0x8000) != 0);
    v20 = *this;
    BYTE1(v20) = BYTE1(*this) & 0x7F;
    v21 = v20 | ((v19 & 1) << 15);
    *this = v21;
    v22 = INIClass::ReadBool_Overwrite(off_8401CC, aFixedalliance, (v21 & 0x400) != 0);
    v23 = *this;
    BYTE1(v23) = BYTE1(*this) & 0xFB;
    v24 = v23 | ((v22 & 1) << 10);
    *this = v24;
    v25 = INIClass::ReadBool_Overwrite(off_8401CC, g_INI_Key_FogOfWar, (v24 & 0x1000) != 0);
    v26 = *this;
    BYTE1(v26) = BYTE1(*this) & 0xEF;
    v27 = v26 | ((v25 & 1) << 12);
    *this = v27;
    v28 = *this & 0xFFFFFFDF | (32 * (INIClass::ReadBool_Overwrite(off_8401CC, aInert, (v27 & 0x20) != 0) & 1));
    *this = v28;
    v29 = INIClass::ReadBool_Overwrite(off_8401CC, aHarvesterimmun, (v28 & 0x800) != 0);
    v30 = *this;
    BYTE1(v30) = BYTE1(*this) & 0xF7;
    result = v30 | ((v29 & 1) << 11);
    *this = result;
    return result;
}

