#include "mschoiceclass.hpp"

char ** MSChoiceClass::LoadFromINI(char **this, uint32_t *a2, const char **a3)
{
    void **v4; // ebx
    char **v5; // esi
    int v6; // edi
    char **v7; // edi
    char **v8; // esi
    char **v9; // ebp
    char *v10; // eax
    wchar_t *String; // eax
    bool v12; // bl
    char **v13; // eax
    void **v14; // ebx
    bool v15; // bl
    int v16; // ebx
    char **v17; // ebx
    char **v18; // eax
    char **v19; // eax
    bool v20; // bl
    wchar_t **v21; // eax
    int v22; // ebx
    char *v23; // ecx
    int v24; // eax
    char *v25; // eax
    char *v26; // edx
    bool v27; // bl
    int v28; // esi
    int v29; // eax
    int v30; // ebx
    int v31; // esi
    void *v32; // eax
    int v33; // eax
    char *v34; // ecx
    int v35; // eax
    char *v36; // eax
    char *v37; // edx
    char **v38; // eax
    bool v39; // bl
    char **v40; // eax
    char **v41; // esi
    char *v42; // eax
    int v43; // ecx
    char *v44; // eax
    char *v45; // edx
    bool v47; // [esp+17h] [ebp-29h]
    bool v48; // [esp+17h] [ebp-29h]
    bool v49; // [esp+17h] [ebp-29h]
    bool v50; // [esp+17h] [ebp-29h]
    void *v51; // [esp+18h] [ebp-28h] BYREF
    int i; // [esp+1Ch] [ebp-24h] BYREF
    char **v53; // [esp+20h] [ebp-20h]
    int v54; // [esp+24h] [ebp-1Ch] BYREF
    int v55; // [esp+28h] [ebp-18h] BYREF
    void *v56; // [esp+2Ch] [ebp-14h] BYREF
    void *v57; // [esp+30h] [ebp-10h] BYREF
    void *v58[2]; // [esp+34h] [ebp-Ch] BYREF
    void *v59; // [esp+3Ch] [ebp-4h] BYREF
    v53 = this;
    unknown_libname_73(this);
    v4 = (void **)(this + 1);
    unknown_libname_73(this + 1);
    unknown_libname_73(this + 2);
    unknown_libname_73(this + 3);
    unknown_libname_74(this + 4);
    v5 = this + 6;
    v6 = 2;
    do
    unknown_libname_73(v5++);
    --v6;
    while ( v6 );
    unknown_libname_73(this + 8);
    v7 = this + 9;
    v8 = this + 15;
    v9 = this + 21;
    v7[1] = 0;
    v7[2] = 0;
    *((uint8_t *)v7 + 12) = 1;
    *((uint8_t *)v7 + 13) = 0;
    *v7 = (char *)&DynamicVectorClass<Point2D>::`vftable';
    v7[5] = (char *)10;
    v7[4] = 0;
    v8[1] = 0;
    v8[2] = 0;
    *((uint8_t *)v8 + 12) = 1;
    *((uint8_t *)v8 + 13) = 0;
    *v8 = (char *)&DynamicVectorClass<MSTextEntry *>::`vftable';
    v8[5] = (char *)10;
    v8[4] = 0;
    v9[5] = (char *)10;
    v9[1] = 0;
    v9[2] = 0;
    *((uint8_t *)v9 + 12) = 1;
    *((uint8_t *)v9 + 13) = 0;
    *v9 = (char *)&DynamicVectorClass<MapSelection *>::`vftable';
    v9[4] = 0;
    unknown_libname_73(&v51);
    unknown_libname_74(&v56);
    unknown_libname_73(&v59);
    String::Reassign(v53, a3);
    String::Assign_Alt(v4, 0);
    String::Assign((char **)&v54, 0);
    String::Assign((char **)&v55, g_INI_Key_Scenario);
    v47 = (int)INIClass::ReadString(a2, (char **)a3, (char **)&v55, (char **)&v54, (int)&v51) > 0;
    DeleteAndZero((void **)&v55);
    DeleteAndZero((void **)&v54);
    if ( v47 )
    String::Reassign((char **)v4, (const char **)&v51);
    i = (int)(v53 + 4);
    WideString::Assign_Alt((void **)v53 + 4, 0);
    String::Assign((char **)&v54, 0);
    String::Assign((char **)&v55, g_INI_Key_Description);
    v48 = (int)INIClass::ReadString(a2, (char **)a3, (char **)&v55, (char **)&v54, (int)&v51) > 0;
    DeleteAndZero((void **)&v55);
    DeleteAndZero((void **)&v54);
    if ( v48 )
    v10 = String::GetOrEmpty((char **)&v51);
    String = GetStringCSF((wchar_t *)v10, 0, aDRa2mdpostMsch, 482);
    WideString::Assign_Alt((void **)i, String);
    i = (int)(v53 + 3);
    String::Assign_Alt((void **)v53 + 3, 0);
    String::Assign((char **)&v54, 0);
    String::Assign((char **)&v55, aVoiceover);
    v49 = (int)INIClass::ReadString(a2, (char **)a3, (char **)&v55, (char **)&v54, (int)&v51) > 0;
    DeleteAndZero((void **)&v55);
    DeleteAndZero((void **)&v54);
    if ( v49 )
    String::Reassign((char **)i, (const char **)&v51);
    i = (int)(v53 + 2);
    String::Assign_Alt((void **)v53 + 2, 0);
    String::Assign((char **)&v54, 0);
    String::Assign((char **)&v55, aMapvq);
    v12 = (int)INIClass::ReadString(a2, (char **)a3, (char **)&v55, (char **)&v54, (int)&v51) > 0;
    DeleteAndZero((void **)&v55);
    DeleteAndZero((void **)&v54);
    if ( v12 )
    String::Reassign((char **)i, (const char **)&v51);
    v13 = v53;
    v55 = 2;
    v53[5] = 0;
    v14 = (void **)(v13 + 6);
    do
    String::Assign_Alt(v14++, 0);
    --v55;
    while ( v55 );
    String::Assign((char **)&v54, 0);
    String::Assign((char **)&v55, aOverlays);
    v15 = (int)INIClass::ReadString(a2, (char **)a3, (char **)&v55, (char **)&v54, (int)&v51) > 0;
    DeleteAndZero((void **)&v55);
    DeleteAndZero((void **)&v54);
    if ( v15 )
    i = 0;
    unknown_libname_73(&v54);
    v16 = String::Tokenize((const char **)&v51, 0, Delimiter, (void **)&v54);
    if ( String::Length((const char **)&v54) )
    v55 = (int)(v53 + 6);
    do
    if ( i >= 2 )
    break;
    String::Reassign((char **)v55, (const char **)&v54);
    v16 = String::Tokenize((const char **)&v51, v16, Delimiter, (void **)&v54);
    ++i;
    v55 += 4;
    while ( String::Length((const char **)&v54) );
    v53[5] = (char *)i;
    DeleteAndZero((void **)&v54);
    v17 = v53 + 8;
    String::Assign_Alt((void **)v53 + 8, 0);
    String::Assign((char **)&v54, 0);
    String::Assign((char **)&v55, aClickmap);
    v50 = (int)INIClass::ReadString(a2, (char **)a3, (char **)&v55, (char **)&v54, (int)&v51) > 0;
    DeleteAndZero((void **)&v55);
    DeleteAndZero((void **)&v54);
    if ( v50 )
    String::Reassign(v17, (const char **)&v51);
    for ( i = 1; i < 8; ++i )
    String::Assign((char **)&v55, 0);
    v18 = FromStringInt((char **)&v57, i);
    v19 = ProcessStringAndCopy((char **)&v54, aText, v18);
    v20 = (int)INIClass::ReadString(a2, (char **)a3, v19, (char **)&v55, (int)&v51) > 0;
    DeleteAndZero((void **)&v54);
    DeleteAndZero(&v57);
    DeleteAndZero((void **)&v55);
    if ( v20 )
    v21 = CharStringToWide((wchar_t **)v58, (const char **)&v51);
    WideString::Reassign_Alt(&v56, (const wchar_t **)v21);
    DeleteAndZero::Alt(v58);
    if ( __2_YAPAXI_Z(0x10u) )
    v22 = MSChoiceClass::DeleteAndZero(&v56);
    if ( v22 )
    v23 = v8[2];
    if ( (int)v8[4] < (int)v23
    || (*((uint8_t *)v8 + 13) || !v23)
    && (v24 = (int)v8[5], v24 > 0)
    && (*((unsigned __int8 (__thiscall **)(char **, char *, uint32_t))*v8 + 2))(v8, &v23[v24], 0) )
    v25 = v8[4];
    v26 = v8[1];
    v8[4] = v25 + 1;
    *(uint32_t *)&v26[4 * (uint32_t)v25] = v22;
    String::Assign((char **)&v54, 0);
    String::Assign((char **)&v55, aTargets);
    v27 = (int)INIClass::ReadString(a2, (char **)a3, (char **)&v55, (char **)&v54, (int)&v51) > 0;
    DeleteAndZero((void **)&v55);
    DeleteAndZero((void **)&v54);
    if ( v27 )
    v28 = 0;
    unknown_libname_73(&i);
    v55 = String::Tokenize((const char **)&v51, 0, Delimiter, (void **)&i);
    if ( String::Length((const char **)&i) )
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&i);
    v28 = v29;
    if ( v28 > 0 )
    v54 = v28;
    do
    v30 = -1;
    v58[0] = (void *)-1;
    v31 = String::Tokenize((const char **)&v51, v55, Delimiter, (void **)&i);
    if ( String::Length((const char **)&i) )
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&i);
    v58[0] = v32;
    v55 = String::Tokenize((const char **)&v51, v31, Delimiter, (void **)&i);
    if ( String::Length((const char **)&i) )
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&i);
    v30 = v33;
    v34 = v7[2];
    if ( (int)v7[4] < (int)v34
    || (*((uint8_t *)v7 + 13) || !v34)
    && (v35 = (int)v7[5], v35 > 0)
    && (*((unsigned __int8 (__thiscall **)(char **, char *, uint32_t))*v7 + 2))(v7, &v34[v35], 0) )
    v36 = v7[4];
    v37 = v7[1];
    v7[4] = v36 + 1;
    *(void **)&v37[8 * (uint32_t)v36] = v58[0];
    *(uint32_t *)&v37[8 * (uint32_t)v36 + 4] = v30;
    --v54;
    while ( v54 );
    DeleteAndZero((void **)&i);
    for ( i = 0; i < 256; ++i )
    String::Assign((char **)&v55, 0);
    v38 = FromStringInt((char **)v58, i);
    v39 = (int)INIClass::ReadString(a2, (char **)a3, v38, (char **)&v55, (int)&v51) > 0;
    DeleteAndZero(v58);
    DeleteAndZero((void **)&v55);
    if ( v39 )
    v40 = (char **)__2_YAPAXI_Z(0xCu);
    v41 = v40;
    if ( v40 )
    String::AssignFromPtr(v40, (const char **)&v51);
    *((uint8_t *)v41 + 4) = i;
    v42 = v9[2];
    if ( (int)v9[4] < (int)v42
    || (*((uint8_t *)v9 + 13) || !v42)
    && (v43 = (int)v9[5], v43 > 0)
    && (*((unsigned __int8 (__thiscall **)(char **, char *, uint32_t))*v9 + 2))(v9, &v42[v43], 0) )
    v44 = v9[4];
    v45 = v9[1];
    v9[4] = v44 + 1;
    *(uint32_t *)&v45[4 * (uint32_t)v44] = v41;
    DeleteAndZero(&v59);
    DeleteAndZero::Alt(&v56);
    DeleteAndZero(&v51);
    return v53;
}

