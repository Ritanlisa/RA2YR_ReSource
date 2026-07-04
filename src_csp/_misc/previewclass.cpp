#include "previewclass.hpp"

char  PreviewClass::ReadPreview(char **this, char *Source)
{
    int v2; // ebp
    void *v3; // esi
    signed int v4; // edi
    char *v5; // eax
    char *v6; // edi
    char MapPreviewImage; // [esp+13h] [ebp-13Dh]
    int v10[3]; // [esp+18h] [ebp-138h] BYREF
    uint32_t v11[4]; // [esp+24h] [ebp-12Ch] BYREF
    int v12[22]; // [esp+34h] [ebp-11Ch] BYREF
    uint8_t v13[12]; // [esp+8Ch] [ebp-C4h] BYREF
    int v14; // [esp+98h] [ebp-B8h]
    void *v15[16]; // [esp+A0h] [ebp-B0h] BYREF
    char v16; // [esp+E0h] [ebp-70h]
    void *v17[16]; // [esp+F8h] [ebp-58h] BYREF
    char v18; // [esp+138h] [ebp-18h]
    CCFileClass::Construct(v12, Source);
    if ( CCFileClass::Open(v12, 0) && FileClass::Load(v12, 1) )
    INIClass::Constructor(v15);
    v16 = 0;
    v15[0] = &CCINIClass_Vtable;
    CCINIClass::Load(v15, (int)v12, 1, 0);
    INIClass::ResetSection(v15);
    PreviewClass::RenderMapPreview((int *)ScenarioClass_Instance, v15);
    v2 = 0;
    v3 = 0;
    while ( 1 )
    v2 += 25;
    v4 = v2 * CCFileClass::GetSize(v12) / 100;
    if ( v3 )
    __3_YAXPAX_Z(v3);
    v3 = __2_YAPAXI_Z(v4 + 1);
    if ( !v3 )
    goto LABEL_10;
    BufferIOFileClass::Seek(v12, 0, 0);
    CCFileClass::Read(v12, v3, v4);
    *((uint8_t *)v3 + v4) = 0;
    v5 = strstr((const char *)v3, aMap);
    v6 = v5;
    if ( v5 )
    break;
    if ( v2 >= 100 )
    __3_YAXPAX_Z(v3);
    LABEL_10:
    HashTable::DestroyHashTableINIClass(v15);
    goto LABEL_11;
    *v5 = 0;
    INIClass::Constructor(v17);
    v18 = 0;
    v17[0] = &CCINIClass_Vtable;
    v10[1] = 0;
    v10[2] = 0;
    Buffer::Init(v11, (int)v3, v6 - (uint8_t *)v3 - 1);
    v11[3] = 0;
    v10[0] = (int)&BufferStraw::`vftable';
    CCINIClass::LoadAndVerifyDigest((int)v17, (int)v10, 0, 0);
    MapPreviewImage = LoadMapPreviewImage(this, v17);
    __3_YAXPAX_Z(v3);
    Vector::Clear((int)v11);
    Straw::Dtor(v10);
    HashTable::DestroyHashTableINIClass(v17);
    HashTable::DestroyHashTableINIClass(v15);
    v12[0] = (int)&CCFileClass::`vftable';
    v14 = 0;
    Vector::Clear((int)v13);
    v12[0] = (int)&off_7E1668;
    BufferIOFileClass::Dtor(v12);
    return MapPreviewImage;
    else
    LABEL_11:
    v12[0] = (int)&CCFileClass::`vftable';
    v14 = 0;
    Vector::Clear((int)v13);
    v12[0] = (int)&off_7E1668;
    BufferIOFileClass::Dtor(v12);
    return 0;
}

