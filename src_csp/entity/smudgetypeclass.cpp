#include "smudgetypeclass.hpp"

// 0x006B5260
char * SmudgeTypeClass::SmudgeTypeClass(char *this, char *Source)
{
    int v3; // eax
    bool v4; // zf
    int v5; // ecx
    void **v6; // edx
    ObjectTypeClass::ConstructFull((int)this, Source);
    *((uint32_t *)this + 165) = -1;
    *((uint32_t *)this + 166) = 1;
    *((uint32_t *)this + 167) = 1;
    *(this + 672) = 0;
    *(this + 673) = 0;
    *(uint32_t *)this = &SmudgeTypeClass::`vftable';
    *((uint32_t *)this + 1) = &SmudgeTypeClass::`vftable';
    *((uint32_t *)this + 2) = &SmudgeTypeClass::`vftable';
    *((uint32_t *)this + 3) = &SmudgeTypeClass::`vftable';
    AbstractClass::GenerateUniqueID((int)(this + 4));
    *(_WORD *)(this + 559) = 1;
    *(this + 561) = 0;
    *(this + 562) = 1;
    *(this + 563) = 1;
    *(this + 565) = 0;
    v3 = FactoryClass_Count;
    if ( FactoryClass_Count < dword_A8EC20
    || (byte_A8EC25 || !dword_A8EC20)
    && dword_A8EC2C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_A8EC18 + 8))(
    &dword_A8EC18,
    dword_A8EC20 + dword_A8EC2C,
    0) == 0,
    v3 = FactoryClass_Count,
    !v4) )
    FactoryClass_Count = v3 + 1;
    *((uint32_t *)FactoryClass_Array + v3) = this;
    v3 = FactoryClass_Count;
    v5 = 0;
    if ( v3 <= 0 )
    LABEL_11:
    *((uint32_t *)this + 165) = -1;
    return this;
    else
    v6 = (void **)FactoryClass_Array;
    while ( *v6 != this )
    ++v5;
    ++v6;
    if ( v5 >= v3 )
    goto LABEL_11;
    *((uint32_t *)this + 165) = v5;
    return this;
}

bool  SmudgeTypeClass::_vt32(void *this, __int16 *a2, int a3)
{
    void **v4; // eax
    int v5; // edx
    bool result; // al
    int v7[3]; // [esp+4h] [ebp-Ch] BYREF
    v4 = (void **)__2_YAPAXI_Z(0xB0u);
    result = 0;
    if ( v4 )
    v7[2] = 0;
    v5 = a2[1];
    v7[0] = (*a2 << 8) + 128;
    v7[1] = (v5 << 8) + 128;
    if ( UnitClass::Create(v4, this, v7, -1) )
    return 1;
    return result;
}

void ** SmudgeTypeClass::_vt35(void *this, int a2)
{
    void **v3; // eax
    v3 = (void **)__2_YAPAXI_Z(0xB0u);
    if ( v3 )
    return UnitClass::Create(v3, this, &dword_B0B7A8, -1);
    else
    return 0;
}

void  SmudgeTypeClass::vt_entry_A0(uint32_t *this, int *a2, int *a3, int a4, int a5, __int16 *a6)
{
    int v7; // ebx
    int v8; // edx
    int v9; // ecx
    uint32_t *v10; // esi
    int v11; // eax
    int v12; // [esp-1Ch] [ebp-2Ch]
    int v13; // [esp+8h] [ebp-8h] BYREF
    int v14; // [esp+Ch] [ebp-4h]
    v7 = (*(int (__thiscall **)(uint32_t *))(*this + 156))(this);
    if ( v7 )
    v8 = a2[1];
    v13 = *a2;
    v14 = v8;
    if ( a4 )
    v9 = *(this + 166);
    v14 += -15 * (a4 / v9 + a4 % v9);
    v13 += 60 * (a4 / v9 - a4 % v9) / 2;
    v10 = CellCoord::To_CellObj(&MapClass_Instance, a6);
    v12 = *((__int16 *)v10 + 134);
    v11 = ZCoordToScreenY(a5);
    DrawToSurfaceSHP(DSurface_Hidden_2, v10[13], v7, 0, &v13, a3, 3584, 0, -1 - v11, 0, v12, 0, 0, 0, 0, 0);
}

char  SmudgeTypeClass::_vt25(int this, unsigned __int8 ***a2)
{
    char Bool_Overwrite; // al
    char v4; // cl
    char v5; // al
    int v7; // [esp-8h] [ebp-210h]
    char Buffer[512]; // [esp+8h] [ebp-200h] BYREF
    INIClass::ResetSection(a2);
    if ( !ObjectTypeClass::LoadFromINI((char *)this, a2) )
    return 0;
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aCrater,
    *(uint8_t *)(this + 672));
    v4 = *(uint8_t *)(this + 673);
    *(uint8_t *)(this + 672) = Bool_Overwrite;
    v5 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aBurn, v4);
    v7 = *(uint32_t *)(this + 664);
    *(uint8_t *)(this + 673) = v5;
    *(uint32_t *)(this + 664) = INIClass::ReadInt_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Width,
    v7);
    *(uint32_t *)(this + 668) = INIClass::ReadInt_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Height,
    *(uint32_t *)(this + 668));
    if ( *(uint8_t *)(this + 556) )
    _makepath(
    Buffer,
    0,
    0,
    (const char *)(this + 504),
    (const char *)&off_7E1BC6 + 112 * *((uint32_t *)ScenarioClass_Instance + 1174));
    else
    _makepath(Buffer, 0, 0, (const char *)(this + 504), Ext);
    *(uint32_t *)(this + 164) = SearchMIXFile(Buffer, 0);
    return 1;
}

int  SmudgeTypeClass::_vt13(int this, int *a2)
{
    int v3; // ecx
    int v4; // edx
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 660));
    LOBYTE(v3) = *(uint8_t *)(this + 672);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 673);
    Power::FlagProcess(a2, v4);
    Power::TimerProcess(*(uint32_t *)(this + 664));
    return Power::TimerProcess(*(uint32_t *)(this + 668));
}

int __stdcall SmudgeTypeClass::_vt05(char *a1, int a2)
{
    int result; // eax
    result = ObjectTypeClass::LoadCleanup((int)a1, a2);
    if ( result >= 0 )
    if ( a1 )
    ObjectTypeClass::Construct(a1, (int)&a2);
    *(uint32_t *)a1 = &SmudgeTypeClass::`vftable';
    *((uint32_t *)a1 + 1) = &SmudgeTypeClass::`vftable';
    *((uint32_t *)a1 + 2) = &SmudgeTypeClass::`vftable';
    *((uint32_t *)a1 + 3) = &SmudgeTypeClass::`vftable';
    VoxelAnimType::LoadAnim(a1);
    ObjectTypeClass::Load2DArt(a1);
    return 0;
    return result;
}

int __stdcall SmudgeTypeClass::_vt06(int a1, int a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_PrefixWrapper(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int __stdcall SmudgeTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1525862008;
    a2[1] = 298976820;
    a2[2] = 1610654892;
    a2[3] = -1252326136;
    return 0;
}

int SmudgeTypeClass::_vt11()
{
    return 30;
}

int SmudgeTypeClass::_vt12()
{
    return 676;
}

int  SmudgeTypeClass::_vt16(uint32_t *this)
{
    return *(this + 165);
}

void ** SmudgeTypeClass::_vt08(void **this, char a2)
{
    void *v3; // eax
    int v4; // eax
    void **v6; // [esp+4h] [ebp-4h] BYREF
    v3 = *(this + 41);
    *this = &SmudgeTypeClass::`vftable';
    *(this + 1) = &SmudgeTypeClass::`vftable';
    *(this + 2) = &SmudgeTypeClass::`vftable';
    *(this + 3) = &SmudgeTypeClass::`vftable';
    if ( v3 )
    __3_YAXPAX_Z(v3);
    *(this + 41) = 0;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v6 = this;
    v4 = (*(int (__thiscall **)(int *, void ***))(dword_A8EC18 + 16))(&dword_A8EC18, &v6);
    if ( v4 != -1 && v4 < FactoryClass_Count && v4 < --FactoryClass_Count )
    do
    ++v4;
    *((uint32_t *)FactoryClass_Array + v4 - 1) = *((uint32_t *)FactoryClass_Array + v4);
    while ( v4 < FactoryClass_Count );
    ObjectTypeClass::Destruct((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}

