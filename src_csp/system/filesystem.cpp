#include "filesystem.hpp"

// 0x006267A0
void  FileSystem::InitExtensionState(void *this)
{
    void **v1; // edi
    void *v2; // esi
    void **v3; // eax
    uint32_t *v4; // eax
    uint32_t *v5; // esi
    uint32_t *v6; // ebx
    uint32_t *v7; // eax
    uint32_t *v8; // esi
    uint32_t *v9; // eax
    uint32_t *v10; // esi
    uint32_t *v11; // eax
    int v12; // ecx
    int v13; // eax
    int v14; // ecx
    uint32_t *v15; // ebx
    int v16; // ecx
    int v17; // eax
    int v18; // ebp
    int v19; // edx
    char *v20; // esi
    int v21; // ebp
    uint32_t *v22; // esi
    int v23; // [esp+10h] [ebp-110h] BYREF
    int v24; // [esp+14h] [ebp-10Ch]
    char v25; // [esp+18h] [ebp-108h]
    void *v26; // [esp+1Ch] [ebp-104h]
    char String[256]; // [esp+20h] [ebp-100h] BYREF
    v1 = (void **)g_FileExtensionState;
    v2 = this;
    v26 = this;
    if ( !g_FileExtensionState )
    v3 = (void **)__2_YAPAXI_Z(0x10u);
    v1 = v3;
    if ( !v3 )
    v1 = 0;
    g_FileExtensionState = 0;
    goto LABEL_19;
    *v3 = (void *)-1;
    v4 = __2_YAPAXI_Z(0x18u);
    v5 = v4;
    v6 = 0;
    if ( v4 )
    StringVector::Construct(v4, 0, 0);
    *v5 = &DynamicVectorClass<char *>::`vftable';
    v5[5] = 10;
    v5[4] = 0;
    else
    v5 = 0;
    v1[1] = v5;
    v7 = __2_YAPAXI_Z(0x18u);
    v8 = v7;
    if ( v7 )
    VectorClass::ConstructHSV(v7, 0, 0);
    *v8 = &DynamicVectorClass<HSVClass>::`vftable';
    v8[5] = 10;
    v8[4] = 0;
    else
    v8 = 0;
    v1[2] = v8;
    v9 = __2_YAPAXI_Z(0x10u);
    v10 = v9;
    if ( v9 )
    v9[1] = HashStringMod31;
    v9[2] = 31;
    v9[3] = 10;
    v11 = __2_YAPAXI_Z(0x2ECu);
    if ( v11 )
    v6 = v11 + 1;
    *v11 = 31;
    Array::ForEach((int)(v11 + 1), 24, 31, (int (__thiscall *)(int))FileSystem::readFile);
    v12 = v10[2];
    v13 = 0;
    *v10 = v6;
    if ( v12 > 0 )
    v14 = 0;
    do
    ++v13;
    *(uint32_t *)(*v10 + v14 + 20) = 10;
    v14 += 24;
    while ( v13 < v10[2] );
    v1[3] = v10;
    v2 = v26;
    g_FileExtensionState = v1;
    goto LABEL_19;
    else
    v10 = 0;
    v1[3] = v10;
    v2 = v26;
    g_FileExtensionState = v1;
    LABEL_19:
    if ( *v1 != v2 )
    v15 = v1[3];
    v16 = 0;
    v17 = 0;
    *v1 = v2;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( (int)v15[2] > 0 )
    while ( 1 )
    v18 = *v15 + 24 * v16;
    if ( *(int *)(v18 + 16) > 0 )
    break;
    LABEL_25:
    ++v16;
    v17 = 0;
    v23 = v16;
    v24 = 0;
    if ( v16 >= v15[2] )
    return;
    while ( 1 )
    v19 = *(uint32_t *)(v18 + 4);
    v24 = v17 + 1;
    v20 = (char *)(v19 + 260 * v17);
    if ( !Flag::IsZero(v20) )
    break;
    v17 = v24;
    if ( v24 >= *(uint32_t *)(v18 + 16) )
    v16 = v23;
    goto LABEL_25;
    for ( ; v20; v20 = (char *)FileSystem::closeFile(&v23) )
    String::CopyUpper(String, v20);
    v21 = *(uint32_t *)FileSystem::openFile(String);
    v22 = MIXFile::Load(v1, v20);
    FileSystem::mountDrive(v21);
    *(uint32_t *)(v21 + 256) = v22;
}

// 0x00626DA0
int FileSystem::ProcessNextFileExtension()
{
    uint32_t *v0; // edi
    uint32_t *v1; // eax
    uint32_t *v2; // eax
    uint32_t *v3; // esi
    int v4; // eax
    int *v5; // eax
    uint32_t *v6; // ebp
    int v7; // esi
    int v8; // edi
    int v9; // eax
    char *v10; // ebx
    int v13; // edi
    int v14; // eax
    int v15; // ebp
    int v16; // edi
    const char *v17; // edi
    const char *v18; // edi
    uint32_t *v19; // eax
    int k; // ebp
    int v21; // edi
    int v22; // ecx
    uint8_t *v23; // ebx
    int v24; // eax
    int i; // [esp+10h] [ebp-18h]
    int j; // [esp+10h] [ebp-18h]
    int v27; // [esp+14h] [ebp-14h]
    int v28; // [esp+18h] [ebp-10h]
    uint32_t *v29; // [esp+18h] [ebp-10h]
    int v30; // [esp+1Ch] [ebp-Ch]
    v0 = g_FileExtensionState;
    if ( !g_FileExtensionState )
    v1 = __2_YAPAXI_Z(0x10u);
    v0 = v1;
    if ( v1 )
    *v1 = -1;
    v2 = __2_YAPAXI_Z(0x18u);
    v3 = v2;
    if ( v2 )
    StringVector::Construct(v2, 0, 0);
    *v3 = &DynamicVectorClass<char *>::`vftable';
    v3[5] = 10;
    v3[4] = 0;
    else
    v3 = 0;
    v0[1] = v3;
    if ( __2_YAPAXI_Z(0x18u) )
    v4 = FileExtension::Constructor(0, 0);
    else
    v4 = 0;
    v0[2] = v4;
    v5 = (int *)__2_YAPAXI_Z(0x10u);
    if ( v5 )
    v0[3] = DynamicVectorArray::Constructor(v5, 10, 31, (int)HashStringMod31);
    else
    v0[3] = 0;
    else
    v0 = 0;
    g_FileExtensionState = v0;
    v6 = (uint32_t *)v0[3];
    v7 = 0;
    v30 = 0;
    v27 = 0;
    if ( (int)v6[2] > 0 )
    for ( i = 0; ; i += 24 )
    v8 = i + *v6;
    if ( *(int *)(v8 + 16) > 0 )
    break;
    LABEL_19:
    v7 = 0;
    if ( ++v30 >= v6[2] )
    return 0;
    while ( 1 )
    v9 = 65 * v7++;
    v10 = (char *)(*(uint32_t *)(v8 + 4) + 4 * v9);
    if ( !Flag::IsZero(v10) )
    break;
    if ( v7 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_19;
    if ( v10 )
    v13 = *((uint32_t *)g_FileExtensionState + 3);
    v14 = *(uint32_t *)v13 + 24 * ((*(int (__thiscall **)(char *))(v13 + 4))(v10) % *(uint32_t *)(v13 + 8));
    v15 = *(uint32_t *)(v14 + 16) - 1;
    v28 = v14;
    if ( v15 >= 0 )
    v16 = 260 * v15;
    for ( j = 260 * v15; ; v16 = j )
    v17 = (const char *)(*(uint32_t *)(v14 + 4) + v16);
    if ( String::Equals(v17, v10) )
    break;
    --v15;
    j -= 260;
    if ( v15 < 0 )
    return 0;
    v14 = v28;
    v18 = v17 + 256;
    if ( v18 && *(uint32_t *)(*(uint32_t *)v18 + 256) )
    do
    v19 = (uint32_t *)*((uint32_t *)g_FileExtensionState + 3);
    ++v27;
    v29 = v19;
    if ( v30 >= v19[2] )
    break;
    for ( k = 24 * v30; ; k += 24 )
    v21 = *v19 + k;
    if ( v7 < *(uint32_t *)(v21 + 16) )
    break;
    LABEL_36:
    v7 = 0;
    if ( ++v30 >= v19[2] )
    return v27;
    while ( 1 )
    v22 = 65 * v7++;
    v23 = (uint8_t *)(*(uint32_t *)(v21 + 4) + 4 * v22);
    if ( !Flag::IsZero(v23) )
    break;
    if ( v7 >= *(uint32_t *)(v21 + 16) )
    v19 = v29;
    goto LABEL_36;
    if ( !v23 )
    break;
    v24 = FileSystem::openFile(v23);
    if ( !v24 )
    break;
    while ( *(uint32_t *)(*(uint32_t *)v24 + 256) );
    return v27;
}

void  FileSystem::FlushTempFiles(uint32_t *this)
{
    uint32_t *v1; // ebp
    uint32_t *v2; // eax
    void *v3; // eax
    int v4; // esi
    int v5; // edi
    void (__thiscall ***v6)(uint32_t, int); // ecx
    void (__thiscall ***v7)(uint32_t, int); // ecx
    uint32_t *v8; // eax
    int v9; // ebx
    int v10; // esi
    int v11; // edi
    int v12; // edi
    int v13; // eax
    char *v14; // ebp
    int v15; // edi
    int v16; // eax
    int v17; // edi
    int v18; // ebp
    const char *v19; // ebx
    uint32_t *v20; // eax
    void *v21; // edi
    uint32_t *v22; // eax
    int v23; // ebp
    int v24; // edi
    int v25; // ecx
    char *v26; // ebx
    uint32_t *v27; // esi
    int v28; // edi
    int v29; // ebx
    uint32_t *v30; // esi
    int v32; // [esp+Ch] [ebp-14h]
    const char *v33; // [esp+Ch] [ebp-14h]
    uint32_t *v34; // [esp+10h] [ebp-10h]
    int v35; // [esp+10h] [ebp-10h]
    uint32_t *v36; // [esp+10h] [ebp-10h]
    int v37; // [esp+14h] [ebp-Ch]
    v1 = this;
    if ( *(this + 3) )
    v2 = g_FileExtensionState;
    if ( !g_FileExtensionState )
    v3 = __2_YAPAXI_Z(0x10u);
    if ( v3 )
    v2 = (uint32_t *)FileSystem::findFile(v3);
    else
    v2 = 0;
    g_FileExtensionState = v2;
    v4 = 0;
    v5 = *(uint32_t *)(v2[1] + 16);
    if ( v5 > 0 )
    do
    __3_YAXPAX_Z(*(void **)(*(uint32_t *)(v2[1] + 4) + 4 * v4));
    v2 = g_FileExtensionState;
    ++v4;
    while ( v4 < v5 );
    (*(void (__thiscall **)(uint32_t))(*(uint32_t *)v2[1] + 12))(v2[1]);
    (*(void (__thiscall **)(uint32_t))(**((uint32_t **)g_FileExtensionState + 2) + 12))(*((uint32_t *)g_FileExtensionState + 2));
    v6 = (void (__thiscall ***)(uint32_t, int))v1[1];
    if ( v6 )
    (**v6)(v6, 1);
    v7 = (void (__thiscall ***)(uint32_t, int))v1[2];
    if ( v7 )
    (**v7)(v7, 1);
    v8 = (uint32_t *)v1[3];
    v9 = 0;
    v10 = 0;
    v37 = 0;
    v34 = v8;
    if ( (int)v8[2] > 0 )
    v11 = 0;
    v32 = 0;
    while ( 1 )
    v12 = *v8 + v11;
    if ( *(int *)(v12 + 16) > 0 )
    break;
    LABEL_19:
    ++v9;
    v11 = v32 + 24;
    v10 = 0;
    v37 = v9;
    v32 += 24;
    if ( v9 >= v8[2] )
    goto LABEL_44;
    while ( 1 )
    v13 = 65 * v10++;
    v14 = (char *)(*(uint32_t *)(v12 + 4) + 4 * v13);
    if ( !Flag::IsZero(v14) )
    break;
    if ( v10 >= *(uint32_t *)(v12 + 16) )
    v8 = v34;
    v1 = this;
    goto LABEL_19;
    v33 = v14;
    if ( v14 )
    while ( 2 )
    v15 = *(this + 3);
    v16 = *(uint32_t *)v15 + 24 * ((*(int (__thiscall **)(const char *))(v15 + 4))(v33) % *(uint32_t *)(v15 + 8));
    v17 = *(uint32_t *)(v16 + 16) - 1;
    v35 = v16;
    if ( v17 < 0 )
    LABEL_30:
    v20 = 0;
    else
    v18 = 260 * v17;
    while ( 1 )
    v19 = (const char *)(*(uint32_t *)(v16 + 4) + v18);
    if ( String::Equals(v19, v33) )
    break;
    --v17;
    v18 -= 260;
    if ( v17 < 0 )
    v9 = v37;
    goto LABEL_30;
    v16 = v35;
    v20 = v19 + 256;
    v9 = v37;
    v21 = (void *)*v20;
    if ( *v20 )
    FileSystem::mountDrive(*v20);
    __3_YAXPAX_Z(v21);
    v22 = (uint32_t *)*(this + 3);
    v36 = v22;
    if ( v9 < v22[2] )
    v23 = 24 * v9;
    while ( 1 )
    v24 = v23 + *v22;
    if ( v10 < *(uint32_t *)(v24 + 16) )
    break;
    LABEL_39:
    ++v9;
    v23 += 24;
    v10 = 0;
    v37 = v9;
    if ( v9 >= v22[2] )
    goto LABEL_43;
    while ( 1 )
    v25 = 65 * v10++;
    v26 = (char *)(*(uint32_t *)(v24 + 4) + 4 * v25);
    if ( !Flag::IsZero(v26) )
    break;
    if ( v10 >= *(uint32_t *)(v24 + 16) )
    v9 = v37;
    v22 = v36;
    goto LABEL_39;
    v33 = v26;
    if ( v26 )
    v9 = v37;
    continue;
    break;
    LABEL_43:
    v1 = this;
    LABEL_44:
    v27 = (uint32_t *)v1[3];
    v28 = 0;
    if ( (int)v27[2] > 0 )
    v29 = 0;
    do
    (*(void (__thiscall **)(int))(*(uint32_t *)(v29 + *v27) + 12))(v29 + *v27);
    ++v28;
    v29 += 24;
    while ( v28 < v27[2] );
    v30 = (uint32_t *)v1[3];
    if ( v30 )
    if ( *v30 )
    (**(void (__thiscall ***)(uint32_t, int))*v30)(*v30, 3);
    __3_YAXPAX_Z(v30);
}

