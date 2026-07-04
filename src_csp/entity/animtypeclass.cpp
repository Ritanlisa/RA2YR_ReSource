#include "animtypeclass.hpp"

char  AnimTypeClass::_vt24(void *this, int a2)
{
    int v2; // eax
    char Buffer[512]; // [esp+8h] [ebp-200h] BYREF
    LOBYTE(v2) = ArmageddonMode;
    if ( ArmageddonMode || a2 != dword_822CF8 )
    if ( !*((uint8_t *)this + 556) || *((uint8_t *)this + 862) )
    LOBYTE(v2) = *((uint8_t *)this + 567);
    if ( (uint8_t)v2 )
    LOBYTE(v2) = (*(int (__thiscall **)(void *, int))(*(uint32_t *)this + 160))(this, a2);
    else
    if ( *((uint32_t *)this + 41) && *((uint8_t *)this + 168) )
    __3_YAXPAX_Z(*((void **)this + 41));
    *((uint8_t *)this + 168) = 0;
    *((uint32_t *)this + 41) = 0;
    _makepath(Buffer, 0, 0, (const char *)this + 36, (const char *)&off_7E1BC6 + 112 * a2);
    v2 = SearchMIXFile(Buffer, 1);
    *((uint32_t *)this + 41) = v2;
    return v2;
}

char  AnimTypeClass::_vt40(int this, int a2)
{
    int v3; // eax
    char v4; // cl
    const char *v5; // eax
    int v6; // ecx
    int v7; // eax
    int v8; // eax
    char v9; // dl
    char Buffer[512]; // [esp+4h] [ebp-200h] BYREF
    LOBYTE(v3) = *(uint8_t *)(this + 862);
    if ( !(uint8_t)v3 )
    if ( *(uint8_t *)(this + 556) )
    LOBYTE(v3) = ObjectTypeClass::Load2DArt((char *)this);
    else
    if ( *(uint32_t *)(this + 164) && *(uint8_t *)(this + 168) )
    __3_YAXPAX_Z(*(void **)(this + 164));
    *(uint8_t *)(this + 168) = 0;
    v4 = *(uint8_t *)(this + 504);
    v5 = (const char *)(this + 504);
    *(uint32_t *)(this + 164) = 0;
    if ( !v4 )
    v5 = (const char *)(this + 36);
    _makepath(Buffer, 0, 0, v5, Ext);
    TheaterObjectTypeClassSpecificID(Buffer, a2);
    v3 = SearchMIXFile(Buffer, 1);
    *(uint32_t *)(this + 164) = v3;
    if ( !v3 )
    ObjectTypeClass::SetRTTI71(Buffer);
    v3 = SearchMIXFile(Buffer, 1);
    *(uint32_t *)(this + 164) = v3;
    v6 = *(uint32_t *)(this + 164);
    if ( v6 )
    v7 = *(uint32_t *)(this + 704);
    *(uint8_t *)(this + 676) = 1;
    if ( !v7 )
    v8 = *(__int16 *)(v6 + 6);
    v9 = *(uint8_t *)(this + 882);
    *(uint32_t *)(this + 704) = v8;
    if ( v9 )
    *(uint32_t *)(this + 704) = v8 / 2;
    if ( !*(uint32_t *)(this + 700) )
    *(uint32_t *)(this + 700) = *(uint32_t *)(this + 704);
    *(uint32_t *)(this + 664) = *(__int16 *)(v6 + 6) / 2;
    *(uint32_t *)(this + 668) = -1;
    *(uint32_t *)(this + 672) = -1;
    LOBYTE(v3) = -1;
    return v3;
}

char __userpurge AnimTypeClass::LoadFromINI@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
    char Bool_Overwrite; // al
    int v5; // eax
    int Int_Overwrite; // eax
    int v7; // eax
    int v8; // ebp
    int v9; // eax
    int v10; // edx
    int *v11; // eax
    int v12; // ecx
    int v13; // eax
    double v14; // rax
    unsigned int v15; // ecx
    unsigned int v16; // edx
    int v17; // eax
    int v18; // eax
    int v19; // ebp
    int v20; // eax
    char v21; // al
    char v22; // cl
    char v23; // al
    int v24; // eax
    int v25; // ebp
    int v26; // eax
    char v27; // cl
    char v28; // al
    char v29; // al
    int v30; // ecx
    int v31; // eax
    int v32; // eax
    int v33; // ebp
    int Index; // eax
    int v35; // eax
    int v36; // ebp
    int v37; // eax
    uint32_t *v38; // ebp
    int v39; // ebp
    uint32_t *v40; // eax
    uint32_t *v41; // eax
    uint32_t *v42; // ebp
    int v43; // ebp
    uint32_t *v44; // eax
    uint32_t *v45; // eax
    uint32_t *v46; // ebp
    int v47; // ebp
    uint32_t *v48; // eax
    uint32_t *v49; // eax
    int v50; // eax
    int v51; // ebp
    int v52; // eax
    char v53; // al
    char v54; // cl
    char v55; // al
    int *v56; // eax
    int v57; // ecx
    int v58; // edi
    int v59; // eax
    int v60; // eax
    int v61; // eax
    int v63; // [esp-Ch] [ebp-C4h]
    int v64; // [esp-Ch] [ebp-C4h]
    char v65; // [esp-Ch] [ebp-C4h]
    int v66; // [esp-Ch] [ebp-C4h]
    int v67; // [esp-Ch] [ebp-C4h]
    char v68; // [esp-Ch] [ebp-C4h]
    char v69; // [esp-Ch] [ebp-C4h]
    int v70; // [esp+8h] [ebp-B0h] BYREF
    int v71; // [esp+Ch] [ebp-ACh]
    char v72[8]; // [esp+10h] [ebp-A8h] BYREF
    char Source[128]; // [esp+18h] [ebp-A0h] BYREF
    char Destination[32]; // [esp+98h] [ebp-20h] BYREF
    INIClass::ResetSection(a3);
    if ( !ObjectTypeClass::LoadFromINI((char *)a1, a3) )
    return 0;
    Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aShadow, *(uint8_t *)(a1 + 882));
    if ( Bool_Overwrite != *(uint8_t *)(a1 + 882) )
    *(uint8_t *)(a1 + 882) = Bool_Overwrite;
    if ( Bool_Overwrite )
    *(int *)(a1 + 704) /= 2;
    else
    *(uint32_t *)(a1 + 704) *= 2;
    v5 = *(uint32_t *)(a1 + 704);
    if ( *(uint32_t *)(a1 + 700) > v5 )
    *(uint32_t *)(a1 + 700) = v5;
    if ( *(uint8_t *)(a1 + 504) )
    if ( !*(uint32_t *)(a1 + 164) )
    *(uint8_t *)(a1 + 556) = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Theater, *(uint8_t *)(a1 + 556));
    *(uint8_t *)(a1 + 567) = INIClass::ReadBool_Overwrite(a1 + 36, aNewtheater, *(uint8_t *)(a1 + 567));
    (*(void (__thiscall **)(int, int))(*(uint32_t *)a1 + 160))(a1, -1);
    *(uint32_t *)(a1 + 868) = AnimTypeClass::ReadINIString(a1 + 36, aLayer, *(uint32_t *)(a1 + 868));
    *(uint8_t *)(a1 + 865) = INIClass::ReadBool_Overwrite(a1 + 36, aAltpalette, *(uint8_t *)(a1 + 865));
    *(uint8_t *)(a1 + 872) = INIClass::ReadBool_Overwrite(a1 + 36, aDoublethick, *(uint8_t *)(a1 + 872));
    *(uint8_t *)(a1 + 873) = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Flat, *(uint8_t *)(a1 + 873));
    *(uint8_t *)(a1 + 876) = INIClass::ReadBool_Overwrite(a1 + 36, aFlamer, *(uint8_t *)(a1 + 876));
    *(uint8_t *)(a1 + 866) = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Normalized, *(uint8_t *)(a1 + 866));
    *(uint8_t *)(a1 + 874) = INIClass::ReadBool_Overwrite(a1 + 36, aTranslucent, *(uint8_t *)(a1 + 874));
    *(uint8_t *)(a1 + 875) = INIClass::ReadBool_Overwrite(a1 + 36, aScorch, *(uint8_t *)(a1 + 875));
    *(uint8_t *)(a1 + 877) = INIClass::ReadBool_Overwrite(a1 + 36, aCrater, *(uint8_t *)(a1 + 877));
    *(uint8_t *)(a1 + 878) = INIClass::ReadBool_Overwrite(a1 + 36, aForcebigcrater, *(uint8_t *)(a1 + 878));
    *(uint8_t *)(a1 + 879) = INIClass::ReadBool_Overwrite(a1 + 36, aSticky, *(uint8_t *)(a1 + 879));
    *(uint8_t *)(a1 + 880) = INIClass::ReadBool_Overwrite(a1 + 36, aPingpong, *(uint8_t *)(a1 + 880));
    *(uint8_t *)(a1 + 881) = INIClass::ReadBool_Overwrite(a1 + 36, aReverse, *(uint8_t *)(a1 + 881));
    *(uint8_t *)(a1 + 883) = INIClass::ReadBool_Overwrite(a1 + 36, aPsiwarning, *(uint8_t *)(a1 + 883));
    *(uint8_t *)(a1 + 855) = INIClass::ReadBool_Overwrite(a1 + 36, aTiberiumchainr, *(uint8_t *)(a1 + 855));
    Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 36, g_INI_Key_Rate, -1);
    if ( Int_Overwrite != -1 )
    if ( Int_Overwrite <= 0 )
    v7 = 0;
    else
    v7 = 900 / Int_Overwrite;
    *(uint32_t *)(a1 + 688) = v7;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Damage, *(double *)(a1 + 680));
    *(double *)(a1 + 680) = a2;
    *(uint32_t *)(a1 + 692) = INIClass::ReadInt_Overwrite(a1 + 36, aStart, *(uint32_t *)(a1 + 692));
    *(uint32_t *)(a1 + 704) = INIClass::ReadInt_Overwrite(a1 + 36, &off_818590, *(uint32_t *)(a1 + 704));
    *(uint32_t *)(a1 + 696) = INIClass::ReadInt_Overwrite(a1 + 36, aLoopstart, *(uint32_t *)(a1 + 696));
    *(uint32_t *)(a1 + 700) = INIClass::ReadInt_Overwrite(a1 + 36, aLoopend, *(uint32_t *)(a1 + 700));
    *(uint32_t *)(a1 + 708) = INIClass::ReadInt_Overwrite(a1 + 36, aLoopcount, *(uint32_t *)(a1 + 708));
    v8 = *(uint32_t *)(a1 + 712);
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aNext,
    &g_INI_DefaultBuffer,
    Source,
    128) )
    v9 = globalHelper_028F70(Source);
    else
    v9 = v8;
    *(uint32_t *)(a1 + 712) = v9;
    *(uint32_t *)(a1 + 724) = INIClass::ReadInt_Overwrite(a1 + 36, g_INI_Key_DetailLevel, *(uint32_t *)(a1 + 724));
    *(uint32_t *)(a1 + 728) = INIClass::ReadInt_Overwrite(a1 + 36, aTranslucencyde, *(uint32_t *)(a1 + 728));
    v10 = *(uint32_t *)(a1 + 736);
    v70 = *(uint32_t *)(a1 + 732);
    v71 = v10;
    v11 = (int *)INIClass::ReadPoint2D_Overwrite(v72, a1 + 36, aRandomloopdela, &v70);
    v12 = *v11;
    v13 = v11[1];
    *(uint32_t *)(a1 + 732) = v12;
    *(uint32_t *)(a1 + 736) = v13;
    *(uint32_t *)(a1 + 748) = INIClass::ReadInt_Overwrite(a1 + 36, aTranslucency, *(uint32_t *)(a1 + 748));
    *(uint8_t *)(a1 + 856) = INIClass::ReadBool_Overwrite(a1 + 36, aIstiberium, *(uint8_t *)(a1 + 856));
    *(uint8_t *)(a1 + 857) = INIClass::ReadBool_Overwrite(a1 + 36, aHideifnoore, *(uint8_t *)(a1 + 857));
    *(uint32_t *)(a1 + 832) = INIClass::ReadInt_Overwrite(a1 + 36, aYsortadjust, *(uint32_t *)(a1 + 832));
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Elasticity, *(double *)(a1 + 784));
    v14 = *(double *)(a1 + 808);
    *(double *)(a1 + 784) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMaxxyvel, v14);
    v15 = *(uint32_t *)(a1 + 796);
    v16 = *(uint32_t *)(a1 + 792);
    *(double *)(a1 + 808) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aMinzvel, COERCE_DOUBLE(__PAIR64__(v15, v16)));
    v17 = *(uint32_t *)(a1 + 844);
    *(double *)(a1 + 792) = a2;
    v18 = INIClass::ReadInt_Overwrite(a1 + 36, aMakeinfantry, v17);
    v19 = *(uint32_t *)(a1 + 752);
    *(uint32_t *)(a1 + 844) = v18;
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)g_INI_Key_Spawns,
    &g_INI_DefaultBuffer,
    Source,
    128) )
    v20 = globalHelper_028F70(Source);
    else
    v20 = v19;
    v63 = *(uint32_t *)(a1 + 756);
    *(uint32_t *)(a1 + 752) = v20;
    *(uint32_t *)(a1 + 756) = INIClass::ReadInt_Overwrite(a1 + 36, aSpawncount, v63);
    v21 = INIClass::ReadBool_Overwrite(a1 + 36, aIsmeteor, *(uint8_t *)(a1 + 854));
    v22 = *(uint8_t *)(a1 + 853);
    *(uint8_t *)(a1 + 854) = v21;
    v23 = INIClass::ReadBool_Overwrite(a1 + 36, aIsveins, v22);
    v64 = *(uint32_t *)(a1 + 828);
    *(uint8_t *)(a1 + 853) = v23;
    v24 = INIClass::ReadInt_Overwrite(a1 + 36, aTiberiumspread_0, v64);
    v25 = *(uint32_t *)(a1 + 824);
    *(uint32_t *)(a1 + 828) = v24;
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aTiberiumspawnt,
    &g_INI_DefaultBuffer,
    Source,
    128) )
    v26 = BuildingTypeClass::FindOrCreate2(Source);
    else
    v26 = v25;
    v27 = *(uint8_t *)(a1 + 864);
    *(uint32_t *)(a1 + 824) = v26;
    v28 = INIClass::ReadBool_Overwrite(a1 + 36, aIsanimatedtibe, v27);
    v65 = *(uint8_t *)(a1 + 884);
    *(uint8_t *)(a1 + 864) = v28;
    *(uint8_t *)(a1 + 884) = INIClass::ReadBool_Overwrite(a1 + 36, aShouldfogremov, v65);
    v29 = INIClass::ReadBool_Overwrite(a1 + 36, aIsflamingguy, *(uint8_t *)(a1 + 852));
    v30 = *(uint32_t *)(a1 + 848);
    *(uint8_t *)(a1 + 852) = v29;
    v31 = INIClass::ReadInt_Overwrite(a1 + 36, aRunningframes, v30);
    v66 = *(uint32_t *)(a1 + 836);
    *(uint32_t *)(a1 + 848) = v31;
    *(uint32_t *)(a1 + 836) = INIClass::ReadInt_Overwrite(a1 + 36, aYdrawoffset, v66);
    v32 = INIClass::ReadInt_Overwrite(a1 + 36, aZadjust, *(uint32_t *)(a1 + 840));
    v33 = *(uint32_t *)(a1 + 760);
    *(uint32_t *)(a1 + 840) = v32;
    if ( !INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)g_INI_Key_StartSound,
    &g_INI_DefaultBuffer,
    Source,
    128)
    || (Index = VocClass::FindIndex(Source), Index == -1) )
    Index = v33;
    *(uint32_t *)(a1 + 760) = Index;
    if ( Index == -1 )
    if ( !INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aReport,
    &g_INI_DefaultBuffer,
    Source,
    128)
    || (v35 = VocClass::FindIndex(Source), v35 == -1) )
    v35 = -1;
    *(uint32_t *)(a1 + 760) = v35;
    v36 = *(uint32_t *)(a1 + 764);
    if ( !INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)g_INI_Key_StopSound,
    &g_INI_DefaultBuffer,
    Source,
    128)
    || (v37 = VocClass::FindIndex(Source), v37 == -1) )
    v37 = v36;
    v38 = *(uint32_t **)(a1 + 768);
    *(uint32_t *)(a1 + 764) = v37;
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aBounceanim,
    &g_INI_DefaultBuffer,
    Source,
    128) )
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) )
    goto LABEL_46;
    v39 = 0;
    if ( g_BuildingTypeCount2 > 0 )
    while ( _strcmpi((const void *)(*((uint32_t *)g_AnimTypeCount + v39) + 36), Source) )
    if ( ++v39 >= g_BuildingTypeCount2 )
    goto LABEL_43;
    v41 = (uint32_t *)*((uint32_t *)g_AnimTypeCount + v39);
    goto LABEL_47;
    LABEL_43:
    v40 = __2_YAPAXI_Z(0x378u);
    if ( v40 )
    v41 = AnimTypeClass::Construct(v40, Source);
    else
    LABEL_46:
    v41 = 0;
    LABEL_47:
    v38 = v41;
    *(uint32_t *)(a1 + 768) = v38;
    v42 = *(uint32_t **)(a1 + 772);
    if ( !INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aExpireanim,
    &g_INI_DefaultBuffer,
    Source,
    128) )
    v45 = v42;
    goto LABEL_59;
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) )
    LABEL_57:
    v45 = 0;
    goto LABEL_59;
    v43 = 0;
    if ( g_BuildingTypeCount2 <= 0 )
    LABEL_54:
    v44 = __2_YAPAXI_Z(0x378u);
    if ( v44 )
    v45 = AnimTypeClass::Construct(v44, Source);
    goto LABEL_59;
    goto LABEL_57;
    while ( _strcmpi((const void *)(*((uint32_t *)g_AnimTypeCount + v43) + 36), Source) )
    if ( ++v43 >= g_BuildingTypeCount2 )
    goto LABEL_54;
    v45 = (uint32_t *)*((uint32_t *)g_AnimTypeCount + v43);
    LABEL_59:
    v46 = *(uint32_t **)(a1 + 776);
    *(uint32_t *)(a1 + 772) = v45;
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aTraileranim,
    &g_INI_DefaultBuffer,
    Source,
    128) )
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) )
    goto LABEL_68;
    v47 = 0;
    if ( g_BuildingTypeCount2 > 0 )
    while ( _strcmpi((const void *)(*((uint32_t *)g_AnimTypeCount + v47) + 36), Source) )
    if ( ++v47 >= g_BuildingTypeCount2 )
    goto LABEL_65;
    v49 = (uint32_t *)*((uint32_t *)g_AnimTypeCount + v47);
    goto LABEL_70;
    LABEL_65:
    v48 = __2_YAPAXI_Z(0x378u);
    if ( v48 )
    v49 = AnimTypeClass::Construct(v48, Source);
    else
    LABEL_68:
    v49 = 0;
    else
    v49 = v46;
    LABEL_70:
    v67 = *(uint32_t *)(a1 + 780);
    *(uint32_t *)(a1 + 776) = v49;
    *(uint32_t *)(a1 + 780) = INIClass::ReadInt_Overwrite(a1 + 36, aTrailerseperat, v67);
    v50 = INIClass::ReadInt_Overwrite(a1 + 36, aDamageradius, *(uint32_t *)(a1 + 820));
    v51 = *(uint32_t *)(a1 + 816);
    *(uint32_t *)(a1 + 820) = v50;
    if ( INIClass::GetString(
    a3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)g_INI_Key_Warhead,
    &g_INI_DefaultBuffer,
    Source,
    128) )
    v52 = WarheadTypeClass::FindOrCreate(Source);
    else
    v52 = v51;
    v68 = *(uint8_t *)(a1 + 858);
    *(uint32_t *)(a1 + 816) = v52;
    *(uint8_t *)(a1 + 858) = INIClass::ReadBool_Overwrite(a1 + 36, aBouncer, v68);
    v53 = INIClass::ReadBool_Overwrite(a1 + 36, aTiled, *(uint8_t *)(a1 + 859));
    v54 = *(uint8_t *)(a1 + 860);
    *(uint8_t *)(a1 + 859) = v53;
    v55 = INIClass::ReadBool_Overwrite(a1 + 36, aShouldusecelld, v54);
    v69 = *(uint8_t *)(a1 + 861);
    *(uint8_t *)(a1 + 860) = v55;
    *(uint8_t *)(a1 + 861) = INIClass::ReadBool_Overwrite(a1 + 36, aUsenormallight, v69);
    if ( INIClass::GetString(a3, (unsigned __int8 *)(a1 + 36), (unsigned __int8 *)aSpawnsparticle, 0, Destination, 32) )
    *(uint32_t *)(a1 + 716) = BuildingTypeClass::FindOrCreateEx(Destination);
    *(uint32_t *)(a1 + 720) = INIClass::ReadInt_Overwrite(a1 + 36, aNumparticles, *(uint32_t *)(a1 + 720));
    v70 = -1;
    v71 = -1;
    v56 = (int *)INIClass::ReadPoint2D_Overwrite(v72, a1 + 36, aRandomrate, &v70);
    v57 = *v56;
    v58 = v56[1];
    if ( *v56 != -1 )
    if ( v57 <= 0 )
    v59 = 0;
    else
    v59 = 900 / v57;
    *(uint32_t *)(a1 + 740) = v59;
    if ( v58 != -1 )
    if ( v58 <= 0 )
    v60 = 0;
    else
    v60 = 900 / v58;
    *(uint32_t *)(a1 + 744) = v60;
    if ( *(int *)(a1 + 744) < 0 )
    *(uint32_t *)(a1 + 744) = 0;
    v61 = *(uint32_t *)(a1 + 744);
    if ( *(uint32_t *)(a1 + 740) > v61 )
    *(uint32_t *)(a1 + 740) = v61;
    return 1;
}

// 0x00428800
int __stdcall AnimTypeClass::SaveLoad_Prefix(int a1, int a2)
{
    int result; // eax
    char v3; // [esp+7h] [ebp-201h] BYREF
    char Buffer[512]; // [esp+8h] [ebp-200h] BYREF
    result = ObjectTypeClass::LoadCleanup(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    ObjectTypeClass::Construct((uint32_t *)a1, (int)&v3);
    *(uint32_t *)a1 = &AnimTypeClass::`vftable';
    *(uint32_t *)(a1 + 4) = &AnimTypeClass::`vftable';
    *(uint32_t *)(a1 + 8) = &AnimTypeClass::`vftable';
    *(uint32_t *)(a1 + 12) = &AnimTypeClass::`vftable';
    VoxelAnimType::LoadAnim((char *)a1);
    ObjectTypeClass::Load2DArt((char *)a1);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 712));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 772));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 776));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 768));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 752));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 816));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 824));
    if ( !*(uint8_t *)(a1 + 862) )
    if ( *(uint8_t *)(a1 + 556) )
    _makepath(
    Buffer,
    0,
    0,
    (const char *)(a1 + 36),
    (const char *)&off_7E1BC6 + 112 * *((uint32_t *)ScenarioClass_Instance + 1174));
    *(uint32_t *)(a1 + 164) = SearchMIXFile(Buffer, 1);
    return 0;
    if ( *(uint8_t *)(a1 + 567) )
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)a1 + 160))(a1, *((uint32_t *)ScenarioClass_Instance + 1174));
    return 0;
    return result;
}

// 0x00428970
int __stdcall AnimTypeClass::SaveLoad_Prefix_0(int a1, int a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_PrefixWrapper(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int __stdcall AnimTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1366608934;
    a2[1] = 298976796;
    a2[2] = 1610654892;
    a2[3] = -1252326136;
    return 0;
}

int  AnimTypeClass::_vt13(int this, int *a2)
{
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // eax
    int v9; // ecx
    int v10; // edx
    int v11; // eax
    int v12; // ecx
    int v13; // edx
    int v14; // ecx
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 868));
    LOBYTE(v3) = *(uint8_t *)(this + 866);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 873);
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 874);
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 875);
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 876);
    v8 = Power::FlagProcess(a2, v7);
    LOBYTE(v8) = *(uint8_t *)(this + 877);
    Power::FlagProcess(a2, v8);
    LOBYTE(v9) = *(uint8_t *)(this + 879);
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = *(uint8_t *)(this + 880);
    v11 = Power::FlagProcess(a2, v10);
    LOBYTE(v11) = *(uint8_t *)(this + 881);
    Power::FlagProcess(a2, v11);
    LOBYTE(v12) = *(uint8_t *)(this + 882);
    Power::FlagProcess(a2, v12);
    Power::TimerProcess(*(uint32_t *)(this + 664));
    Checksummer::Add_double((unsigned int *)a2, *(uint32_t *)(this + 680), *(uint32_t *)(this + 684));
    LOBYTE(v13) = *(uint8_t *)(this + 855);
    Power::FlagProcess(a2, v13);
    Power::TimerProcess(*(uint32_t *)(this + 688));
    Power::TimerProcess(*(uint32_t *)(this + 692));
    Power::TimerProcess(*(uint32_t *)(this + 696));
    Power::TimerProcess(*(uint32_t *)(this + 700));
    Power::TimerProcess(*(uint32_t *)(this + 704));
    Power::TimerProcess(*(uint32_t *)(this + 760));
    Power::TimerProcess(*(uint32_t *)(this + 764));
    Power::TimerProcess(*(uint32_t *)(this + 720));
    Power::TimerProcess(*(uint32_t *)(this + 724));
    Power::TimerProcess(*(uint32_t *)(this + 728));
    Power::TimerProcess(*(uint32_t *)(this + 732));
    Power::TimerProcess(*(uint32_t *)(this + 736));
    Power::TimerProcess(*(uint32_t *)(this + 748));
    LOBYTE(v14) = *(uint8_t *)(this + 859);
    return Power::FlagProcess(a2, v14);
}

int  AnimTypeClass::_vt10(uint32_t *this, int a2, int a3)
{
    int result; // eax
    result = *(this + 178);
    if ( result == a2 )
    *(this + 178) = 0;
    return result;
}

int  AnimTypeClass::_vt39(char *this)
{
    int result; // eax
    const char *v3; // eax
    void *EntireFile; // eax
    void *v5; // eax
    int v6; // esi
    uint32_t v7[22]; // [esp+4h] [ebp-2D8h] BYREF
    char v8[12]; // [esp+5Ch] [ebp-280h] BYREF
    int v9; // [esp+68h] [ebp-274h]
    uint32_t v10[22]; // [esp+70h] [ebp-26Ch] BYREF
    char v11[12]; // [esp+C8h] [ebp-214h] BYREF
    int v12; // [esp+D4h] [ebp-208h]
    char Buffer[512]; // [esp+DCh] [ebp-200h] BYREF
    result = *((uint32_t *)this + 41);
    if ( !result && *(this + 862) )
    Debug::Log();
    v3 = this + 504;
    if ( !*(this + 504) )
    v3 = this + 36;
    _makepath(Buffer, 0, 0, v3, Ext);
    if ( *(this + 556) )
    _makepath(Buffer, 0, 0, this + 36, (const char *)&off_7E1BC6 + 112 * *((uint32_t *)ScenarioClass_Instance + 1174));
    else if ( *(this + 567) )
    TheaterObjectTypeClassSpecificID(Buffer, *((uint32_t *)ScenarioClass_Instance + 1174));
    CCFileClass::Construct(v7, Buffer);
    EntireFile = CCFileClass::ReadEntireFile(v7);
    *((uint32_t *)this + 41) = EntireFile;
    if ( EntireFile )
    *(this + 168) = 1;
    else
    ObjectTypeClass::SetRTTI71(Buffer);
    CCFileClass::Construct(v10, Buffer);
    v5 = CCFileClass::ReadEntireFile(v10);
    *((uint32_t *)this + 41) = v5;
    if ( v5 )
    *(this + 168) = 1;
    v10[0] = &CCFileClass::`vftable';
    v12 = 0;
    Vector::Clear((int)v11);
    v10[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v10);
    (*(void (__thiscall **)(char *, uint32_t))(*(uint32_t *)this + 160))(this, *((uint32_t *)ScenarioClass_Instance + 1174));
    v6 = *((uint32_t *)this + 41);
    v7[0] = &CCFileClass::`vftable';
    v9 = 0;
    Vector::Clear((int)v8);
    v7[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v7);
    return v6;
    return result;
}

int  AnimTypeClass::_vt16(uint32_t *this)
{
    return *(this + 165);
}

int AnimTypeClass::_vt12()
{
    return 888;
}

char __stdcall AnimTypeClass::_vt32(int a1, int a2)
{
    return 0;
}

int __stdcall AnimTypeClass::_vt35(int a1)
{
    return 0;
}

uint32_t * AnimTypeClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    int v4; // eax
    uint32_t *v6; // [esp+4h] [ebp-4h] BYREF
    *Block = &AnimTypeClass::`vftable';
    *(Block + 1) = &AnimTypeClass::`vftable';
    *(Block + 2) = &AnimTypeClass::`vftable';
    *(Block + 3) = &AnimTypeClass::`vftable';
    v6 = Block;
    v3 = (*(int (__thiscall **)(int *, uint32_t **))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v6);
    if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager )
    do
    ++v3;
    *((uint32_t *)g_AnimPoolCount + v3 - 1) = *((uint32_t *)g_AnimPoolCount + v3);
    while ( v3 < g_AnimManager );
    v6 = Block;
    v4 = (*(int (__thiscall **)(int *, uint32_t **))(AnimTypeClass_Array + 16))(&AnimTypeClass_Array, &v6);
    if ( v4 != -1 && v4 < g_BuildingTypeCount2 && v4 < --g_BuildingTypeCount2 )
    do
    ++v4;
    *((uint32_t *)g_AnimTypeCount + v4 - 1) = *((uint32_t *)g_AnimTypeCount + v4);
    while ( v4 < g_BuildingTypeCount2 );
    ObjectTypeClass::Destruct((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

