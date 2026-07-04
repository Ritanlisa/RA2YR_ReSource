#include "housetypeclass.hpp"

char __userpurge HouseTypeClass::LoadFromINI@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
    unsigned __int8 ***v3; // esi
    unsigned int v5; // ecx
    unsigned int v6; // edx
    unsigned int v7; // eax
    unsigned int v8; // ecx
    double v9; // rax
    unsigned int v10; // ecx
    unsigned int v11; // edx
    unsigned int v12; // eax
    unsigned int v13; // ecx
    double v14; // rax
    char v15; // cl
    char Bool_Overwrite; // al
    char v17; // al
    char v18; // cl
    char v19; // al
    double v20; // st7
    double v21; // st7
    double v22; // st7
    double v23; // st7
    double v24; // st7
    double v25; // st7
    double v26; // st7
    double v27; // st7
    double v28; // st7
    double v29; // st7
    double v30; // st7
    double v31; // st7
    double v32; // st7
    double v33; // st7
    double v34; // st7
    double v35; // st7
    double v36; // st7
    double v37; // st7
    double v38; // st7
    char *i; // eax
    int v40; // edx
    int v41; // ecx
    void *v42; // eax
    char *j; // eax
    int Alt; // edi
    int v45; // eax
    int v46; // edx
    int v47; // ecx
    void *v48; // eax
    char *k; // eax
    int v50; // edi
    int v51; // eax
    int v52; // edx
    int v53; // ecx
    void *v54; // eax
    int v55; // edi
    int v56; // eax
    int v57; // ecx
    int v58; // eax
    int v59; // edx
    int v60; // eax
    int v61; // edx
    int v62; // eax
    int v63; // esi
    int v64; // eax
    int v65; // ecx
    int v66; // esi
    int v67; // ecx
    int v68; // eax
    int v69; // edx
    char v71; // [esp+4h] [ebp-F4h]
    char Destination[24]; // [esp+18h] [ebp-E0h] BYREF
    int v73; // [esp+30h] [ebp-C8h]
    char v74[2]; // [esp+36h] [ebp-C2h] BYREF
    void **v75; // [esp+38h] [ebp-C0h] BYREF
    void *v76; // [esp+3Ch] [ebp-BCh]
    char v77; // [esp+45h] [ebp-B3h]
    int v78; // [esp+48h] [ebp-B0h]
    int v79; // [esp+4Ch] [ebp-ACh]
    int v80; // [esp+50h] [ebp-A8h]
    int v81; // [esp+54h] [ebp-A4h] BYREF
    char Source[32]; // [esp+58h] [ebp-A0h] BYREF
    char String[128]; // [esp+78h] [ebp-80h] BYREF
    v3 = a3;
    INIClass::ResetSection(a3);
    if ( !AbstractTypeClass::LoadFromINI(a1, a3) )
    return 0;
    INIClass::GetString(a3, (unsigned __int8 *)(a1 + 36), (unsigned __int8 *)aSuffix, &g_INI_DefaultBuffer, Source, 4);
    if ( strlen(Source) )
    strcpy((char *)(a1 + 416), Source);
    v3 = a3;
    INIClass::GetString(
    v3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aParentcountry,
    (char *)(a1 + 36),
    Source,
    25);
    if ( Source )
    strncpy(Destination, Source, 0x18u);
    LOBYTE(v73) = 0;
    else
    Destination[0] = (unsigned __int8)Source;
    if ( Destination != (char *)(a1 + 152) )
    qmemcpy((void *)(a1 + 152), Destination, 0x18u);
    *(uint8_t *)(a1 + 176) = v73;
    v3 = a3;
    *(uint32_t *)(a1 + 192) = BuildingTypeClass::FindAnimByName(
    v3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)g_INI_Key_Color,
    *(uint32_t *)(a1 + 192));
    Source[0] = *(uint8_t *)(a1 + 420);
    Source[1] = 0;
    INIClass::GetString(v3, (unsigned __int8 *)(a1 + 36), (unsigned __int8 *)aPrefix, Source, v74, 2);
    *(uint8_t *)(a1 + 420) = v74[0];
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aFirepower, *(double *)(a1 + 200));
    v5 = *(uint32_t *)(a1 + 212);
    v6 = *(uint32_t *)(a1 + 208);
    *(double *)(a1 + 200) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aGroundspeed, COERCE_DOUBLE(__PAIR64__(v5, v6)));
    v7 = *(uint32_t *)(a1 + 220);
    v8 = *(uint32_t *)(a1 + 216);
    *(double *)(a1 + 208) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aAirspeed, COERCE_DOUBLE(__PAIR64__(v7, v8)));
    v9 = *(double *)(a1 + 224);
    *(double *)(a1 + 216) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Armor, v9);
    v10 = *(uint32_t *)(a1 + 236);
    v11 = *(uint32_t *)(a1 + 232);
    *(double *)(a1 + 224) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)&off_825478, COERCE_DOUBLE(__PAIR64__(v10, v11)));
    v12 = *(uint32_t *)(a1 + 244);
    v13 = *(uint32_t *)(a1 + 240);
    *(double *)(a1 + 232) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Cost, COERCE_DOUBLE(__PAIR64__(v12, v13)));
    v14 = *(double *)(a1 + 248);
    *(double *)(a1 + 240) = a2;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtime, v14);
    v15 = *(uint8_t *)(a1 + 421);
    *(double *)(a1 + 248) = a2;
    Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aMultiplay, v15);
    v71 = *(uint8_t *)(a1 + 422);
    *(uint8_t *)(a1 + 421) = Bool_Overwrite;
    *(uint8_t *)(a1 + 422) = INIClass::ReadBool_Overwrite(a1 + 36, aMultiplaypassi, v71);
    v17 = INIClass::ReadBool_Overwrite(a1 + 36, aWallowner, *(uint8_t *)(a1 + 423));
    v18 = *(uint8_t *)(a1 + 424);
    *(uint8_t *)(a1 + 423) = v17;
    v19 = INIClass::ReadBool_Overwrite(a1 + 36, aSmartai, v18);
    v20 = *(float *)(a1 + 256);
    *(uint8_t *)(a1 + 424) = v19;
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aArmorinfantrym, v20);
    *(float *)(a1 + 256) = v20;
    v21 = *(float *)(a1 + 260);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aArmorunitsmult, v21);
    *(float *)(a1 + 260) = v21;
    v22 = *(float *)(a1 + 264);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aArmoraircraftm, v22);
    *(float *)(a1 + 264) = v22;
    v23 = *(float *)(a1 + 268);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aArmorbuildings, v23);
    *(float *)(a1 + 268) = v23;
    v24 = *(float *)(a1 + 272);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aArmordefensesm, v24);
    *(float *)(a1 + 272) = v24;
    v25 = *(float *)(a1 + 276);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aCostinfantrymu, v25);
    *(float *)(a1 + 276) = v25;
    v26 = *(float *)(a1 + 280);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aCostunitsmult, v26);
    *(float *)(a1 + 280) = v26;
    v27 = *(float *)(a1 + 284);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aCostaircraftmu, v27);
    *(float *)(a1 + 284) = v27;
    v28 = *(float *)(a1 + 288);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aCostbuildingsm, v28);
    *(float *)(a1 + 288) = v28;
    v29 = *(float *)(a1 + 292);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aCostdefensesmu, v29);
    *(float *)(a1 + 292) = v29;
    v30 = *(float *)(a1 + 296);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aSpeedinfantrym, v30);
    *(float *)(a1 + 296) = v30;
    v31 = *(float *)(a1 + 300);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aSpeedunitsmult, v31);
    *(float *)(a1 + 300) = v31;
    v32 = *(float *)(a1 + 304);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aSpeedaircraftm, v32);
    *(float *)(a1 + 304) = v32;
    v33 = *(float *)(a1 + 308);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtimeinfan, v33);
    *(float *)(a1 + 308) = v33;
    v34 = *(float *)(a1 + 312);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtimeunits, v34);
    *(float *)(a1 + 312) = v34;
    v35 = *(float *)(a1 + 316);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtimeaircr, v35);
    *(float *)(a1 + 316) = v35;
    v36 = *(float *)(a1 + 320);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtimebuild, v36);
    *(float *)(a1 + 320) = v36;
    v37 = *(float *)(a1 + 324);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtimedefen, v37);
    *(float *)(a1 + 324) = v37;
    v38 = *(float *)(a1 + 328);
    INIClass::ReadDouble_Overwrite(a1 + 36, (int)aIncomemult, v38);
    *(float *)(a1 + 328) = v38;
    if ( INIClass::GetString(
    v3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aVeteraninfantr,
    &g_INI_DefaultBuffer,
    String,
    128) )
    InfantryTypeVector::Construct(&v75, 0, 0);
    v75 = &TypeList<InfantryTypeClass const *>::`vftable';
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) )
    if ( !*i )
    break;
    v81 = KeywordType::FindOrCreate2(i);
    if ( v81 )
    InfantryTypeVector::Add(&v75, &v81);
    HouseTypeClass::readAllowedUnits(&v75);
    *(uint32_t *)Destination = &TypeList<InfantryTypeClass const *>::`vftable';
    v75 = &VectorClass<InfantryTypeClass const *>::`vftable';
    Vector::Cleanup((int)&v75);
    else
    HouseTypeClass::readAllowedUnits(a1 + 332);
    *(uint32_t *)Destination = &TypeList<InfantryTypeClass const *>::`vftable';
    HouseTypeClass::readStartInfantry(Destination);
    v40 = *(uint32_t *)&Destination[16];
    v41 = v73;
    *(uint32_t *)(a1 + 352) = *(uint32_t *)&Destination[20];
    v42 = *(void **)&Destination[4];
    *(uint32_t *)(a1 + 348) = v40;
    *(uint32_t *)(a1 + 356) = v41;
    *(uint32_t *)Destination = &VectorClass<InfantryTypeClass const *>::`vftable';
    if ( v42 && Destination[13] )
    __3_YAXPAX_Z(v42);
    if ( INIClass::GetString(
    v3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aVeteranunits,
    &g_INI_DefaultBuffer,
    String,
    128) )
    UnitTypeVector::Construct(Destination, 0, 0);
    *(uint32_t *)Destination = &TypeList<UnitTypeClass const *>::`vftable';
    for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) )
    if ( !*j )
    break;
    Alt = BuildingTypeClass::FindOrCreateAlt(j);
    if ( Alt
    && (*(int *)&Destination[16] < *(int *)&Destination[8]
    || (Destination[13] || !*(uint32_t *)&Destination[8])
    && *(int *)&Destination[20] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, uint32_t))(*(uint32_t *)Destination + 8))(
    Destination,
    *(uint32_t *)&Destination[8] + *(uint32_t *)&Destination[20],
    0)) )
    v45 = (*(uint32_t *)&Destination[16])++;
    *(uint32_t *)(*(uint32_t *)&Destination[4] + 4 * v45) = Alt;
    TypeList::CopyConstructor(&v75, Destination);
    *(uint32_t *)Destination = &VectorClass<UnitTypeClass const *>::`vftable';
    Vector::Destructor((int)Destination);
    else
    TypeList::CopyConstructor(&v75, (uint32_t *)(a1 + 360));
    VectorClass::CopyConstructor((uint32_t *)(a1 + 360), &v75);
    v46 = v78;
    v47 = v80;
    *(uint32_t *)(a1 + 380) = v79;
    v48 = v76;
    *(uint32_t *)(a1 + 376) = v46;
    *(uint32_t *)(a1 + 384) = v47;
    v75 = &VectorClass<UnitTypeClass const *>::`vftable';
    if ( v48 && v77 )
    __3_YAXPAX_Z(v48);
    if ( INIClass::GetString(
    v3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aVeteranaircraf,
    &g_INI_DefaultBuffer,
    String,
    128) )
    HouseTypeClass::readDefaultAlly(0, 0);
    *(uint32_t *)Destination = &TypeList<AircraftTypeClass const *>::`vftable';
    for ( k = strtok(String, Delimiter); k; k = strtok(0, Delimiter) )
    if ( !*k )
    break;
    v50 = KeywordClass::FindOrCreate(k);
    if ( v50
    && (*(int *)&Destination[16] < *(int *)&Destination[8]
    || (Destination[13] || !*(uint32_t *)&Destination[8])
    && *(int *)&Destination[20] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, uint32_t))(*(uint32_t *)Destination + 8))(
    Destination,
    *(uint32_t *)&Destination[8] + *(uint32_t *)&Destination[20],
    0)) )
    v51 = (*(uint32_t *)&Destination[16])++;
    *(uint32_t *)(*(uint32_t *)&Destination[4] + 4 * v51) = v50;
    HouseTypeClass::readParaDropTypes(Destination);
    *(uint32_t *)Destination = &VectorClass<AircraftTypeClass const *>::`vftable';
    VectorClass::ClearAndFree4((int)Destination);
    else
    HouseTypeClass::readParaDropTypes(a1 + 388);
    HouseTypeClass::readBaseDefense(&v75);
    v52 = v78;
    v53 = v80;
    *(uint32_t *)(a1 + 408) = v79;
    v54 = v76;
    *(uint32_t *)(a1 + 404) = v52;
    *(uint32_t *)(a1 + 412) = v53;
    v75 = &VectorClass<AircraftTypeClass const *>::`vftable';
    if ( v54 && v77 )
    __3_YAXPAX_Z(v54);
    v55 = *(uint32_t *)(a1 + 188);
    v56 = HouseTypeClass::loadCountryData(a1 + 36, g_INI_Key_Side, v55);
    *(uint32_t *)(a1 + 188) = v56;
    if ( v56 != v55 )
    if ( v55 != -1 )
    v57 = *(uint32_t *)(a1 + 184);
    v58 = *((uint32_t *)dword_8B4124 + v55);
    v59 = *(uint32_t *)(v58 + 168);
    v60 = v58 + 152;
    if ( v57 < v59 )
    v61 = v59 - 1;
    for ( *(uint32_t *)(v60 + 16) = v61;
    v57 < *(uint32_t *)(v60 + 16);
    *(uint32_t *)(*(uint32_t *)(v60 + 4) + 4 * v57 - 4) = *(uint32_t *)(*(uint32_t *)(v60 + 4) + 4 * v57) )
    ++v57;
    v62 = *(uint32_t *)(a1 + 188);
    if ( v62 != -1 )
    v63 = *((uint32_t *)dword_8B4124 + v62);
    v64 = *(uint32_t *)(v63 + 160);
    v65 = *(uint32_t *)(v63 + 168);
    v66 = v63 + 152;
    if ( v65 < v64
    || (*(uint8_t *)(v66 + 13) || !v64)
    && (v67 = *(uint32_t *)(v66 + 20), v67 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v66 + 8))(v66, v67 + v64, 0) )
    v68 = *(uint32_t *)(v66 + 16);
    v69 = *(uint32_t *)(v66 + 4);
    *(uint32_t *)(v66 + 16) = v68 + 1;
    *(uint32_t *)(v69 + 4 * v68) = *(uint32_t *)(a1 + 184);
    return 1;
}

// 0x00512170
int  HouseTypeClass::ProcessPower(int this, int *a2)
{
    int v3; // edx
    int v4; // eax
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 184));
    Power::TimerProcess(*(uint32_t *)(this + 188));
    Power::TimerProcess(*(uint32_t *)(this + 192));
    Checksummer::Add_double(*(uint32_t *)(this + 200), *(uint32_t *)(this + 204));
    Checksummer::Add_double(*(uint32_t *)(this + 208), *(uint32_t *)(this + 212));
    Checksummer::Add_double(*(uint32_t *)(this + 216), *(uint32_t *)(this + 220));
    Checksummer::Add_double(*(uint32_t *)(this + 224), *(uint32_t *)(this + 228));
    Checksummer::Add_double(*(uint32_t *)(this + 232), *(uint32_t *)(this + 236));
    Checksummer::Add_double(*(uint32_t *)(this + 240), *(uint32_t *)(this + 244));
    Checksummer::Add_double(*(uint32_t *)(this + 248), *(uint32_t *)(this + 252));
    Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 416), strlen((const char *)(this + 416)));
    LOBYTE(v3) = *(uint8_t *)(this + 420);
    v4 = Power::FinalizeDrain(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 421);
    return Power::FlagProcess(a2, v4);
}

int __stdcall HouseTypeClass::_vt04(int a1)
{
    return 0;
}

// 0x00512290
int __stdcall HouseTypeClass::SaveLoad_Prefix(uint32_t *i, int a2)
{
    uint32_t *v2; // edi
    uint32_t *v3; // ebx
    int v4; // esi
    int result; // eax
    int j; // ebx
    int k; // ebx
    int m; // esi
    int n; // esi
    int ii; // esi
    int v11; // [esp+58h] [ebp-4h] BYREF
    v2 = i;
    v3 = i + 83;
    (*(void (__thiscall **)(uint32_t *))(i[83] + 12))(i + 83);
    (*(void (__thiscall **)(uint32_t *))(v2[90] + 12))(v2 + 90);
    (*(void (__thiscall **)(uint32_t *))(v2[97] + 12))(v2 + 97);
    v4 = a2;
    result = AbstractClass::SaveLoad_Prefix_0(v2, a2);
    if ( result >= 0 )
    if ( v2 )
    HouseTypeClass::loadVeteranWeapons(v2, (int)&i);
    if ( v3 )
    InfantryTypeVector::Construct(v3, 0, 0);
    *v3 = &TypeList<InfantryTypeClass const *>::`vftable';
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &a2, 4, 0);
    for ( i = 0; (int)i < a2; i = (uint32_t *)((char *)i + 1) )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v11, 4, 0);
    InfantryTypeVector::Add(v3, &v11);
    if ( v2 != (uint32_t *)-360 )
    UnitTypeVector::Construct(v2 + 90, 0, 0);
    v2[90] = &TypeList<UnitTypeClass const *>::`vftable';
    (*(void (__stdcall **)(int, uint32_t **, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( j = 0; j < (int)i; ++j )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &a2, 4, 0);
    VectorClass::PushBack(v2 + 90, &a2);
    if ( v2 != (uint32_t *)-388 )
    HouseTypeClass::readStartUnit(v2 + 97);
    (*(void (__stdcall **)(int, uint32_t **, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( k = 0; k < (int)i; ++k )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &a2, 4, 0);
    HouseTypeClass::readPowerPlants(v2 + 97, &a2);
    for ( m = 0; m < v2[87]; ++m )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2[84] + 4 * m));
    for ( n = 0; n < v2[94]; ++n )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2[91] + 4 * n));
    for ( ii = 0; ii < v2[101]; ++ii )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2[98] + 4 * ii));
    return 0;
    return result;
}

// 0x00512480
int __userpurge HouseTypeClass::SaveLoad_Prefix_0@<eax>(int a1@<ebx>, int *a2, int *a3, int a4, int a5)
{
    int result; // eax
    int v6; // edx
    int i; // ebx
    int v8; // edx
    int j; // ebx
    int v10; // edx
    int k; // ebx
    result = AbstractClass::SaveLoad_Prefix(a2, a3, a4);
    if ( result >= 0 )
    v6 = *a3;
    a4 = a2[87];
    (*(void (__stdcall **)(int *, int *, int, uint32_t, int))(v6 + 16))(a3, &a4, 4, 0, a1);
    for ( i = 0; i < a5; ++i )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[84] + 4 * i, 4, 0);
    v8 = *a3;
    a5 = a2[94];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v8 + 16))(a3, &a5, 4, 0);
    for ( j = 0; j < a5; ++j )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[91] + 4 * j, 4, 0);
    v10 = *a3;
    a5 = a2[101];
    (*(void (__stdcall **)(int *, int *, int))(v10 + 16))(a3, &a5, 4);
    for ( k = 0; k < a4; ++k )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a3 + 16))(a3, a2[98] + 4 * k, 4, 0);
    return 0;
    return result;
}

int __stdcall HouseTypeClass::_vt07(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    a2[1] = 0;
    *a2 = 436;
    return 0;
}

int __stdcall HouseTypeClass::_vt00(int a1, const void *a2, uint32_t *a3)
{
    int v4; // ecx
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &IID_IPersist, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &IID_IPersistStream, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &IID_IRTTITypeInfo, 0x10u) )
    if ( a1 )
    v4 = a1 + 4;
    else
    v4 = 0;
    *a3 = v4;
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(uint32_t *)a1 + 4))(a1);
    return 0;
}

int __stdcall HouseTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 500447528;
    a2[1] = 298976363;
    a2[2] = 1610654892;
    a2[3] = -1252326136;
    return 0;
}

int HouseTypeClass::_vt11()
{
    return 14;
}

int HouseTypeClass::_vt12()
{
    return 432;
}

int __stdcall HouseTypeClass::_vt01(int a1)
{
    return 1;
}

int __stdcall HouseTypeClass::_vt02(int a1)
{
    return 1;
}

void ** HouseTypeClass::Destructor(void **Block, char a2)
{
    int v3; // eax
    void *v4; // eax
    void *v5; // eax
    void *v6; // eax
    void **v8; // [esp+4h] [ebp-4h] BYREF
    *Block = &HouseTypeClass::`vftable';
    *(Block + 1) = &HouseTypeClass::`vftable';
    *(Block + 2) = &HouseTypeClass::`vftable';
    *(Block + 3) = &HouseTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block);
    v8 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83C98 + 16))(&dword_A83C98, &v8);
    if ( v3 != -1 && v3 < g_SuperWeaponTypeArray && v3 < --g_SuperWeaponTypeArray )
    do
    ++v3;
    *((uint32_t *)g_SuperWeaponTypeCount + v3 - 1) = *((uint32_t *)g_SuperWeaponTypeCount + v3);
    while ( v3 < g_SuperWeaponTypeArray );
    v4 = *(Block + 98);
    *(Block + 97) = &VectorClass<AircraftTypeClass const *>::`vftable';
    if ( v4 && *((uint8_t *)Block + 401) )
    __3_YAXPAX_Z(v4);
    *(Block + 98) = 0;
    *((uint8_t *)Block + 401) = 0;
    *(Block + 99) = 0;
    v5 = *(Block + 91);
    *(Block + 90) = &VectorClass<UnitTypeClass const *>::`vftable';
    if ( v5 && *((uint8_t *)Block + 373) )
    __3_YAXPAX_Z(v5);
    *(Block + 91) = 0;
    *((uint8_t *)Block + 373) = 0;
    *(Block + 92) = 0;
    v6 = *(Block + 84);
    *(Block + 83) = &VectorClass<InfantryTypeClass const *>::`vftable';
    if ( v6 && *((uint8_t *)Block + 345) )
    __3_YAXPAX_Z(v6);
    *(Block + 84) = 0;
    *((uint8_t *)Block + 345) = 0;
    *(Block + 85) = 0;
    AbstractTypeClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int __stdcall HouseTypeClass::sub_5139E0(int a1, const void *a2, uint32_t *a3)
{
    return HouseTypeClass::QueryInterface(a1 - 4, a2, a3);
}

int __stdcall HouseTypeClass::sub_5139F0(int a1)
{
    return HouseTypeClass::AddRef(a1 - 4);
}

int __stdcall HouseTypeClass::sub_513A00(int a1)
{
    return HouseTypeClass::Release(a1 - 4);
}

