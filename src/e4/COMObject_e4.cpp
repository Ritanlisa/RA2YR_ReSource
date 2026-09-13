// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E1A00
int COMObject::FindNextActive(unsigned char * a1)
{
{
    if ( !a1 )
    return 0;
    while ( !*((int*)(a1) + 28) )
  {
    a1 = (char *)(*(int (__thiscall **)(char *))(*(int *)(a1) + 4))(a1);
    if ( !a1 )
    return 0;
  }
    return 1;
}
}

// 0x4F4240
int COMObject::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    if ( !a3 )
    return -2147467261;
    if ( memcmp(a2, &IID_IUnknown, 0x10u) && memcmp(a2, &DataGlobal_7EA6E8, 0x10u) )
    return -2147467262;
    *a3 = a1;
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
}
}

// 0x4F43F0
bool COMObject::IsSameType(GScreenClass * aP0)
{
{
    return *(int *)&HouseClass_Player.__pad_5568[23712] == (*(int (__thiscall **)(GScreenClass *))(aP0->parent_gap[0] + 24))(aP0);
}
}

// 0x55AB40
int COMObject::GetStringValue(int a1, unsigned int * a2)
{
{
    if ( !a2 )
    return -2147467261;
    *a2 = (*(int (__thiscall **)(int))(*(int *)(a1) + 36))(a1) + 4;
    *((int*)(a2) + 1) = 0;
    return 0;
}
}

// 0x55ABD0
unsigned int * COMObject::ReturnZeroPos(int a1, unsigned int * a2)
{
{
    *a2 = 0;
    *((int*)(a2) + 1) = 0;
    return a2;
}
}

// 0x55ACA0
unsigned int * COMObject::GetCoord3D(int a1, unsigned int * a2)
{
{
    int *v2;
    int v3;
    int v4;
    v2 = *(int **)(a1 + 8);
    v3 = v2[40];
    v4 = v2[41];
    *a2 = v2[39];
    *((int*)(a2) + 1) = v3;
    *((int*)(a2) + 2) = v4;
    return a2;
}
}

// 0x55AD10
int COMObject::GetSpecialValue(int a1)
{
{
    return (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 1336))(*(int *)(a1 + 8));
}
}

// 0x5F9970
int COMObject::GetSizeMaxWrapper(AbstractClass * aP0, AbstractClass * aP1)
{
{
    int result;
    result = ObjectClass::GetSizeMax((#374 *)aP0);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// 0x6C0050
int COMObject::QueryInterface2()
{
{
    int v2;
    const void *v3;
    int *v4;
    if ( !v4 )
    return -2147467261;
    *v4 = 0;
    if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &DataGlobal_7F7CA0, 0x10u) )
    *v4 = v2;
    if ( !*v4 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 4))(v2);
    return 0;
}
}

// 0x4E30C0
int COMObject::Thunk_COMObject_sub_4E30C0()
{
return 4;
}
