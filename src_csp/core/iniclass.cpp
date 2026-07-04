#include "iniclass.hpp"

int  INIClass::GetPipIdx(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
    int v4; // edi
    const void **v5; // esi
    char Destination[32]; // [esp+8h] [ebp-20h] BYREF
    INIClass::GetString(this, a2, a3, (&off_81B958)[2 * a4], Destination, 32);
    v4 = 0;
    v5 = (const void **)&off_81B958;
    while ( _strcmpi(Destination, *v5) )
    v5 += 2;
    ++v4;
    if ( (int)v5 >= (int)&off_81B9B0 )
    return 1;
    return dword_81B95C[2 * v4];
}

int  INIClass::LookupEnum(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
    int v4; // edi
    const void **v5; // esi
    char Destination[32]; // [esp+8h] [ebp-20h] BYREF
    INIClass::GetString(this, a2, a3, (&off_81B9D8)[2 * a4], Destination, 32);
    v4 = 0;
    v5 = (const void **)&off_81B9D8;
    while ( _strcmpi(Destination, *v5) )
    v5 += 2;
    ++v4;
    if ( (int)v5 >= (int)&off_81BA88 )
    return 0;
    return `typeinfo for'x1[2 * v4];
}

int  INIClass::ReadStringValue(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
    char Destination[128]; // [esp+0h] [ebp-80h] BYREF
    if ( INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) )
    return INIClass::readSection(Destination);
    else
    return a4;
}

char * INIClass::ClearContents(int this)
{
    int v2; // ebp
    int v3; // esi
    int v4; // eax
    int v5; // eax
    int v6; // ebx
    int v7; // eax
    int v8; // ecx
    void (__thiscall ***v9)(uint32_t, int); // ecx
    int v10; // eax
    int i; // ebp
    int v12; // ebx
    int v13; // eax
    int v14; // ecx
    void (__thiscall ***v15)(uint32_t, int); // ecx
    int v16; // ecx
    int v17; // eax
    void *v18; // edx
    int v19; // esi
    int v20; // eax
    int v21; // ecx
    int v22; // esi
    void *v23; // eax
    void *v24; // eax
    int v26; // [esp+8h] [ebp-8h]
    int v27; // [esp+8h] [ebp-8h]
    void *v28; // [esp+Ch] [ebp-4h]
    v2 = 0;
    if ( *(uint32_t *)(this + 88) )
    v26 = 0;
    if ( *(int *)(this + 92) > 0 )
    v3 = 0;
    while ( 1 )
    v4 = v3 + *(uint32_t *)(this + 88);
    if ( *(uint32_t *)(v4 + 12) )
    __3_YAXPAX_Z(*(void **)(v4 + 4));
    __3_YAXPAX_Z(*(void **)(v3 + *(uint32_t *)(this + 88) + 64));
    __3_YAXPAX_Z(*(void **)(v3 + *(uint32_t *)(this + 88) + 12));
    v5 = *(uint32_t *)(this + 88);
    if ( *(int *)(v3 + v5 + 56) > 0 )
    do
    v6 = 0;
    if ( *(int *)(*(uint32_t *)(*(uint32_t *)(v3 + v5 + 44) + 4 * v2) + 16) > 0 )
    v7 = *(uint32_t *)(*(uint32_t *)(v3 + v5 + 44) + 4 * v2);
    do
    __3_YAXPAX_Z(*(void **)(*(uint32_t *)(v7 + 4) + 4 * v6++));
    v7 = *(uint32_t *)(*(uint32_t *)(v3 + *(uint32_t *)(this + 88) + 44) + 4 * v2);
    while ( v6 < *(uint32_t *)(v7 + 16) );
    v8 = *(uint32_t *)(*(uint32_t *)(v3 + *(uint32_t *)(this + 88) + 44) + 4 * v2);
    (*(void (__thiscall **)(int))(*(uint32_t *)v8 + 12))(v8);
    v9 = *(void (__thiscall ****)(uint32_t, int))(*(uint32_t *)(v3 + *(uint32_t *)(this + 88) + 44) + 4 * v2);
    if ( v9 )
    (**v9)(v9, 1);
    v5 = *(uint32_t *)(this + 88);
    ++v2;
    while ( v2 < *(uint32_t *)(v3 + v5 + 56) );
    (*(void (__thiscall **)(int))(*(uint32_t *)(v3 + *(uint32_t *)(this + 88) + 40) + 12))(v3 + *(uint32_t *)(this + 88) + 40);
    v10 = *(uint32_t *)(this + 88);
    for ( i = 0; i < *(uint32_t *)(v3 + v10 + 32); ++i )
    v12 = 0;
    if ( *(int *)(*(uint32_t *)(*(uint32_t *)(v3 + v10 + 20) + 4 * i) + 16) > 0 )
    v13 = *(uint32_t *)(*(uint32_t *)(v3 + v10 + 20) + 4 * i);
    do
    __3_YAXPAX_Z(*(void **)(*(uint32_t *)(v13 + 4) + 4 * v12++));
    v13 = *(uint32_t *)(*(uint32_t *)(v3 + *(uint32_t *)(this + 88) + 20) + 4 * i);
    while ( v12 < *(uint32_t *)(v13 + 16) );
    v14 = *(uint32_t *)(*(uint32_t *)(v3 + *(uint32_t *)(this + 88) + 20) + 4 * i);
    (*(void (__thiscall **)(int))(*(uint32_t *)v14 + 12))(v14);
    v15 = *(void (__thiscall ****)(uint32_t, int))(*(uint32_t *)(v3 + *(uint32_t *)(this + 88) + 20) + 4 * i);
    if ( v15 )
    (**v15)(v15, 1);
    v10 = *(uint32_t *)(this + 88);
    (*(void (__thiscall **)(int))(*(uint32_t *)(v3 + *(uint32_t *)(this + 88) + 16) + 12))(v3 + *(uint32_t *)(this + 88) + 16);
    v3 += 76;
    if ( ++v26 >= *(uint32_t *)(this + 92) )
    break;
    v2 = 0;
    v16 = *(uint32_t *)(this + 88);
    if ( v16 )
    v17 = *(uint32_t *)(v16 - 4);
    v18 = (void *)(v16 - 4);
    v28 = (void *)(v16 - 4);
    v19 = 19 * v17;
    v20 = v17 - 1;
    v21 = v16 + 4 * v19;
    if ( v20 >= 0 )
    v22 = v21 + 44;
    v27 = v20 + 1;
    do
    v22 -= 76;
    DeleteAndZero((void **)(v22 + 28));
    DeleteAndZero((void **)(v22 + 24));
    v23 = *(void **)v22;
    *(uint32_t *)(v22 - 4) = &VectorClass<DynamicVectorClass<char *> *>::`vftable';
    if ( v23 && *(uint8_t *)(v22 + 9) )
    __3_YAXPAX_Z(v23);
    *(uint32_t *)v22 = 0;
    *(uint8_t *)(v22 + 9) = 0;
    *(uint32_t *)(v22 + 4) = 0;
    v24 = *(void **)(v22 - 24);
    *(uint32_t *)(v22 - 28) = &VectorClass<DynamicVectorClass<char *> *>::`vftable';
    if ( v24 && *(uint8_t *)(v22 - 15) )
    __3_YAXPAX_Z(v24);
    *(uint32_t *)(v22 - 24) = 0;
    *(uint8_t *)(v22 - 15) = 0;
    *(uint32_t *)(v22 - 20) = 0;
    --v27;
    while ( v27 );
    v18 = v28;
    __3_YAXPAX_Z(v18);
    *(uint32_t *)(this + 88) = 0;
    *(uint8_t *)(this + 96) = 0;
    return HashTable::DestroyHashTableINIClass((void **)this);
}

int  INIClass::ReadInt_Overwrite(int this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
    unsigned __int8 *v4; // ebp
    unsigned __int8 *v6; // edx
    int v7; // esi
    int v8; // eax
    int v9; // ecx
    int v10; // esi
    uint32_t *v11; // ecx
    size_t v12; // eax
    uint32_t *v13; // ecx
    size_t v14; // eax
    int *v15; // esi
    int v16; // edi
    uint32_t *v17; // eax
    size_t v18; // eax
    int *v19; // esi
    int v21; // esi
    const char *v22; // edx
    unsigned int v23; // [esp+8h] [ebp-Ch] BYREF
    int v24; // [esp+Ch] [ebp-8h]
    int v25; // [esp+10h] [ebp-4h]
    v4 = a2;
    if ( a2 )
    v6 = a3;
    if ( a3 )
    if ( a2 == *(unsigned __int8 **)(this + 4) )
    v7 = *(uint32_t *)(this + 8);
    LABEL_5:
    if ( v7 )
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v8 = Checksummer::Add_Buffer(&v23, v6, strlen((const char *)v6));
    v9 = *(uint32_t *)(v7 + 48);
    v10 = v7 + 44;
    a3 = (unsigned __int8 *)v8;
    if ( v9 )
    v11 = *(uint32_t **)(v10 + 16);
    if ( v11 && *v11 == v8 )
    LABEL_11:
    if ( *(uint32_t *)(v10 + 4) )
    v13 = *(uint32_t **)(v10 + 16);
    if ( v13 && *v13 == v8 )
    goto LABEL_16;
    v14 = HashTable::BinarySearchAlt((char **)v10, (int *)&a3);
    if ( v14 )
    *(uint32_t *)(v10 + 16) = v14;
    LABEL_16:
    v15 = (int *)(*(uint32_t *)(v10 + 16) + 4);
    LABEL_29:
    v21 = *v15;
    if ( v21 )
    v22 = *(const char **)(v21 + 16);
    if ( v22 )
    if ( *v22 == 36 )
    sscanf(v22, off_825BB8, &a4);
    return a4;
    if ( tolower(v22[strlen(*(const char **)(v21 + 16)) - 1]) == 104 )
    sscanf(*(const char *const *)(v21 + 16), off_825BB4, &a4);
    return a4;
    return atoi(*(const char **)(v21 + 16));
    return a4;
    v15 = (int *)&unk_B78830;
    goto LABEL_29;
    v12 = HashTable::BinarySearchAlt((char **)v10, (int *)&a3);
    if ( v12 )
    *(uint32_t *)(v10 + 16) = v12;
    v8 = (int)a3;
    goto LABEL_11;
    return a4;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v16 = Checksummer::Add_Buffer(&v23, a2, strlen((const char *)a2));
    a2 = (unsigned __int8 *)v16;
    if ( *(uint32_t *)(this + 44) )
    v17 = *(uint32_t **)(this + 56);
    if ( !v17 || *v17 != v16 )
    v18 = SortedArray::BinarySearch((char **)(this + 40), (int *)&a2);
    if ( !v18 )
    goto LABEL_27;
    *(uint32_t *)(this + 56) = v18;
    a2 = (unsigned __int8 *)v16;
    if ( HashTable::BinarySearch(this + 40, (int *)&a2) )
    v19 = (int *)(*(uint32_t *)(this + 56) + 4);
    else
    v19 = (int *)&unk_B7882C;
    v7 = *v19;
    if ( v7 )
    v6 = a3;
    *(uint32_t *)(this + 8) = v7;
    *(uint32_t *)(this + 4) = v4;
    goto LABEL_5;
    LABEL_27:
    *(uint32_t *)(this + 4) = 0;
    *(uint32_t *)(this + 8) = 0;
    return a4;
    return a4;
}

double  INIClass::ReadDouble_Overwrite(int this, unsigned __int8 *a2, unsigned __int8 *a3, double a4)
{
    unsigned __int8 *v4; // ebp
    unsigned __int8 *v6; // edx
    int v7; // esi
    int v8; // eax
    int v9; // ecx
    int v10; // esi
    uint32_t *v11; // ecx
    size_t v12; // eax
    uint32_t *v13; // ecx
    size_t v14; // eax
    int *v15; // esi
    unsigned __int8 *v16; // edi
    unsigned __int8 **v17; // eax
    size_t v18; // eax
    int *v19; // esi
    double result; // st7
    int v21; // esi
    const char *v22; // eax
    const char *v23; // edx
    unsigned int v24; // [esp+8h] [ebp-Ch] BYREF
    int v25; // [esp+Ch] [ebp-8h]
    int v26; // [esp+10h] [ebp-4h]
    v4 = a2;
    if ( *(float *)&a2 != 0.0 )
    v6 = a3;
    if ( a3 )
    if ( a2 == *(unsigned __int8 **)(this + 4) )
    v7 = *(uint32_t *)(this + 8);
    LABEL_5:
    if ( v7 )
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v8 = Checksummer::Add_Buffer(&v24, v6, strlen((const char *)v6));
    v9 = *(uint32_t *)(v7 + 48);
    v10 = v7 + 44;
    a3 = (unsigned __int8 *)v8;
    if ( v9 )
    v11 = *(uint32_t **)(v10 + 16);
    if ( v11 && *v11 == v8 )
    LABEL_11:
    if ( *(uint32_t *)(v10 + 4) )
    v13 = *(uint32_t **)(v10 + 16);
    if ( v13 && *v13 == v8 )
    goto LABEL_16;
    v14 = HashTable::BinarySearchAlt((char **)v10, (int *)&a3);
    if ( v14 )
    *(uint32_t *)(v10 + 16) = v14;
    LABEL_16:
    v15 = (int *)(*(uint32_t *)(v10 + 16) + 4);
    LABEL_29:
    v21 = *v15;
    if ( v21 )
    v22 = *(const char **)(v21 + 16);
    if ( v22 )
    sscanf(v22, "%f", &a2);
    v23 = *(const char **)(v21 + 16);
    a4 = *(float *)&a2;
    if ( strchr(v23, 9509) )
    return a4 * 0.01;
    return a4;
    v15 = (int *)&unk_B78830;
    goto LABEL_29;
    v12 = HashTable::BinarySearchAlt((char **)v10, (int *)&a3);
    if ( v12 )
    *(uint32_t *)(v10 + 16) = v12;
    v8 = (int)a3;
    goto LABEL_11;
    return a4;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v16 = (unsigned __int8 *)Checksummer::Add_Buffer(&v24, a2, strlen((const char *)a2));
    a2 = v16;
    if ( *(uint32_t *)(this + 44) )
    v17 = *(unsigned __int8 ***)(this + 56);
    if ( !v17 || *v17 != v16 )
    v18 = SortedArray::BinarySearch((char **)(this + 40), (int *)&a2);
    if ( !v18 )
    goto LABEL_27;
    *(uint32_t *)(this + 56) = v18;
    a2 = v16;
    if ( HashTable::BinarySearch(this + 40, (int *)&a2) )
    v19 = (int *)(*(uint32_t *)(this + 56) + 4);
    else
    v19 = (int *)&unk_B7882C;
    v7 = *v19;
    if ( v7 )
    v6 = a3;
    *(uint32_t *)(this + 8) = v7;
    *(uint32_t *)(this + 4) = v4;
    goto LABEL_5;
    LABEL_27:
    result = a4;
    *(uint32_t *)(this + 4) = 0;
    *(uint32_t *)(this + 8) = 0;
    return result;
    return a4;
}

char  INIClass::ReadBool_Overwrite(int this, unsigned __int8 *a2, unsigned __int8 *a3, char a4)
{
    unsigned __int8 *v4; // ebp
    unsigned __int8 *v6; // edx
    int v7; // esi
    int v8; // eax
    int v9; // ecx
    int v10; // esi
    uint32_t *v11; // ecx
    size_t v12; // eax
    uint32_t *v13; // ecx
    size_t v14; // eax
    int *v15; // esi
    int v16; // edi
    uint32_t *v17; // eax
    size_t v18; // eax
    int *v19; // esi
    char result; // al
    int v21; // esi
    char *v22; // esi
    unsigned int v23; // [esp+10h] [ebp-Ch] BYREF
    int v24; // [esp+14h] [ebp-8h]
    int v25; // [esp+18h] [ebp-4h]
    v4 = a2;
    if ( !a2 )
    return a4;
    v6 = a3;
    if ( !a3 )
    return a4;
    if ( a2 != *(unsigned __int8 **)(this + 4) )
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v16 = Checksummer::Add_Buffer(&v23, a2, strlen((const char *)a2));
    a2 = (unsigned __int8 *)v16;
    if ( *(uint32_t *)(this + 44) )
    v17 = *(uint32_t **)(this + 56);
    if ( !v17 || *v17 != v16 )
    v18 = SortedArray::BinarySearch((char **)(this + 40), (int *)&a2);
    if ( !v18 )
    goto LABEL_27;
    *(uint32_t *)(this + 56) = v18;
    a2 = (unsigned __int8 *)v16;
    if ( HashTable::BinarySearch(this + 40, (int *)&a2) )
    v19 = (int *)(*(uint32_t *)(this + 56) + 4);
    else
    v19 = (int *)&unk_B7882C;
    v7 = *v19;
    if ( v7 )
    v6 = a3;
    *(uint32_t *)(this + 8) = v7;
    *(uint32_t *)(this + 4) = v4;
    goto LABEL_5;
    LABEL_27:
    *(uint32_t *)(this + 4) = 0;
    *(uint32_t *)(this + 8) = 0;
    return a4;
    v7 = *(uint32_t *)(this + 8);
    LABEL_5:
    if ( !v7 )
    return a4;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v8 = Checksummer::Add_Buffer(&v23, v6, strlen((const char *)v6));
    v9 = *(uint32_t *)(v7 + 48);
    v10 = v7 + 44;
    a3 = (unsigned __int8 *)v8;
    if ( !v9 )
    return a4;
    v11 = *(uint32_t **)(v10 + 16);
    if ( v11 && *v11 == v8 )
    goto LABEL_11;
    v12 = HashTable::BinarySearchAlt((char **)v10, (int *)&a3);
    if ( !v12 )
    return a4;
    *(uint32_t *)(v10 + 16) = v12;
    v8 = (int)a3;
    LABEL_11:
    if ( !*(uint32_t *)(v10 + 4) )
    goto LABEL_29;
    v13 = *(uint32_t **)(v10 + 16);
    if ( v13 && *v13 == v8 )
    goto LABEL_16;
    v14 = HashTable::BinarySearchAlt((char **)v10, (int *)&a3);
    if ( !v14 )
    LABEL_29:
    v15 = (int *)&unk_B78830;
    goto LABEL_30;
    *(uint32_t *)(v10 + 16) = v14;
    LABEL_16:
    v15 = (int *)(*(uint32_t *)(v10 + 16) + 4);
    LABEL_30:
    v21 = *v15;
    if ( !v21 )
    return a4;
    v22 = *(char **)(v21 + 16);
    if ( !v22 )
    return a4;
    switch ( toupper(*v22) )
    case '0':
    case 'F':
    case 'N':
    result = 0;
    break;
    case '1':
    case 'T':
    case 'Y':
    result = 1;
    break;
    default:
    return a4;
    return result;
}

int * INIClass::ReadPoint2D_Overwrite(uint32_t *this, int *a2, unsigned __int8 *a3, int a4, uint32_t *a5)
{
    unsigned __int8 *v6; // ebx
    const char *v7; // edx
    int v8; // esi
    unsigned int v9; // kr04_4
    unsigned int *v10; // eax
    int v11; // esi
    int v12; // eax
    char *v13; // eax
    unsigned __int8 *v15; // edx
    int v16; // esi
    uint32_t *v17; // ecx
    unsigned __int8 *v18; // [esp-Ch] [ebp-78h]
    char *Source; // [esp+Ch] [ebp-60h]
    int v20; // [esp+10h] [ebp-5Ch] BYREF
    unsigned int v21[3]; // [esp+14h] [ebp-58h] BYREF
    uint32_t v22[3]; // [esp+20h] [ebp-4Ch] BYREF
    char Destination[64]; // [esp+2Ch] [ebp-40h] BYREF
    Source = &g_INI_DefaultBuffer;
    if ( !Destination )
    goto LABEL_18;
    v6 = a3;
    if ( !a3 )
    goto LABEL_18;
    v7 = (const char *)a4;
    if ( !a4 )
    goto LABEL_18;
    if ( a3 == (unsigned __int8 *)*(this + 1) )
    v8 = *(this + 2);
    else
    memset(v21, 0, sizeof(v21));
    v16 = Checksummer::Add_Buffer(v21, a3, strlen((const char *)a3));
    a3 = (unsigned __int8 *)v16;
    if ( !HashTable::BinarySearch((int)(this + 10), (int *)&a3)
    || (v20 = v16, (v8 = *(uint32_t *)SortedArray::FindValue((int)(this + 10), &v20)) == 0) )
    *(this + 1) = 0;
    *(this + 2) = 0;
    goto LABEL_11;
    v7 = (const char *)a4;
    *(this + 2) = v8;
    *(this + 1) = v6;
    if ( v8 )
    v9 = strlen(v7) + 1;
    v18 = (unsigned __int8 *)v7;
    v10 = KeyValuePair::Init(v22, 0);
    a4 = Checksummer::Add_Buffer(v10, v18, v9 - 1);
    v11 = v8 + 44;
    if ( SortedArray::Find(v11, &a4) )
    v12 = *(uint32_t *)SortedArray::BinarySearch2(v11, &a4);
    if ( v12 )
    v13 = *(char **)(v12 + 16);
    if ( v13 )
    Source = v13;
    LABEL_11:
    if ( Source )
    strncpy(Destination, Source, 0x40u);
    Destination[63] = 0;
    String::Trim(Destination);
    if ( strlen(Destination) )
    sscanf(Destination, "%d,%d", &a4, &a3);
    v15 = a3;
    *a2 = a4;
    a2[1] = (int)v15;
    return a2;
    LABEL_18:
    v17 = a5;
    *a2 = *a5;
    a2[1] = v17[1];
    return a2;
}

int * INIClass::ReadPoint3D_Overwrite(uint32_t *this, int *a2, unsigned __int8 *a3, int a4, uint32_t *a5)
{
    unsigned __int8 *v6; // ebx
    const char *v7; // edx
    int v8; // esi
    unsigned int v9; // kr04_4
    unsigned int *v10; // eax
    int v11; // esi
    int v12; // eax
    char *v13; // eax
    unsigned __int8 *v15; // edx
    uint32_t *v16; // esi
    int v17; // esi
    uint32_t *v18; // ecx
    unsigned __int8 *v19; // [esp-8h] [ebp-78h]
    char *Source; // [esp+10h] [ebp-60h]
    int v21; // [esp+14h] [ebp-5Ch] BYREF
    unsigned int v22[3]; // [esp+18h] [ebp-58h] BYREF
    uint32_t v23[3]; // [esp+24h] [ebp-4Ch] BYREF
    char Destination[64]; // [esp+30h] [ebp-40h] BYREF
    Source = &g_INI_DefaultBuffer;
    if ( !Destination )
    goto LABEL_18;
    v6 = a3;
    if ( !a3 )
    goto LABEL_18;
    v7 = (const char *)a4;
    if ( !a4 )
    goto LABEL_18;
    if ( a3 == (unsigned __int8 *)*(this + 1) )
    v8 = *(this + 2);
    else
    memset(v22, 0, sizeof(v22));
    v17 = Checksummer::Add_Buffer(v22, a3, strlen((const char *)a3));
    a3 = (unsigned __int8 *)v17;
    if ( !HashTable::BinarySearch((int)(this + 10), (int *)&a3)
    || (v21 = v17, (v8 = *(uint32_t *)SortedArray::FindValue((int)(this + 10), &v21)) == 0) )
    *(this + 1) = 0;
    *(this + 2) = 0;
    goto LABEL_11;
    v7 = (const char *)a4;
    *(this + 2) = v8;
    *(this + 1) = v6;
    if ( v8 )
    v9 = strlen(v7) + 1;
    v19 = (unsigned __int8 *)v7;
    v10 = KeyValuePair::Init(v23, 0);
    a4 = Checksummer::Add_Buffer(v10, v19, v9 - 1);
    v11 = v8 + 44;
    if ( SortedArray::Find(v11, &a4) )
    v12 = *(uint32_t *)SortedArray::BinarySearch2(v11, &a4);
    if ( v12 )
    v13 = *(char **)(v12 + 16);
    if ( v13 )
    Source = v13;
    LABEL_11:
    if ( Source )
    strncpy(Destination, Source, 0x40u);
    Destination[63] = 0;
    String::Trim(Destination);
    if ( strlen(Destination) )
    sscanf(Destination, "%d,%d,%d", &a4, &a3, &a5);
    v15 = a3;
    v16 = a5;
    *a2 = a4;
    a2[1] = (int)v15;
    a2[2] = (int)v16;
    return a2;
    LABEL_18:
    v18 = a5;
    *a2 = *a5;
    a2[1] = v18[1];
    a2[2] = v18[2];
    return a2;
}

int  INIClass::ReadDifficultyModifiers(RulesClass *this)
{
    int v1; // edx
    int v2; // edi
    int result; // eax
    unsigned __int8 *v5; // [esp+10h] [ebp+4h]
    v2 = v1;
    result = INIClass::BinarySearchSection((int)this, v5);
    LOBYTE(result) = result != 0;
    if ( (uint8_t)result )
    *(double *)v2 = INIClass::ReadDouble_Overwrite((int)this, v5, (unsigned __int8 *)aFirepower_0, 1.0);
    *(double *)(v2 + 8) = INIClass::ReadDouble_Overwrite((int)this, v5, (unsigned __int8 *)aGroundspeed, 1.0);
    *(double *)(v2 + 16) = INIClass::ReadDouble_Overwrite((int)this, v5, (unsigned __int8 *)aAirspeed, 1.0);
    *(double *)(v2 + 24) = INIClass::ReadDouble_Overwrite((int)this, v5, (unsigned __int8 *)g_INI_Key_Armor, 1.0);
    *(double *)(v2 + 32) = INIClass::ReadDouble_Overwrite((int)this, v5, (unsigned __int8 *)&off_825478, 1.0);
    *(double *)(v2 + 40) = INIClass::ReadDouble_Overwrite((int)this, v5, (unsigned __int8 *)g_INI_Key_Cost, 1.0);
    *(double *)(v2 + 56) = INIClass::ReadDouble_Overwrite((int)this, v5, (unsigned __int8 *)aRepairdelay, 0.02);
    *(double *)(v2 + 64) = INIClass::ReadDouble_Overwrite((int)this, v5, (unsigned __int8 *)aBuilddelay, 0.03);
    *(uint8_t *)(v2 + 72) = INIClass::ReadBool_Overwrite((int)this, v5, (unsigned __int8 *)aBuildslowdown, 0);
    *(double *)(v2 + 48) = INIClass::ReadDouble_Overwrite((int)this, v5, (unsigned __int8 *)aBuildtime, 1.0);
    *(uint8_t *)(v2 + 73) = INIClass::ReadBool_Overwrite((int)this, v5, (unsigned __int8 *)aDestroywalls, 1);
    LOBYTE(result) = INIClass::ReadBool_Overwrite((int)this, v5, (unsigned __int8 *)aContentscan, 0);
    *(uint8_t *)(v2 + 74) = result;
    return result;
}

