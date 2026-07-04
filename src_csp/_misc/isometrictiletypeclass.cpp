#include "isometrictiletypeclass.hpp"

int  IsometricTileTypeClass::sub_544CB0(int this)
{
    int result; // eax
    result = *(uint32_t *)(this + 164);
    if ( !result )
    if ( *(uint8_t *)(this + 756) )
    MapClass::LoadFileData(this);
    return *(uint32_t *)(this + 164);
    return result;
}

bool  IsometricTileTypeClass::_vt32(int *this, _WORD *a2, int a3)
{
    IsometricTileClass *v4; // eax
    v4 = (IsometricTileClass *)__2_YAPAXI_Z(0xB0u);
    return v4 && IsometricTileClass::IsometricTileClass(v4, *(this + 165), a2);
}

// 0x00549B50
uint32_t *__stdcall IsometricTileTypeClass::vt_entry_6C(uint32_t *a1, uint32_t *a2)
{
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    return a1;
}

// 0x00549B70
int  IsometricTileTypeClass::ProcessPower(int this, int *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // edx
    int v6; // eax
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 660));
    Power::TimerProcess(*(uint32_t *)(this + 664));
    Power::TimerProcess(*(uint32_t *)(this + 668));
    Power::TimerProcess(*(uint32_t *)(this + 672));
    Power::TimerProcess(*(uint32_t *)(this + 692));
    v3 = *(uint32_t *)(this + 700);
    if ( v3 )
    v4 = (*(int (__stdcall **)(int))(*(uint32_t *)(v3 + 4) + 16))(v3 + 4);
    Power::TimerProcess(v4);
    Power::TimerProcess(*(uint32_t *)(this + 704));
    Power::TimerProcess(*(uint32_t *)(this + 708));
    Power::TimerProcess(*(uint32_t *)(this + 724));
    Power::TimerProcess(*(uint32_t *)(this + 728));
    Power::TimerProcess(*(uint32_t *)(this + 732));
    LOBYTE(v5) = *(uint8_t *)(this + 736);
    v6 = Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 737);
    Power::FlagProcess(a2, v6);
    Power::TimerProcess(*(uint32_t *)(this + 740));
    Power::TimerProcess(*(uint32_t *)(this + 744));
    Power::TimerProcess(*(uint32_t *)(this + 748));
    return Power::TimerProcess(*(uint32_t *)(this + 752));
}

int __stdcall IsometricTileTypeClass::_vt05(int *a1, int a2)
{
    int i; // esi
    void (__thiscall ***v3)(uint32_t, int); // ecx
    int result; // eax
    int j; // eax
    for ( i = 0; i < g_SurfaceAnimState; *((uint32_t *)dword_87F69C + i - 1) = 0 )
    v3 = (void (__thiscall ***)(uint32_t, int))*((uint32_t *)dword_87F69C + i);
    if ( v3 )
    (**v3)(v3, 1);
    ++i;
    result = ObjectTypeClass::LoadCleanup((int)a1, a2);
    if ( result >= 0 )
    if ( a1 )
    ObjectTypeClass::Construct(a1, (int)&a2);
    IsometricTileTypeClass::Constructor_0(a1 + 169, 0, 0);
    a1[169] = (int)&DynamicVectorClass<unsigned short *>::`vftable';
    a1[174] = 10;
    a1[173] = 0;
    *a1 = (int)&IsometricTileTypeClass::`vftable';
    a1[1] = (int)&IsometricTileTypeClass::`vftable';
    a1[2] = (int)&IsometricTileTypeClass::`vftable';
    a1[3] = (int)&IsometricTileTypeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 175);
    for ( j = 0; j < g_SurfaceAnimState; *((uint32_t *)dword_87F69C + j - 1) = 0 )
    ++j;
    TerrainClass::InitTheatre(a1);
    return 0;
    return result;
}

int __stdcall IsometricTileTypeClass::_vt06(int a1, int a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_PrefixWrapper(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int __stdcall IsometricTileTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1525862010;
    a2[1] = 298976820;
    a2[2] = 1610654892;
    a2[3] = -1252326136;
    return 0;
}

int  IsometricTileTypeClass::_vt10(uint32_t *this, int a2, int a3)
{
    int result; // eax
    if ( *(this + 175) == a2 )
    *(this + 175) = 0;
    result = *(this + 178);
    if ( result != -1 && *((uint32_t *)g_AnimTypeCount + result) == a2 )
    *(this + 178) = -1;
    return result;
}

int IsometricTileTypeClass::_vt11()
{
    return 18;
}

int IsometricTileTypeClass::_vt12()
{
    return 780;
}

int  IsometricTileTypeClass::_vt16(uint32_t *this)
{
    return *(this + 165);
}

void * IsometricTileTypeClass::_vt08(void *Block, char a2)
{
    IsometricTileTypeClass::CleanupMembers((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  IsometricTileTypeClass::sub_54A190(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  IsometricTileTypeClass::sub_54A1C0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  IsometricTileTypeClass::sub_54A3D0(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  IsometricTileTypeClass::sub_54A480(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * IsometricTileTypeClass::sub_54A760(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<unsigned short *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

