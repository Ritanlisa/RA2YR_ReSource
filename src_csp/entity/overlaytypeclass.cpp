#include "overlaytypeclass.hpp"

// 0x005FE250
uint32_t * OverlayTypeClass::OverlayTypeClass(uint32_t *this, char *Source)
{
    int v3; // eax
    bool v4; // zf
    int v5; // ecx
    BuildingTypeClass *v6; // edx
    ObjectTypeClass::ConstructFull((int)this, Source);
    *(this + 168) = 1;
    *(this + 169) = 1;
    *((uint8_t *)this + 684) = 1;
    *((uint8_t *)this + 691) = 1;
    *(this + 165) = -1;
    *(this + 166) = 0;
    *(this + 167) = 0;
    *((uint8_t *)this + 680) = 0;
    *((uint8_t *)this + 681) = 0;
    *((uint8_t *)this + 682) = 0;
    *((uint8_t *)this + 683) = 0;
    *((uint8_t *)this + 685) = 0;
    *((uint8_t *)this + 686) = 0;
    *((uint8_t *)this + 687) = 0;
    *((uint8_t *)this + 688) = 0;
    *((uint8_t *)this + 689) = 0;
    *((uint8_t *)this + 690) = 0;
    *((uint8_t *)this + 692) = 0;
    *((uint8_t *)this + 693) = 0;
    *((uint8_t *)this + 694) = 0;
    *((uint8_t *)this + 695) = 0;
    *((uint8_t *)this + 696) = 0;
    *this = &OverlayTypeClass::`vftable';
    *(this + 1) = &OverlayTypeClass::`vftable';
    *(this + 2) = &OverlayTypeClass::`vftable';
    *(this + 3) = &OverlayTypeClass::`vftable';
    AbstractClass::GenerateUniqueID((int)(this + 1));
    *((uint8_t *)this + 559) = 1;
    *((uint8_t *)this + 560) = 0;
    *((uint8_t *)this + 562) = 1;
    *((uint8_t *)this + 565) = 0;
    v3 = g_ObjectTypeConfig;
    if ( g_ObjectTypeConfig < dword_A83D88
    || (byte_A83D8D || !dword_A83D88)
    && dword_A83D94 > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_A83D80 + 8))(
    &dword_A83D80,
    dword_A83D88 + dword_A83D94,
    0) == 0,
    v3 = g_ObjectTypeConfig,
    !v4) )
    g_ObjectTypeConfig = v3 + 1;
    *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v3] = this;
    v3 = g_ObjectTypeConfig;
    v5 = 0;
    if ( v3 <= 0 )
    LABEL_11:
    *(this + 165) = -1;
    return this;
    else
    v6 = BuildingTypeClass_Array;
    while ( *(uint32_t **)v6->gap0 != this )
    ++v5;
    v6 = (BuildingTypeClass *)((char *)v6 + 4);
    if ( v5 >= v3 )
    goto LABEL_11;
    *(this + 165) = v5;
    return this;
}

int *__stdcall OverlayTypeClass::_vt36(int a1)
{
    if ( (byte_AC15E8 & 1) == 0 )
    byte_AC15E8 |= 1u;
    dword_AC1640 = 0;
    dword_AC1644 = 2147450879;
    atexit(nullsub_213);
    return &dword_AC1640;
}

bool  OverlayTypeClass::_vt32(void *this, __int16 *a2, int a3)
{
    void*374 *v4; // eax
    v4 = (void*374 *)__2_YAPAXI_Z(0xB0u);
    return v4 && Object::SpawnAtCell(v4, (int)this, a2, -1);
}

void  OverlayTypeClass::_vt40(void *this, uint32_t *a2, int *a3, unsigned int a4)
{
    int v4; // edx
    int v5; // eax
    int v6[2]; // [esp+8h] [ebp-8h] BYREF
    v4 = Map_VisibleRect + a2[1] + 15;
    v6[0] = DSurface_ViewBounds + *a2 + 30;
    v6[1] = v4;
    v5 = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 156))(this);
    DrawToSurfaceSHP(DSurface_Hidden_2, FileSystem_x_PAL, v5, a4, v6, a3, 1536, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
}

char  OverlayTypeClass::LoadFromINI(int this, unsigned __int8 ***a2)
{
    int v3; // eax
    int v4; // ecx
    int Int_Overwrite; // eax
    char Bool_Overwrite; // al
    char v7; // cl
    char v8; // al
    char v9; // al
    char v10; // cl
    char v11; // al
    int v12; // ebp
    int v13; // eax
    int v14; // eax
    int Coord; // eax
    char v16; // al
    char v17; // cl
    char v18; // al
    char v19; // al
    char v20; // cl
    char v21; // al
    char v23; // [esp-Ch] [ebp-298h]
    char v24; // [esp-Ch] [ebp-298h]
    char v25; // [esp-Ch] [ebp-298h]
    char v26; // [esp-Ch] [ebp-298h]
    char v27; // [esp-Ch] [ebp-298h]
    uint8_t v28[4]; // [esp+8h] [ebp-284h] BYREF
    char Destination[128]; // [esp+Ch] [ebp-280h] BYREF
    char Buffer[512]; // [esp+8Ch] [ebp-200h] BYREF
    INIClass::ResetSection(a2);
    if ( !ObjectTypeClass::LoadFromINI((char *)this, a2) )
    return 0;
    v3 = OverlayTypeClass::ReadINIString(this + 36, aLand, *(uint32_t *)(this + 664));
    v4 = *(uint32_t *)(this + 676);
    *(uint32_t *)(this + 664) = v3;
    Int_Overwrite = INIClass::ReadInt_Overwrite(this + 36, aStrength, v4);
    v23 = *(uint8_t *)(this + 680);
    *(uint32_t *)(this + 676) = Int_Overwrite;
    *(uint8_t *)(this + 680) = INIClass::ReadBool_Overwrite(this + 36, g_INI_Key_Wall, v23);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(this + 36, g_INI_Key_Tiberium, *(uint8_t *)(this + 681));
    v7 = *(uint8_t *)(this + 682);
    *(uint8_t *)(this + 681) = Bool_Overwrite;
    v8 = INIClass::ReadBool_Overwrite(this + 36, aCrate, v7);
    v24 = *(uint8_t *)(this + 683);
    *(uint8_t *)(this + 682) = v8;
    *(uint8_t *)(this + 683) = INIClass::ReadBool_Overwrite(this + 36, aCratetrigger, v24);
    v9 = INIClass::ReadBool_Overwrite(this + 36, aExplodes, *(uint8_t *)(this + 688));
    v10 = *(uint8_t *)(this + 690);
    *(uint8_t *)(this + 688) = v9;
    v11 = INIClass::ReadBool_Overwrite(this + 36, aOverrides, v10);
    v12 = *(uint32_t *)(this + 668);
    *(uint8_t *)(this + 690) = v11;
    if ( INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aCellanim,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v13 = AnimTypeClass::FindOrCreate(Destination);
    else
    v13 = v12;
    *(uint32_t *)(this + 668) = v13;
    *(uint32_t *)(this + 672) = INIClass::ReadInt_Overwrite(this + 504, aDamagelevels, *(uint32_t *)(this + 672));
    if ( *(uint8_t *)(this + 681) )
    v14 = *(uint32_t *)(this + 664);
    *(uint32_t *)(this + 156) = 6;
    if ( !v14 )
    *(uint32_t *)(this + 664) = 5;
    if ( !*(uint8_t *)(this + 556) && !*(uint8_t *)(this + 687) )
    _makepath(Buffer, 0, 0, (const char *)(this + 504), Ext);
    *(uint32_t *)(this + 164) = SearchMIXFile(Buffer, 1);
    Coord = INIClass::GetCoord(
    a2,
    (int)v28,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aRadarcolor,
    (unsigned __int8 *)(this + 694));
    *(_WORD *)(this + 694) = *(_WORD *)Coord;
    v25 = *(uint8_t *)(this + 684);
    *(uint8_t *)(this + 696) = *(uint8_t *)(Coord + 2);
    v16 = INIClass::ReadBool_Overwrite(this + 36, aNousetilelandt, v25);
    v17 = *(uint8_t *)(this + 685);
    *(uint8_t *)(this + 684) = v16;
    v18 = INIClass::ReadBool_Overwrite(this + 36, aIsveinholemons, v17);
    v26 = *(uint8_t *)(this + 686);
    *(uint8_t *)(this + 685) = v18;
    *(uint8_t *)(this + 686) = INIClass::ReadBool_Overwrite(this + 36, aIsveins, v26);
    v19 = INIClass::ReadBool_Overwrite(this + 36, aChainreaction, *(uint8_t *)(this + 689));
    v20 = *(uint8_t *)(this + 691);
    *(uint8_t *)(this + 689) = v19;
    v21 = INIClass::ReadBool_Overwrite(this + 36, aDrawflat, v20);
    v27 = *(uint8_t *)(this + 693);
    *(uint8_t *)(this + 691) = v21;
    *(uint8_t *)(this + 693) = INIClass::ReadBool_Overwrite(this + 36, aIsarock, v27);
    *(uint8_t *)(this + 692) = INIClass::ReadBool_Overwrite(this + 36, aIsrubble, *(uint8_t *)(this + 692));
    return 1;
}

// 0x005FEA30
uint32_t *__stdcall OverlayTypeClass::vt_entry_6C(uint32_t *a1, uint32_t *a2)
{
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    return a1;
}

int  OverlayTypeClass::_vt13(int this, int *a2)
{
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 660));
    Power::TimerProcess(*(uint32_t *)(this + 664));
    Power::TimerProcess(*(uint32_t *)(this + 672));
    Power::TimerProcess(*(uint32_t *)(this + 676));
    LOBYTE(v3) = *(uint8_t *)(this + 680);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 681);
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 682);
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 683);
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 688);
    return Power::FlagProcess(a2, v7);
}

// 0x005FEAF0
int __stdcall OverlayTypeClass::SaveLoad_Prefix(int a1, int a2)
{
    int result; // eax
    char v3; // [esp+7h] [ebp-201h] BYREF
    char Buffer[512]; // [esp+8h] [ebp-200h] BYREF
    result = ObjectTypeClass::LoadCleanup(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    ObjectTypeClass::Construct((uint32_t *)a1, (int)&v3);
    *(uint32_t *)a1 = &OverlayTypeClass::`vftable';
    *(uint32_t *)(a1 + 4) = &OverlayTypeClass::`vftable';
    *(uint32_t *)(a1 + 8) = &OverlayTypeClass::`vftable';
    *(uint32_t *)(a1 + 12) = &OverlayTypeClass::`vftable';
    VoxelAnimType::LoadAnim((char *)a1);
    ObjectTypeClass::Load2DArt((char *)a1);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 668));
    if ( !*(uint8_t *)(a1 + 687) )
    if ( *(uint8_t *)(a1 + 556) )
    _makepath(
    Buffer,
    0,
    0,
    (const char *)(a1 + 504),
    (const char *)&off_7E1BC6 + 112 * *((uint32_t *)ScenarioClass_Instance + 1174));
    else
    _makepath(Buffer, 0, 0, (const char *)(a1 + 504), Ext);
    TheaterObjectTypeClassSpecificID(Buffer, *((uint32_t *)ScenarioClass_Instance + 1174));
    if ( !*(uint32_t *)(a1 + 164) )
    *(uint32_t *)(a1 + 164) = SearchMIXFile(Buffer, 1);
    return 0;
    return result;
}

// 0x005FEC10
int __stdcall OverlayTypeClass::SaveLoad_Prefix_0(int a1, int a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_PrefixWrapper(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int __stdcall OverlayTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1525862009;
    a2[1] = 298976820;
    a2[2] = 1610654892;
    a2[3] = -1252326136;
    return 0;
}

int  OverlayTypeClass::GetRadarColor(int *this, int a2, unsigned int a3)
{
    char **v4; // eax
    int v5; // ecx
    int v6; // esi
    int v7; // eax
    char v8; // cl
    int PixelData; // ecx
    __int16 v11; // [esp+4h] [ebp-4h]
    v4 = (char **)(*(int (__thiscall **)(int *))(*this + 156))(this);
    if ( v4 || (v5 = *(this + 167)) != 0 && (v4 = (char **)(*(int (__thiscall **)(int))(*(uint32_t *)v5 + 156))(v5)) != 0 )
    v6 = *(this + 165);
    if ( (v6 < 127 || v6 > 138) && (v6 < 147 || v6 > 158) )
    PixelData = MixFileClass::GetPixelData(v4, (int)&a3, a3);
    *(_WORD *)a2 = *(_WORD *)PixelData;
    *(uint8_t *)(a2 + 2) = *(uint8_t *)(PixelData + 2);
    return a2;
    else
    v7 = MixFileClass::GetPixelData(v4, (int)&a3, a3);
    v11 = *(_WORD *)v7;
    v8 = HIBYTE(*(_WORD *)v7);
    BYTE1(a3) = *(uint8_t *)(v7 + 2);
    LOBYTE(a3) = v11;
    *(_WORD *)a2 = a3;
    *(uint8_t *)(a2 + 2) = v8;
    return a2;
    else
    *(_WORD *)a2 = 0;
    *(uint8_t *)(a2 + 2) = 0;
    return a2;
}

int OverlayTypeClass::_vt11()
{
    return 21;
}

int OverlayTypeClass::_vt12()
{
    return 700;
}

int  OverlayTypeClass::_vt16(uint32_t *this)
{
    return *(this + 165);
}

void ** OverlayTypeClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &OverlayTypeClass::`vftable';
    *(Block + 1) = &OverlayTypeClass::`vftable';
    *(Block + 2) = &OverlayTypeClass::`vftable';
    *(Block + 3) = &OverlayTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83D80 + 16))(&dword_A83D80, &v5);
    if ( v3 != -1 && v3 < g_ObjectTypeConfig && v3 < --g_ObjectTypeConfig )
    do
    ++v3;
    *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v3 - 4] = *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v3];
    while ( v3 < g_ObjectTypeConfig );
    ObjectTypeClass::Destruct((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

