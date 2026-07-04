#include "artconfig.hpp"

int  ArtConfig::ParseLayoutEntry(uint32_t *this, uint32_t *a2, char **a3, char **a4, int a5)
{
    bool v6; // bl
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // esi
    int v13; // eax
    int v14; // edi
    int v15; // ebx
    int v16; // eax
    int v17; // ebp
    uint32_t *v18; // eax
    int v19; // esi
    void *v21; // [esp+10h] [ebp-88h] BYREF
    char *v22; // [esp+14h] [ebp-84h] BYREF
    char v23; // [esp+1Bh] [ebp-7Dh]
    int v24; // [esp+1Ch] [ebp-7Ch] BYREF
    int v25; // [esp+20h] [ebp-78h] BYREF
    int v26; // [esp+24h] [ebp-74h] BYREF
    int v27; // [esp+28h] [ebp-70h] BYREF
    uint32_t v28[22]; // [esp+2Ch] [ebp-6Ch] BYREF
    uint8_t v29[12]; // [esp+84h] [ebp-14h] BYREF
    int v30; // [esp+90h] [ebp-8h]
    unknown_libname_73(&v21);
    String::Assign(&v22, 0);
    v6 = (int)INIClass::ReadString(a2, a3, a4, &v22, (int)&v21) > 0;
    DeleteAndZero((void **)&v22);
    if ( !v6 )
    goto LABEL_17;
    unknown_libname_73(&v26);
    unknown_libname_73(&v22);
    unknown_libname_73(&v27);
    unknown_libname_73(&v24);
    unknown_libname_73(&v25);
    v7 = String::Tokenize((const char **)&v21, 0, Delimiter, (void **)&v26);
    v8 = String::Tokenize((const char **)&v21, v7, Delimiter, (void **)&v22);
    v9 = String::Tokenize((const char **)&v21, v8, Delimiter, (void **)&v27);
    v10 = String::Tokenize((const char **)&v21, v9, Delimiter, (void **)&v24);
    String::Tokenize((const char **)&v21, v10, Delimiter, (void **)&v25);
    if ( !String::NotEquals((const char **)&v27, 0) )
    goto LABEL_16;
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v22);
    v12 = *(this + 17) + v11;
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v27);
    v14 = *(this + 18) + v13;
    v15 = 5;
    if ( String::NotEquals((const char **)&v24, 0) && String::Length((const char **)&v24) )
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v24);
    v15 = v16;
    if ( !String::NotEquals((const char **)&v25, 0)
    || !String::Length((const char **)&v25)
    || (v17 = ArtConfig::saveConfig(&v25)) == 0 )
    v17 = a5;
    v18 = CCFileClass::Construct2(v28, (char **)&v26);
    v23 = (*(int (__thiscall **)(uint32_t *, uint32_t))(*v18 + 20))(v18, 0);
    v28[0] = &CCFileClass::`vftable';
    v30 = 0;
    Vector::Clear((int)v29);
    v28[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v28);
    if ( !v23 || !v17 )
    LABEL_16:
    DeleteAndZero((void **)&v25);
    DeleteAndZero((void **)&v24);
    DeleteAndZero((void **)&v27);
    DeleteAndZero((void **)&v22);
    DeleteAndZero((void **)&v26);
    LABEL_17:
    DeleteAndZero(&v21);
    return 0;
    if ( __2_YAPAXI_Z(0x40u) )
    v19 = MSShapeAnim::Constructor(&v26, v12, v14, v17, v15, 1, 0);
    else
    v19 = 0;
    DeleteAndZero((void **)&v25);
    DeleteAndZero((void **)&v24);
    DeleteAndZero((void **)&v27);
    DeleteAndZero((void **)&v22);
    DeleteAndZero((void **)&v26);
    DeleteAndZero(&v21);
    return v19;
}

