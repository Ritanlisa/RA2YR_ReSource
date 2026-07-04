#include "idxcontainer.hpp"

// 0x004016F0
int __fastcall IDXContainer::LoadSample(int a1, int a2)
{
    int v3; // ebp
    void (__thiscall ***v4)(uint32_t, int); // ecx
    int v5; // ecx
    uint32_t *v6; // eax
    uint32_t *v7; // esi
    int v8; // eax
    int v9; // ecx
    void (__thiscall ***v11)(uint32_t, int); // ecx
    int v12; // [esp+14h] [ebp-12Ch]
    size_t v13; // [esp+18h] [ebp-128h] BYREF
    uint32_t v14[8]; // [esp+1Ch] [ebp-124h] BYREF
    char v15[260]; // [esp+3Ch] [ebp-104h] BYREF
    v12 = 1;
    v3 = *(uint32_t *)a1 + 36 * a2;
    v4 = *(void (__thiscall ****)(uint32_t, int))(a1 + 272);
    *(uint32_t *)(a1 + 280) = 0;
    if ( v4 )
    (**v4)(v4, 1);
    *(uint32_t *)(a1 + 272) = 0;
    v5 = *(uint32_t *)(a1 + 268);
    *(uint32_t *)(a1 + 280) = v5;
    *(uint32_t *)(a1 + 284) = *(uint32_t *)(v3 + 20);
    if ( (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)v5 + 40))(v5, *(uint32_t *)(v3 + 16), 0) != *(uint32_t *)(v3 + 16) )
    v12 = 0;
    if ( !*(uint32_t *)(v3 + 20) )
    v12 = 0;
    if ( !*(uint32_t *)(a1 + 276) )
    return v12;
    strcpy(v15, (const char *)(a1 + 8));
    strcat(v15, (const char *)v3);
    strcat(v15, aWav);
    v6 = __2_YAPAXI_Z(0x24u);
    if ( v6 )
    v7 = RawFileClass::Construct(v6, (int)v15);
    else
    v7 = 0;
    *(uint32_t *)(a1 + 272) = v7;
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *, uint32_t))(*v7 + 20))(v7, 0)
    || !(*(int (__thiscall **)(uint32_t *, int))(*v7 + 28))(v7, 1)
    || (Struct::ZeroInit32(v14), !ParseWaveFileHeader((int)v7, v14, &v13)) )
    v11 = *(void (__thiscall ****)(uint32_t, int))(a1 + 272);
    if ( v11 )
    (**v11)(v11, 1);
    *(uint32_t *)(a1 + 272) = 0;
    return v12;
    *(uint32_t *)(v3 + 28) = 2;
    if ( v14[4] == 2 )
    *(uint32_t *)(v3 + 28) = 6;
    if ( v14[3] == 2 )
    v8 = *(uint32_t *)(v3 + 28);
    LOBYTE(v8) = v8 | 1;
    *(uint32_t *)(v3 + 28) = v8;
    *(uint32_t *)(v3 + 24) = v14[2];
    v9 = *(uint32_t *)(a1 + 272);
    *(uint32_t *)(a1 + 284) = v13;
    *(uint32_t *)(a1 + 280) = v9;
    return 1;
}

