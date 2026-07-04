#include "terraintypeclass.hpp"

// 0x0071DA80
uint32_t * TerrainTypeClass::TerrainTypeClass(uint32_t *this, char *Source)
{
    int v3; // eax
    bool v4; // zf
    int v5; // ecx
    void **v6; // edx
    ObjectTypeClass::ConstructFull((int)this, Source);
    *(this + 165) = -1;
    *(this + 166) = 0;
    *((uint8_t *)this + 668) = 0;
    *((uint8_t *)this + 669) = 0;
    *((uint8_t *)this + 670) = 0;
    *(this + 170) = 7;
    *(this + 171) = 7;
    *(this + 168) = 0;
    *(this + 169) = 0;
    *((uint8_t *)this + 688) = 0;
    *((uint8_t *)this + 689) = 0;
    *((uint8_t *)this + 690) = 0;
    *((uint8_t *)this + 691) = 0;
    *((uint8_t *)this + 692) = 0;
    *(this + 174) = 0;
    *this = &TerrainTypeClass::`vftable';
    *(this + 1) = &TerrainTypeClass::`vftable';
    *(this + 2) = &TerrainTypeClass::`vftable';
    *(this + 3) = &TerrainTypeClass::`vftable';
    AbstractClass::GenerateUniqueID((int)(this + 1));
    *((uint8_t *)this + 560) = 0;
    *((uint8_t *)this + 564) = 1;
    *((uint8_t *)this + 559) = 1;
    *((uint8_t *)this + 561) = 0;
    *((uint8_t *)this + 562) = 1;
    v3 = g_RulesClassInitState;
    if ( g_RulesClassInitState < dword_A8E320
    || (byte_A8E325 || !dword_A8E320)
    && dword_A8E32C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_A8E318 + 8))(
    &dword_A8E318,
    dword_A8E320 + dword_A8E32C,
    0) == 0,
    v3 = g_RulesClassInitState,
    !v4) )
    g_RulesClassInitState = v3 + 1;
    *((uint32_t *)dword_A8E31C + v3) = this;
    v3 = g_RulesClassInitState;
    v5 = 0;
    if ( v3 <= 0 )
    LABEL_11:
    v5 = -1;
    else
    v6 = (void **)dword_A8E31C;
    while ( *v6 != this )
    ++v5;
    ++v6;
    if ( v5 >= v3 )
    goto LABEL_11;
    *(this + 165) = v5;
    *(this + 40) = -1;
    *(this + 39) = 6;
    return this;
}

bool  TerrainTypeClass::_vt32(void *this, __int16 *a2, int a3)
{
    void **v4; // eax
    v4 = (void **)__2_YAPAXI_Z(0xE0u);
    return v4 && TerrainClass::Construct(v4, this, a2);
}

void ** TerrainTypeClass::_vt35(void *this, int a2)
{
    void **v3; // eax
    v3 = (void **)__2_YAPAXI_Z(0xE0u);
    if ( v3 )
    return TerrainClass::Construct(v3, this, &word_B0ED7C);
    else
    return 0;
}

char  TerrainTypeClass::LoadFromINI(int this, unsigned __int8 ***a2)
{
    char Bool_Overwrite; // al
    char v4; // al
    char v5; // cl
    char v6; // al
    int v7; // eax
    int v8; // ecx
    char **v9; // eax
    int PixelData; // eax
    int Coord; // eax
    char v12; // cl
    char v13; // al
    int Int_Overwrite; // eax
    double v15; // st7
    int v16; // eax
    int v17; // eax
    int v18; // ecx
    char v20; // [esp+4h] [ebp-218h]
    int v21; // [esp+4h] [ebp-218h]
    uint8_t v22[4]; // [esp+18h] [ebp-204h] BYREF
    char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF
    INIClass::ResetSection(a2);
    if ( !ObjectTypeClass::LoadFromINI((char *)this, a2) )
    return 0;
    if ( *(uint32_t *)(this + 160) == -1 )
    *(uint32_t *)(this + 160) = RulesClass_Instance->Normal[17];
    Bool_Overwrite = INIClass::ReadBool_Overwrite(this + 36, aIsveinhole, *(uint8_t *)(this + 692));
    *(uint8_t *)(this + 692) = Bool_Overwrite;
    if ( Bool_Overwrite )
    *(uint8_t *)(this + 564) = 0;
    *(uint8_t *)(this + 561) = 1;
    v4 = INIClass::ReadBool_Overwrite(this + 36, aWaterbound, *(uint8_t *)(this + 688));
    v5 = *(uint8_t *)(this + 689);
    *(uint8_t *)(this + 688) = v4;
    v6 = INIClass::ReadBool_Overwrite(this + 36, aSpawnstiberium, v5);
    v20 = *(uint8_t *)(this + 690);
    *(uint8_t *)(this + 689) = v6;
    *(uint8_t *)(this + 690) = INIClass::ReadBool_Overwrite(this + 36, aIsflammable, v20);
    v7 = INIClass::LookupEnum(this + 504, g_INI_Key_Foundation, *(uint32_t *)(this + 664));
    v8 = 5 * v7;
    *(uint32_t *)(this + 664) = v7;
    LOBYTE(v7) = *(uint8_t *)(this + 556);
    *(uint32_t *)(this + 696) = 8 * v8 + 11595200;
    if ( !(uint8_t)v7 )
    _makepath(Buffer, 0, 0, (const char *)(this + 504), Ext);
    *(uint32_t *)(this + 164) = SearchMIXFile(Buffer, 0);
    v9 = (char **)(*(int (__thiscall **)(int))(*(uint32_t *)this + 156))(this);
    if ( v9 )
    PixelData = MixFileClass::GetPixelData(v9, (int)v22, 0);
    *(_WORD *)(this + 668) = *(_WORD *)PixelData;
    *(uint8_t *)(this + 670) = *(uint8_t *)(PixelData + 2);
    Coord = INIClass::GetCoord(
    a2,
    (int)v22,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aRadarcolor,
    (unsigned __int8 *)(this + 668));
    v12 = *(uint8_t *)(this + 691);
    *(_WORD *)(this + 668) = *(_WORD *)Coord;
    *(uint8_t *)(this + 670) = *(uint8_t *)(Coord + 2);
    v13 = INIClass::ReadBool_Overwrite(this + 36, aIsanimated, v12);
    v21 = *(uint32_t *)(this + 672);
    *(uint8_t *)(this + 691) = v13;
    Int_Overwrite = INIClass::ReadInt_Overwrite(this + 36, aAnimationrate, v21);
    v15 = *(float *)(this + 676);
    *(uint32_t *)(this + 672) = Int_Overwrite;
    INIClass::ReadDouble_Overwrite(this + 36, (int)aAnimationproba, v15);
    v16 = *(uint32_t *)(this + 680);
    *(float *)(this + 676) = v15;
    v17 = INIClass::ReadInt_Overwrite(this + 36, aTemperateoccup, v16);
    v18 = *(uint32_t *)(this + 684);
    *(uint32_t *)(this + 680) = v17;
    *(uint32_t *)(this + 684) = INIClass::ReadInt_Overwrite(this + 36, aSnowoccupation, v18);
    return 1;
}

uint32_t *__stdcall TerrainTypeClass::_vt27(uint32_t *a1, int *a2)
{
    int GroundHeight; // eax
    int v3; // ecx
    int v5; // [esp+0h] [ebp-Ch] BYREF
    int v6; // [esp+4h] [ebp-8h]
    int v7; // [esp+8h] [ebp-4h]
    v5 = *a2;
    v6 = a2[1];
    v7 = a2[2];
    GroundHeight = Cell::GetGroundHeight(&v5);
    v3 = v7;
    if ( v7 < GroundHeight )
    v3 = Cell::GetGroundHeight(&v5);
    *a1 = v5;
    a1[1] = v6;
    a1[2] = v3;
    return a1;
}

int  TerrainTypeClass::_vt13(int this, int *a2)
{
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    int v6; // edx
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 660));
    LOBYTE(v3) = *(uint8_t *)(this + 688);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 689);
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 690);
    Power::FlagProcess(a2, v5);
    Power::TimerProcess(*(uint32_t *)(this + 664));
    LOBYTE(v6) = *(uint8_t *)(this + 691);
    Power::FlagProcess(a2, v6);
    Power::TimerProcess(*(uint32_t *)(this + 672));
    return Checksummer::Add_float((unsigned int *)a2, *(uint32_t *)(this + 676));
}

// 0x0071E1D0
int __stdcall TerrainTypeClass::SaveLoad_Prefix(char *a1, int a2)
{
    int result; // eax
    result = ObjectTypeClass::LoadCleanup((int)a1, a2);
    if ( result >= 0 )
    if ( a1 )
    ObjectTypeClass::Construct(a1, (int)&a2);
    *(uint32_t *)a1 = &TerrainTypeClass::`vftable';
    *((uint32_t *)a1 + 1) = &TerrainTypeClass::`vftable';
    *((uint32_t *)a1 + 2) = &TerrainTypeClass::`vftable';
    *((uint32_t *)a1 + 3) = &TerrainTypeClass::`vftable';
    VoxelAnimType::LoadAnim(a1);
    ObjectTypeClass::Load2DArt(a1);
    *((uint32_t *)a1 + 174) = 40 * *((uint32_t *)a1 + 166) + 11595200;
    return 0;
    return result;
}

// 0x0071E240
int __stdcall TerrainTypeClass::SaveLoad_Prefix_0(int a1, int a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_PrefixWrapper(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int __stdcall TerrainTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1525862011;
    a2[1] = 298976820;
    a2[2] = 1610654892;
    a2[3] = -1252326136;
    return 0;
}

int TerrainTypeClass::_vt11()
{
    return 37;
}

int TerrainTypeClass::_vt12()
{
    return 700;
}

int  TerrainTypeClass::_vt16(uint32_t *this)
{
    return *(this + 165);
}

void ** TerrainTypeClass::_vt08(void **this, char a2)
{
    void *v3; // eax
    int v4; // eax
    void **v6; // [esp+4h] [ebp-4h] BYREF
    v3 = *(this + 41);
    *this = &TerrainTypeClass::`vftable';
    *(this + 1) = &TerrainTypeClass::`vftable';
    *(this + 2) = &TerrainTypeClass::`vftable';
    *(this + 3) = &TerrainTypeClass::`vftable';
    if ( v3 )
    __3_YAXPAX_Z(v3);
    *(this + 41) = 0;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v6 = this;
    v4 = (*(int (__thiscall **)(int *, void ***))(dword_A8E318 + 16))(&dword_A8E318, &v6);
    if ( v4 != -1 && v4 < g_RulesClassInitState && v4 < --g_RulesClassInitState )
    do
    ++v4;
    *((uint32_t *)dword_A8E31C + v4 - 1) = *((uint32_t *)dword_A8E31C + v4);
    while ( v4 < g_RulesClassInitState );
    ObjectTypeClass::Destruct((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}

