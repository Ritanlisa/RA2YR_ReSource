#include "voxelanimtype.hpp"

int  VoxelAnimType::LoadAnim(char *this)
{
    const char *v2; // ebp
    void *v3; // edi
    uint32_t *v4; // eax
    uint32_t *FileVXL; // eax
    void *v6; // edi
    uint32_t *v7; // eax
    uint32_t *FileHVA; // eax
    int Info; // eax
    void *v10; // edi
    uint32_t *v11; // eax
    uint32_t *v12; // eax
    void *v13; // edi
    uint32_t *v14; // eax
    uint32_t *v15; // eax
    int v16; // eax
    void *v17; // edi
    uint32_t *v18; // eax
    uint32_t *v19; // eax
    void *v20; // edi
    uint32_t *v21; // eax
    uint32_t *v22; // eax
    int v23; // eax
    int v24; // ebp
    int v25; // edi
    void *v26; // edi
    uint32_t *v27; // eax
    uint32_t *v28; // eax
    void *v29; // edi
    uint32_t *v30; // eax
    uint32_t *v31; // eax
    int v32; // eax
    int v33; // ebp
    int v34; // edi
    void *v35; // edi
    uint32_t *v36; // eax
    uint32_t *v37; // eax
    void *v38; // edi
    uint32_t *v39; // eax
    uint32_t *v40; // eax
    int v41; // eax
    void *v42; // edi
    void *v43; // edi
    void *v44; // edi
    void *v45; // edi
    int v46; // edi
    int v47; // ebp
    uint32_t *v48; // ecx
    char v50; // [esp+13h] [ebp-349h]
    uint32_t v51[22]; // [esp+14h] [ebp-348h] BYREF
    uint8_t v52[12]; // [esp+6Ch] [ebp-2F0h] BYREF
    int v53; // [esp+78h] [ebp-2E4h]
    uint32_t v54[22]; // [esp+80h] [ebp-2DCh] BYREF
    uint8_t v55[12]; // [esp+D8h] [ebp-284h] BYREF
    int v56; // [esp+E4h] [ebp-278h]
    char Buffer[260]; // [esp+ECh] [ebp-270h] BYREF
    uint32_t v58[22]; // [esp+1F0h] [ebp-16Ch] BYREF
    char v59[12]; // [esp+248h] [ebp-114h] BYREF
    int v60; // [esp+254h] [ebp-108h]
    char Filename[256]; // [esp+25Ch] [ebp-100h] BYREF
    v2 = this + 504;
    v50 = 0;
    _makepath(Buffer, 0, 0, this + 504, g_Str_File__VXL);
    CCFileClass::Construct(v58, Buffer);
    if ( CCFileClass::Open(v58, 0) )
    v3 = (void *)*((uint32_t *)this + 44);
    if ( v3 )
    WaveClass::Destroy(*((uint32_t *)this + 44));
    __3_YAXPAX_Z(v3);
    v4 = __2_YAPAXI_Z(0x1Cu);
    if ( v4 )
    FileVXL = File::LoadFileVXL(v4, (int)v58, 0);
    else
    FileVXL = 0;
    *((uint32_t *)this + 44) = FileVXL;
    if ( !FileVXL || *(uint8_t *)FileVXL )
    v50 = 1;
    _makepath(Buffer, 0, 0, v2, g_Str_File__HVA);
    CCFileClass::Construct(v51, Buffer);
    v6 = (void *)*((uint32_t *)this + 45);
    if ( v6 )
    String::Release(*((void ***)this + 45));
    __3_YAXPAX_Z(v6);
    v7 = __2_YAPAXI_Z(0x10u);
    if ( v7 )
    FileHVA = File::LoadFileHVA(v7, (int)v51);
    else
    FileHVA = 0;
    *((uint32_t *)this + 45) = FileHVA;
    if ( !FileHVA || *(uint8_t *)FileHVA )
    v50 = 1;
    else
    Info = VoxelSection::GetInfo(*((uint32_t **)this + 44), 0, 0);
    Matrix::Scale(*((unsigned int **)this + 45), *(float *)(Info + 12));
    v51[0] = &CCFileClass::`vftable';
    v53 = 0;
    Vector::Clear((int)v52);
    v51[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v51);
    else
    v50 = 1;
    if ( (*(int (__thiscall **)(char *))(*(uint32_t *)this + 44))(this) != 40 || *(this + 3233) )
    if ( (*(int (__thiscall **)(char *))(*(uint32_t *)this + 44))(this) != 40
    || !HouseClass::HasPower(this)
    || *(this + 3285) )
    sprintf(Filename, "%sTUR", v2);
    _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL);
    CCFileClass::Construct(v51, Buffer);
    if ( CCFileClass::Open(v51, 0) )
    v26 = (void *)*((uint32_t *)this + 46);
    if ( v26 )
    WaveClass::Destroy(*((uint32_t *)this + 46));
    __3_YAXPAX_Z(v26);
    v27 = __2_YAPAXI_Z(0x1Cu);
    if ( v27 )
    v28 = File::LoadFileVXL(v27, (int)v51, 0);
    else
    v28 = 0;
    *((uint32_t *)this + 46) = v28;
    if ( !v28 || *(uint8_t *)v28 )
    v50 = 1;
    sprintf(Filename, "%sTUR", v2);
    _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA);
    CCFileClass::Construct(v54, Buffer);
    v29 = (void *)*((uint32_t *)this + 47);
    if ( v29 )
    String::Release(*((void ***)this + 47));
    __3_YAXPAX_Z(v29);
    v30 = __2_YAPAXI_Z(0x10u);
    if ( v30 )
    v31 = File::LoadFileHVA(v30, (int)v54);
    else
    v31 = 0;
    *((uint32_t *)this + 47) = v31;
    if ( !v31 || *(uint8_t *)v31 )
    v50 = 1;
    else
    v32 = VoxelSection::GetInfo(*((uint32_t **)this + 46), 0, 0);
    Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v32 + 12));
    v54[0] = &CCFileClass::`vftable';
    v56 = 0;
    Vector::Clear((int)v55);
    v54[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v54);
    goto LABEL_92;
    v24 = *((uint32_t *)this + 514);
    v25 = 0;
    if ( v24 > 0 )
    while ( VoxelAnimType::LoadSection(this, this + 504, v25) )
    if ( ++v25 >= v24 )
    goto LABEL_93;
    v50 = 1;
    else
    if ( !strcmp(this + 36, "APC") )
    sprintf(Filename, off_832AE0, this + 504);
    _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL);
    CCFileClass::Construct(v51, Buffer);
    if ( CCFileClass::Open(v51, 0) )
    v10 = (void *)*((uint32_t *)this + 46);
    if ( v10 )
    WaveClass::Destroy(*((uint32_t *)this + 46));
    __3_YAXPAX_Z(v10);
    v11 = __2_YAPAXI_Z(0x1Cu);
    if ( v11 )
    v12 = File::LoadFileVXL(v11, (int)v51, 0);
    else
    v12 = 0;
    *((uint32_t *)this + 46) = v12;
    if ( !v12 || *(uint8_t *)v12 )
    v50 = 1;
    sprintf(Filename, off_832AE0, this + 504);
    _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA);
    CCFileClass::Construct(v54, Buffer);
    v13 = (void *)*((uint32_t *)this + 47);
    if ( v13 )
    String::Release(*((void ***)this + 47));
    __3_YAXPAX_Z(v13);
    v14 = __2_YAPAXI_Z(0x10u);
    if ( v14 )
    v15 = File::LoadFileHVA(v14, (int)v54);
    else
    v15 = 0;
    *((uint32_t *)this + 47) = v15;
    if ( !v15 || *(uint8_t *)v15 )
    v50 = 1;
    else
    v16 = VoxelSection::GetInfo(*((uint32_t **)this + 46), 0, 0);
    Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v16 + 12));
    v54[0] = &CCFileClass::`vftable';
    v56 = 0;
    Vector::Clear((int)v55);
    v54[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v54);
    v51[0] = &CCFileClass::`vftable';
    v53 = 0;
    Vector::Clear((int)v52);
    v51[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v51);
    if ( *(this + 488) )
    sprintf(Filename, "%sWO", this + 504);
    _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL);
    CCFileClass::Construct(v51, Buffer);
    if ( CCFileClass::Open(v51, 0) )
    v17 = (void *)*((uint32_t *)this + 46);
    if ( v17 )
    WaveClass::Destroy(*((uint32_t *)this + 46));
    __3_YAXPAX_Z(v17);
    v18 = __2_YAPAXI_Z(0x1Cu);
    if ( v18 )
    v19 = File::LoadFileVXL(v18, (int)v51, 0);
    else
    v19 = 0;
    *((uint32_t *)this + 46) = v19;
    if ( !v19 || *(uint8_t *)v19 )
    v50 = 1;
    sprintf(Filename, "%sWO", this + 504);
    _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA);
    CCFileClass::Construct(v54, Buffer);
    v20 = (void *)*((uint32_t *)this + 47);
    if ( v20 )
    String::Release(*((void ***)this + 47));
    __3_YAXPAX_Z(v20);
    v21 = __2_YAPAXI_Z(0x10u);
    if ( v21 )
    v22 = File::LoadFileHVA(v21, (int)v54);
    else
    v22 = 0;
    *((uint32_t *)this + 47) = v22;
    if ( !v22 || *(uint8_t *)v22 )
    v50 = 1;
    else
    v23 = VoxelSection::GetInfo(*((uint32_t **)this + 46), 0, 0);
    Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v23 + 12));
    v54[0] = &CCFileClass::`vftable';
    v56 = 0;
    Vector::Clear((int)v55);
    v54[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v54);
    LABEL_92:
    v51[0] = &CCFileClass::`vftable';
    v53 = 0;
    Vector::Clear((int)v52);
    v51[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v51);
    LABEL_93:
    if ( (*(int (__thiscall **)(char *))(*(uint32_t *)this + 44))(this) != 40 || *(this + 3233) )
    if ( (*(int (__thiscall **)(char *))(*(uint32_t *)this + 44))(this) == 40
    && HouseClass::HasPower(this)
    && !*(this + 3285) )
    v33 = *((uint32_t *)this + 514);
    v34 = 0;
    if ( v33 > 0 )
    while ( VoxelAnimType::LoadBarrel(this, this + 504, v34) )
    if ( ++v34 >= v33 )
    goto LABEL_122;
    goto LABEL_123;
    else
    sprintf(Filename, "%sBARL", this + 504);
    _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL);
    CCFileClass::Construct(v51, Buffer);
    if ( CCFileClass::Open(v51, 0) )
    v35 = (void *)*((uint32_t *)this + 48);
    if ( v35 )
    WaveClass::Destroy(*((uint32_t *)this + 48));
    __3_YAXPAX_Z(v35);
    v36 = __2_YAPAXI_Z(0x1Cu);
    if ( v36 )
    v37 = File::LoadFileVXL(v36, (int)v51, 0);
    else
    v37 = 0;
    *((uint32_t *)this + 48) = v37;
    if ( !v37 || *(uint8_t *)v37 )
    v50 = 1;
    sprintf(Filename, "%sBARL", this + 504);
    _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA);
    CCFileClass::Construct(v54, Buffer);
    v38 = (void *)*((uint32_t *)this + 49);
    if ( v38 )
    String::Release(*((void ***)this + 49));
    __3_YAXPAX_Z(v38);
    v39 = __2_YAPAXI_Z(0x10u);
    if ( v39 )
    v40 = File::LoadFileHVA(v39, (int)v54);
    else
    v40 = 0;
    *((uint32_t *)this + 49) = v40;
    if ( !v40 || *(uint8_t *)v40 )
    v50 = 1;
    else
    v41 = VoxelSection::GetInfo(*((uint32_t **)this + 48), 0, 0);
    Matrix::Scale(*((unsigned int **)this + 49), *(float *)(v41 + 12));
    v54[0] = &CCFileClass::`vftable';
    v56 = 0;
    Vector::Clear((int)v55);
    v54[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v54);
    v51[0] = &CCFileClass::`vftable';
    v53 = 0;
    Vector::Clear((int)v52);
    v51[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v51);
    LABEL_122:
    if ( v50 )
    LABEL_123:
    v42 = (void *)*((uint32_t *)this + 44);
    if ( v42 )
    WaveClass::Destroy(*((uint32_t *)this + 44));
    __3_YAXPAX_Z(v42);
    *((uint32_t *)this + 44) = 0;
    v43 = (void *)*((uint32_t *)this + 45);
    if ( v43 )
    String::Release(*((void ***)this + 45));
    __3_YAXPAX_Z(v43);
    *((uint32_t *)this + 45) = 0;
    if ( (*(int (__thiscall **)(char *))(*(uint32_t *)this + 44))(this) == 40
    && HouseClass::HasPower(this)
    && !*(this + 3285) )
    ObjectTypeClass::CleanupWeapons(this);
    else
    v44 = (void *)*((uint32_t *)this + 46);
    if ( v44 )
    WaveClass::Destroy(*((uint32_t *)this + 46));
    __3_YAXPAX_Z(v44);
    *((uint32_t *)this + 46) = 0;
    v45 = (void *)*((uint32_t *)this + 47);
    if ( v45 )
    String::Release(*((void ***)this + 47));
    __3_YAXPAX_Z(v45);
    *((uint32_t *)this + 47) = 0;
    goto LABEL_146;
    v46 = 0;
    v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((uint32_t **)this + 44), 0, 0) + 160);
    v48 = (uint32_t *)*((uint32_t *)this + 44);
    if ( (int)v48[1] > 0 )
    do
    if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(v48, v46, 0) + 160) )
    v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((uint32_t **)this + 44), v46, 0) + 160);
    if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(*((uint32_t **)this + 44), v46, 0) + 161) )
    v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((uint32_t **)this + 44), v46, 0) + 161);
    if ( v47 <= *(unsigned __int8 *)(VoxelSection::GetInfo(*((uint32_t **)this + 44), v46, 0) + 162) )
    v47 = *(unsigned __int8 *)(VoxelSection::GetInfo(*((uint32_t **)this + 44), v46, 0) + 162);
    v48 = (uint32_t *)*((uint32_t *)this + 44);
    ++v46;
    while ( v46 < v48[1] );
    if ( v47 <= 8 )
    v47 = 8;
    *((uint32_t *)this + 123) = v47;
    __3_YAXPAX_Z(*((void **)this + 145));
    *((uint32_t *)this + 145) = 0;
    *((uint32_t *)this + 146) = 0;
    *((uint32_t *)this + 147) = 0;
    *(this + 592) = 0;
    *((uint32_t *)this + 149) = 0;
    __3_YAXPAX_Z(*((void **)this + 150));
    *((uint32_t *)this + 150) = 0;
    *((uint32_t *)this + 151) = 0;
    *((uint32_t *)this + 152) = 0;
    *(this + 612) = 0;
    *((uint32_t *)this + 154) = 0;
    __3_YAXPAX_Z(*((void **)this + 155));
    *((uint32_t *)this + 155) = 0;
    *((uint32_t *)this + 156) = 0;
    *((uint32_t *)this + 157) = 0;
    *(this + 632) = 0;
    *((uint32_t *)this + 159) = 0;
    __3_YAXPAX_Z(*((void **)this + 160));
    *((uint32_t *)this + 160) = 0;
    *((uint32_t *)this + 161) = 0;
    *((uint32_t *)this + 162) = 0;
    *(this + 652) = 0;
    *((uint32_t *)this + 164) = 0;
    LABEL_146:
    v58[0] = &CCFileClass::`vftable';
    v60 = 0;
    Vector::Clear((int)v59);
    v58[0] = &off_7E1668;
    return BufferIOFileClass::Dtor(v58);
}

