#include "overlayclass.hpp"

int  OverlayClass::ReadINI(uint32_t *this)
{
    int v1; // edi
    int v2; // ebp
    int v3; // esi
    int v4; // ebx
    int Base64Data; // esi
    int v6; // edi
    int i; // edi
    int j; // esi
    char v9; // bl
    void*374 *v10; // eax
    int v11; // edi
    int v12; // esi
    int v13; // ebx
    int v14; // esi
    int v15; // edi
    int k; // edi
    int m; // esi
    uint8_t *v18; // eax
    char v20; // [esp+3h] [ebp-71h] BYREF
    int v21; // [esp+4h] [ebp-70h] BYREF
    __int16 v22; // [esp+8h] [ebp-6Ch] BYREF
    __int16 v23; // [esp+Ah] [ebp-6Ah]
    void *v24; // [esp+Ch] [ebp-68h]
    void **v25; // [esp+10h] [ebp-64h] BYREF
    int v26; // [esp+14h] [ebp-60h]
    int v27; // [esp+18h] [ebp-5Ch]
    uint32_t v28[3]; // [esp+1Ch] [ebp-58h] BYREF
    int v29; // [esp+28h] [ebp-4Ch]
    int (__thiscall **v30)(void *, char); // [esp+2Ch] [ebp-48h] BYREF
    int v31; // [esp+30h] [ebp-44h]
    int v32; // [esp+34h] [ebp-40h]
    int v33; // [esp+38h] [ebp-3Ch]
    int v34; // [esp+3Ch] [ebp-38h]
    int v35[3]; // [esp+40h] [ebp-34h] BYREF
    int v36[10]; // [esp+4Ch] [ebp-28h] BYREF
    v24 = this;
    INIClass::ResetSection(this);
    if ( dword_A8ED7C > 1 )
    OverlayClass::updateOverlayState(&v30, 640, 400);
    v34 = 2;
    Buffer::Init(v35, 0, 512000);
    v30 = &BSurface_Vtable;
    XSurface::Fill((int *)&v30, 0);
    v1 = v31;
    v2 = v32;
    v3 = v34;
    ++v33;
    v4 = v35[0];
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[28])(&v30);
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[29])(&v30);
    Base64Data = INIClass::GetBase64Data(v24, g_INI_Key_OverlayPack, v4, v1 * v2 * v3);
    if ( Base64Data > 0 )
    v6 = v35[0];
    ++v33;
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[28])(&v30);
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[29])(&v30);
    v26 = 0;
    v27 = 0;
    Buffer::Init(v28, v6, Base64Data);
    v29 = 0;
    v25 = &BufferStraw::`vftable';
    LCWStraw::Constructor(v36, 1, 0x2000);
    Delegate::Set(v36, (int)&v25);
    for ( i = 0; i < 512; ++i )
    for ( j = 0; j < 512; ++j )
    v22 = j;
    v23 = i;
    v21 = -1;
    LCW::DecompressReader((int)v36, (char *)&v21, 1);
    if ( v21 != -1 )
    v21 = (unsigned __int8)v21;
    if ( ((*(int (__thiscall **)(uint32_t))(**(uint32_t **)&BuildingTypeClass_Array->gap0[4 * (unsigned __int8)v21]
    + 156))(*(uint32_t *)&BuildingTypeClass_Array->gap0[4
    * (unsigned __int8)v21])
    || *(uint32_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v21] + 668))
    && (!GameMode_Current[0] || !*(uint8_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v21] + 682))
    && LayerClass::CoordinatesLegal(&MapClass_Instance, &v22) )
    v9 = *((uint8_t *)CellCoord::To_CellObj(&MapClass_Instance, &v22) + 286);
    v10 = (void*374 *)__2_YAPAXI_Z(0xB0u);
    if ( v10 )
    Object::SpawnAtCell(v10, *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v21], &v22, -1);
    if ( v21 == 24 || v21 == 25 || v21 == 237 || v21 == 238 )
    *((uint8_t *)CellCoord::To_CellObj(&MapClass_Instance, &v22) + 286) = v9;
    --v33;
    LCWStraw::Destructor(v36);
    Vector::Clear((int)v28);
    Straw::Dtor((int *)&v25);
    v11 = v31;
    v12 = v32;
    v13 = v35[0];
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[28])(&v30);
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[29])(&v30);
    v14 = INIClass::GetBase64Data(v24, g_INI_Key_OverlayDataPack, v13, v11 * v12);
    if ( v14 > 0 )
    v15 = v35[0];
    ++v33;
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[28])(&v30);
    ((void (__thiscall *)(int (__thiscall ***)(void *, char)))v30[29])(&v30);
    v26 = 0;
    v27 = 0;
    v25 = &Straw::`vftable';
    Buffer::Init(v28, v15, v14);
    v29 = 0;
    v25 = &BufferStraw::`vftable';
    LCWStraw::Constructor(v36, 1, 0x2000);
    Delegate::Set(v36, (int)&v25);
    for ( k = 0; k < 512; ++k )
    for ( m = 0; m < 512; ++m )
    v22 = m;
    v23 = k;
    v20 = 0;
    LCW::DecompressReader((int)v36, &v20, 1);
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, &v22) )
    v18 = CellCoord::To_CellObj(&MapClass_Instance, &v22);
    v18[286] = v20;
    --v33;
    LCWStraw::Destructor(v36);
    Vector::Clear((int)v28);
    Straw::Dtor((int *)&v25);
    --v33;
    Vector::Clear((int)v35);
    return ProcessExpiredPointers();
}

int  OverlayClass::WriteINI(char *this)
{
    int v2; // edi
    signed int v3; // ebx
    int v4; // esi
    int v5; // esi
    int v6; // eax
    int i; // esi
    char *v8; // eax
    int v9; // eax
    int v10; // edi
    signed int v11; // ebx
    int v12; // esi
    int v13; // esi
    int v14; // eax
    int j; // esi
    char *v16; // eax
    int v17; // eax
    __int16 v19; // [esp+1Ch] [ebp-8Ch] BYREF
    __int16 v20; // [esp+1Eh] [ebp-8Ah]
    int v21[3]; // [esp+20h] [ebp-88h] BYREF
    uint32_t v22[4]; // [esp+2Ch] [ebp-7Ch] BYREF
    int v23[3]; // [esp+3Ch] [ebp-6Ch] BYREF
    uint32_t v24[4]; // [esp+48h] [ebp-60h] BYREF
    int v25[10]; // [esp+58h] [ebp-50h] BYREF
    int v26[10]; // [esp+80h] [ebp-28h] BYREF
    INIClass::ClearSection((int)this, (int)aOverlay, 0);
    INIClass::ClearSection((int)this, (int)g_INI_Key_OverlayPack, 0);
    v2 = 0;
    v3 = 0;
    v4 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 128))(DSurface_Alternate);
    v5 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 124))(DSurface_Alternate) * v4;
    v6 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
    v21[1] = 0;
    v21[2] = 0;
    Buffer::Init(v22, v6, v5);
    v22[3] = 0;
    v21[0] = (int)&BufferPipe::`vftable';
    LCWPipe::Constructor(v26, 0, 0x2000);
    Pipe::SetDelegate(v26, (int)v21);
    do
    for ( i = 0; i < 512; ++i )
    v19 = i;
    v20 = v2;
    v8 = (char *)CellCoord::To_CellObj(&MapClass_Instance, &v19);
    v3 += (signed int)LCW::Compress((int)v26, v8 + 68, 1);
    ++v2;
    while ( v2 < 512 );
    if ( v3 )
    v9 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
    INIClass::ReadBase64Data(this, (unsigned __int8 *)g_INI_Key_OverlayPack, v9, v3);
    (*(void (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 96))(DSurface_Alternate);
    (*(void (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 96))(DSurface_Alternate);
    INIClass::ClearSection((int)this, (int)g_INI_Key_OverlayDataPack, 0);
    v10 = 0;
    v11 = 0;
    v12 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 128))(DSurface_Alternate);
    v13 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 124))(DSurface_Alternate) * v12;
    v14 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
    v23[1] = 0;
    v23[2] = 0;
    v23[0] = (int)&Pipe::`vftable';
    Buffer::Init(v24, v14, v13);
    v24[3] = 0;
    v23[0] = (int)&BufferPipe::`vftable';
    LCWPipe::Constructor(v25, 0, 0x2000);
    Pipe::SetDelegate(v25, (int)v23);
    do
    for ( j = 0; j < 512; ++j )
    v19 = j;
    v20 = v10;
    v16 = (char *)CellCoord::To_CellObj(&MapClass_Instance, &v19);
    v11 += (signed int)LCW::Compress((int)v25, v16 + 286, 1);
    ++v10;
    while ( v10 < 512 );
    if ( v11 )
    v17 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
    INIClass::ReadBase64Data(this, (unsigned __int8 *)g_INI_Key_OverlayDataPack, v17, v11);
    (*(void (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 96))(DSurface_Alternate);
    (*(void (__thiscall **)(int))(*(uint32_t *)DSurface_Alternate + 96))(DSurface_Alternate);
    LCWPipe::Destructor(v25);
    Vector::Clear((int)v24);
    Pipe::Dtor(v23);
    LCWPipe::Destructor(v26);
    Vector::Clear((int)v22);
    return Pipe::Dtor(v21);
}

