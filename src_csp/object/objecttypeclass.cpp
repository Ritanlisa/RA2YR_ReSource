#include "objecttypeclass.hpp"

// 0x0041CBF0
uint32_t *__stdcall ObjectTypeClass::vt_entry_7C(uint32_t *a1)
{
    int v1; // esi
    v1 = 2 * dword_889F58;
    *a1 = 256;
    a1[1] = 256;
    a1[2] = v1;
    return a1;
}

int  ObjectTypeClass::Destruct(int this)
{
    int v2; // eax
    int *v3; // edi
    int v4; // ebx
    int *v5; // edi
    int v6; // ebx
    int v8; // [esp+Ch] [ebp-4h] BYREF
    *(uint32_t *)this = &ObjectTypeClass::`vftable';
    *(uint32_t *)(this + 4) = &ObjectTypeClass::`vftable';
    *(uint32_t *)(this + 8) = &ObjectTypeClass::`vftable';
    *(uint32_t *)(this + 12) = &ObjectTypeClass::`vftable';
    v8 = this;
    v2 = (*(int (__thiscall **)(int *, int *))(dword_AC1418 + 16))(&dword_AC1418, &v8);
    if ( v2 != -1 && v2 < dword_AC1428 && v2 < --dword_AC1428 )
    do
    ++v2;
    *((uint32_t *)dword_AC141C + v2 - 1) = *((uint32_t *)dword_AC141C + v2);
    while ( v2 < dword_AC1428 );
    if ( *(uint8_t *)(this + 168) && *(uint32_t *)(this + 164) )
    __3_YAXPAX_Z(*(void **)(this + 164));
    *(uint32_t *)(this + 164) = 0;
    *(uint8_t *)(this + 168) = 0;
    ObjectTypeClass::CleanupWeapons((char *)this);
    __3_YAXPAX_Z(*(void **)(this + 640));
    *(uint32_t *)(this + 640) = 0;
    *(uint32_t *)(this + 644) = 0;
    *(uint32_t *)(this + 648) = 0;
    *(uint8_t *)(this + 652) = 0;
    *(uint32_t *)(this + 656) = 0;
    __3_YAXPAX_Z(*(void **)(this + 620));
    *(uint32_t *)(this + 620) = 0;
    *(uint32_t *)(this + 624) = 0;
    *(uint32_t *)(this + 628) = 0;
    *(uint8_t *)(this + 632) = 0;
    *(uint32_t *)(this + 636) = 0;
    __3_YAXPAX_Z(*(void **)(this + 600));
    *(uint32_t *)(this + 600) = 0;
    *(uint32_t *)(this + 604) = 0;
    *(uint32_t *)(this + 608) = 0;
    *(uint8_t *)(this + 612) = 0;
    *(uint32_t *)(this + 616) = 0;
    __3_YAXPAX_Z(*(void **)(this + 580));
    *(uint32_t *)(this + 580) = 0;
    *(uint32_t *)(this + 584) = 0;
    *(uint32_t *)(this + 588) = 0;
    *(uint8_t *)(this + 592) = 0;
    *(uint32_t *)(this + 596) = 0;
    v3 = (int *)(this + 488);
    v4 = 18;
    do
    v3 -= 2;
    ObjectTypeClass::ReleaseWaveAndString(v3);
    --v4;
    while ( v4 );
    v5 = (int *)(this + 344);
    v6 = 18;
    do
    v5 -= 2;
    ObjectTypeClass::ReleaseWaveAndString(v5);
    --v6;
    while ( v6 );
    ObjectTypeClass::ReleaseWaveAndString((int *)(this + 192));
    ObjectTypeClass::ReleaseWaveAndString((int *)(this + 184));
    ObjectTypeClass::ReleaseWaveAndString((int *)(this + 176));
    return AbstractTypeClass::Dtor((uint32_t *)this);
}

// 0x005F77F0
void ObjectTypeClass::UnloadPipsSHP()
{
    int v0; // eax
    void *v1; // ebp
    int v2; // edx
    int v3; // eax
    char *v4; // esi
    int v5; // edi
    int v6; // eax
    void *v7; // ebp
    int v8; // edx
    int v9; // eax
    char *v10; // esi
    int v11; // edi
    int v12; // eax
    void *v13; // ebp
    int v14; // edx
    int v15; // eax
    char *v16; // esi
    int v17; // edi
    int v18; // eax
    void *v19; // ebp
    int v20; // edx
    int v21; // eax
    char *v22; // esi
    int v23; // edi
    if ( byte_AC1488 )
    if ( FileSystem_PIPBRD_SHP )
    v0 = *(uint32_t *)(FileSystem_PIPBRD_SHP - 4);
    v1 = (void *)(FileSystem_PIPBRD_SHP - 4);
    v2 = 9 * v0;
    v3 = v0 - 1;
    v4 = (char *)(FileSystem_PIPBRD_SHP + 4 * v2);
    if ( v3 >= 0 )
    v5 = v3 + 1;
    do
    v4 -= 36;
    FileTreeNode::Destroy(v4);
    --v5;
    while ( v5 );
    __3_YAXPAX_Z(v1);
    byte_AC1488 = 0;
    if ( byte_AC1489 )
    if ( FileSystem_PIPS_SHP )
    v6 = *(uint32_t *)(FileSystem_PIPS_SHP - 4);
    v7 = (void *)(FileSystem_PIPS_SHP - 4);
    v8 = 9 * v6;
    v9 = v6 - 1;
    v10 = (char *)(FileSystem_PIPS_SHP + 4 * v8);
    if ( v9 >= 0 )
    v11 = v9 + 1;
    do
    v10 -= 36;
    FileTreeNode::Destroy(v10);
    --v11;
    while ( v11 );
    __3_YAXPAX_Z(v7);
    byte_AC1489 = 0;
    if ( byte_AC148A )
    if ( FileSystem_PIPS2_SHP )
    v12 = *(uint32_t *)(FileSystem_PIPS2_SHP - 4);
    v13 = (void *)(FileSystem_PIPS2_SHP - 4);
    v14 = 9 * v12;
    v15 = v12 - 1;
    v16 = (char *)(FileSystem_PIPS2_SHP + 4 * v14);
    if ( v15 >= 0 )
    v17 = v15 + 1;
    do
    v16 -= 36;
    FileTreeNode::Destroy(v16);
    --v17;
    while ( v17 );
    __3_YAXPAX_Z(v13);
    byte_AC148A = 0;
    if ( byte_AC148B )
    if ( FileSystem_TALKBUBL_SHP )
    v18 = *(uint32_t *)(FileSystem_TALKBUBL_SHP - 4);
    v19 = (void *)(FileSystem_TALKBUBL_SHP - 4);
    v20 = 9 * v18;
    v21 = v18 - 1;
    v22 = (char *)(FileSystem_TALKBUBL_SHP + 4 * v20);
    if ( v21 >= 0 )
    v23 = v21 + 1;
    do
    v22 -= 36;
    FileTreeNode::Destroy(v22);
    --v23;
    while ( v23 );
    __3_YAXPAX_Z(v19);
    byte_AC148B = 0;
}

void  ObjectTypeClass::CleanupWeapons(char *this)
{
    char *v1; // esi
    int v2; // ebp
    void *v3; // edi
    void **v4; // edi
    void *v5; // edi
    void *v6; // edi
    v1 = this + 204;
    v2 = 18;
    do
    v3 = (void *)*((uint32_t *)v1 - 1);
    if ( v3 )
    WaveClass::Destroy(*((uint32_t *)v1 - 1));
    __3_YAXPAX_Z(v3);
    *((uint32_t *)v1 - 1) = 0;
    v4 = *(void ***)v1;
    if ( *(uint32_t *)v1 )
    String::Release(*(void ***)v1);
    __3_YAXPAX_Z(v4);
    *(uint32_t *)v1 = 0;
    v5 = (void *)*((uint32_t *)v1 + 35);
    if ( v5 )
    WaveClass::Destroy(*((uint32_t *)v1 + 35));
    __3_YAXPAX_Z(v5);
    *((uint32_t *)v1 + 35) = 0;
    v6 = (void *)*((uint32_t *)v1 + 36);
    if ( v6 )
    String::Release(*((void ***)v1 + 36));
    __3_YAXPAX_Z(v6);
    *((uint32_t *)v1 + 36) = 0;
    v1 += 8;
    --v2;
    while ( v2 );
}

int  ObjectTypeClass::Load2DArt(char *this)
{
    char *v2; // edi
    int v3; // esi
    char v4; // al
    char v5; // dl
    int v6; // edx
    int v7; // eax
    char v8; // dl
    int v9; // eax
    int result; // eax
    __int16 v11; // cx
    char Destination[24]; // [esp+8h] [ebp-220h] BYREF
    char v13; // [esp+20h] [ebp-208h]
    char Source; // [esp+24h] [ebp-204h] BYREF
    char v15; // [esp+25h] [ebp-203h]
    char Buffer[256]; // [esp+128h] [ebp-100h] BYREF
    if ( *(this + 529) && *((uint32_t *)ScenarioClass_Instance + 1174) == 1 && !*(this + 168) )
    if ( !*(this + 530) )
    v2 = this + 504;
    sprintf(Buffer, off_832AE8, this + 504);
    if ( Buffer )
    strncpy(Destination, Buffer, 0x18u);
    v13 = 0;
    else
    Destination[0] = 0;
    if ( Destination != v2 )
    qmemcpy(v2, Destination, 0x18u);
    *(this + 528) = v13;
    *(this + 530) = 1;
    else
    *(this + 530) = 0;
    _makepath(&Source, 0, 0, this + 504, Ext);
    if ( *(this + 556) )
    _makepath(&Source, 0, 0, this + 504, (const char *)&off_7E1BC6 + 112 * *((uint32_t *)ScenarioClass_Instance + 1174));
    else if ( *(this + 567) )
    v3 = *((uint32_t *)ScenarioClass_Instance + 1174);
    if ( v3 != -1 )
    v4 = Source;
    v5 = v15;
    if ( Source >= 65 && Source <= 90 )
    v4 = Source + 32;
    if ( v15 >= 65 && v15 <= 90 )
    v5 = v15 + 32;
    if ( (v4 == 103 || v4 == 110 || v4 == 99 || v4 == 121) && (v5 == 97 || v5 == 116) )
    v15 = byte_7E1BCE[112 * v3];
    if ( *(this + 168) && *((uint32_t *)this + 41) )
    __3_YAXPAX_Z(*((void **)this + 41));
    v6 = *(uint32_t *)this;
    *((uint32_t *)this + 41) = 0;
    *(this + 168) = 0;
    if ( (*(int (__thiscall **)(char *))(v6 + 44))(this) == 21
    || (*(int (__thiscall **)(char *))(*(uint32_t *)this + 44))(this) == 5 )
    v9 = SearchMIXFile(&Source, 1);
    *((uint32_t *)this + 41) = v9;
    if ( v9 )
    goto LABEL_41;
    v15 = 71;
    v8 = 1;
    goto LABEL_40;
    if ( (*(int (__thiscall **)(char *))(*(uint32_t *)this + 44))(this) != 30
    && (*(int (__thiscall **)(char *))(*(uint32_t *)this + 44))(this) != 37 )
    v7 = SearchMIXFile(&Source, 0);
    *((uint32_t *)this + 41) = v7;
    if ( !v7 )
    v15 = 71;
    v8 = 0;
    LABEL_40:
    *((uint32_t *)this + 41) = SearchMIXFile(&Source, v8);
    LABEL_41:
    result = *((uint32_t *)this + 41);
    if ( result )
    v11 = *(_WORD *)(result + 2);
    LOWORD(result) = *(_WORD *)(result + 4);
    if ( v11 <= (__int16)result )
    result = (__int16)result;
    else
    result = v11;
    if ( result <= 8 )
    result = 8;
    *((uint32_t *)this + 123) = result;
    return result;
}

void * ObjectTypeClass::Destru_vt08(void *Block, char a2)
{
    ObjectTypeClass::Destruct((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  ObjectTypeClass::FreeLoaderBuffer(int this)
{
    __3_YAXPAX_Z(*(void **)this);
    *(uint32_t *)this = 0;
    *(uint32_t *)(this + 4) = 0;
    *(uint32_t *)(this + 8) = 0;
    *(uint8_t *)(this + 12) = 0;
    *(uint32_t *)(this + 16) = 0;
    return 0;
}

// 0x007170A0
int  ObjectTypeClass::DeserializeArrays(#376 *this)
{
    int result; // eax
    int v2; // eax
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // eax
    int v14; // eax
    int v15; // eax
    int v16; // eax
    int v17; // eax
    int v18; // eax
    uint32_t *v19; // [esp+Ch] [ebp+4h]
    int *v20; // [esp+10h] [ebp+8h]
    result = COMObject::GetSizeMaxWrapper((int)v19, v20);
    if ( result >= 0 )
    v2 = 4 * v19[265] + 4 + *v20;
    *v20 = v2;
    v3 = v2 + 4 * v19[272] + 4;
    *v20 = v3;
    v4 = v3 + 4 * v19[279] + 4;
    *v20 = v4;
    v5 = v4 + 4 * v19[286] + 4;
    *v20 = v5;
    v6 = v5 + 4 * v19[293] + 4;
    *v20 = v6;
    v7 = v6 + 4 * v19[300] + 4;
    *v20 = v7;
    v8 = v7 + 4 * v19[307] + 4;
    *v20 = v8;
    v9 = v8 + 4 * v19[314] + 4;
    *v20 = v9;
    v10 = v9 + 4 * v19[321] + 4;
    *v20 = v10;
    v11 = v10 + 4 * v19[328] + 4;
    *v20 = v11;
    v12 = v11 + 4 * v19[463] + 4;
    *v20 = v12;
    v13 = v12 + 4 * v19[470] + 4;
    *v20 = v13;
    v14 = v13 + 4 * v19[201] + 4;
    *v20 = v14;
    v15 = v14 + 4 * v19[373] + 4;
    *v20 = v15;
    v16 = v15 + 4 * v19[254] + 4;
    *v20 = v16;
    v17 = v16 + 4 * v19[208] + 4;
    *v20 = v17;
    v18 = v17 + 4 * v19[482] + 4;
    *v20 = v18;
    *v20 = v18 + 4 * v19[489] + 4;
    return 0;
    return result;
}

// 0x00717BF0
uint32_t * ObjectTypeClass::CheckFlag(uint32_t *this, int a2)
{
    *this = &DynamicVectorClass<AnimTypeClass const *>::`vftable';
    return this;
}

